@interface _UITextFieldClearButtonCacheKey : NSObject <NSCopying> {
    int _variant;
    struct CGColor { } *_color;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCacheKey:(id)a0;
- (unsigned long long)hash;
- (id)initWithVariant:(int)a0 color:(struct CGColor { } *)a1;

@end
