@class UIImage;

@interface UIDynamicPatternColor : UIDynamicColor {
    UIImage *_image;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (unsigned long long)hash;
- (id)initWithPatternImage:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
