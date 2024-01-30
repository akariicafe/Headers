@interface _UIContentUnavailableViewCacheKey : NSObject <NSCopying> {
    unsigned long long _style;
    struct CGColor { } *_color;
}

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCacheKey:(id)a0;
- (id)initWithStyle:(unsigned long long)a0 color:(struct CGColor { } *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
