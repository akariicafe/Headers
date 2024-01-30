@interface _UICGColorCacheKey : NSObject <NSCopying> {
    struct __CFArray { } *_colors;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColors:(struct CGColor { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCacheKey:(id)a0;

@end
