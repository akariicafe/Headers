@class UIDynamicColor;

@interface UIDynamicModifiedColor : UIDynamicColor {
    UIDynamicColor *_baseColor;
    double _alphaComponent;
    long long _contrast;
}

+ (BOOL)supportsSecureCoding;

- (id)colorWithAlphaComponent:(double)a0;
- (BOOL)_isDynamicTintColor;
- (void)encodeWithCoder:(id)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_highContrastDynamicColor;
- (unsigned long long)hash;
- (id)_backgroundColorIgnoringHighContrast;
- (id)initWithBaseColor:(id)a0 alphaComponent:(double)a1 contrast:(long long)a2;

@end
