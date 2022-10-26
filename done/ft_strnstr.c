/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:42:50 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/23 11:39:22 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((haystack[i++] != '\0') && (i < len))
	{
		if (haystack[i] == *needle)
		{
			while (haystack[i + j] == needle[j])
					j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
			else
				return (NULL);
		}
	}
	return ((char *)haystack);
}