@interface _UIContentUnavailableViewCacheKey : NSObject <NSCopying> {
    unsigned long long _style;
    struct CGColor { } *_color;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithStyle:(unsigned long long)a0 color:(struct CGColor { } *)a1;
- (BOOL)isEqualToCacheKey:(id)a0;

@end
