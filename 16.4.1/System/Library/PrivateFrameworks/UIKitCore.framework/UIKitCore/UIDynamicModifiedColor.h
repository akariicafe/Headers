@class UIDynamicColor;

@interface UIDynamicModifiedColor : UIDynamicColor {
    UIDynamicColor *_baseColor;
    double _alphaComponent;
    long long _contrast;
}

+ (BOOL)supportsSecureCoding;

- (id)_resolvedColorWithTraitCollection:(id)a0;
- (BOOL)_isDynamicTintColor;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBaseColor:(id)a0 alphaComponent:(double)a1 contrast:(long long)a2;
- (id)colorWithAlphaComponent:(double)a0;
- (id)_highContrastDynamicColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_backgroundColorIgnoringHighContrast;
- (unsigned long long)hash;
- (id)description;
- (id)_resolvedMaterialWithTraitCollection:(id)a0;
- (void).cxx_destruct;

@end
