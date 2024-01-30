@class UIImage;

@interface UIDynamicPatternColor : UIDynamicColor {
    UIImage *_image;
}

- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPatternImage:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
