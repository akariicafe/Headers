@interface _UIModernSwitchVisualElementCacheKey : NSObject <NSCopying> {
    unsigned long long _mask;
    struct CGColor { } *_color;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMask:(unsigned long long)a0 color:(struct CGColor { } *)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCacheKey:(id)a0;
- (unsigned long long)hash;

@end
