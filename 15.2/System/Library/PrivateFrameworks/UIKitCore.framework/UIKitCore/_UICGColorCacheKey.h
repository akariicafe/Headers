@interface _UICGColorCacheKey : NSObject <NSCopying> {
    struct __CFArray { } *_colors;
}

- (id)initWithColors:(struct CGColor { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCacheKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
