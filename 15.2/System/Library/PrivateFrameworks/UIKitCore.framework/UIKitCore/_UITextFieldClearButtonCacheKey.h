@interface _UITextFieldClearButtonCacheKey : NSObject <NSCopying> {
    int _variant;
    struct CGColor { } *_color;
}

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCacheKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithVariant:(int)a0 color:(struct CGColor { } *)a1;

@end
