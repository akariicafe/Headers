@class UIDynamicColor;

@interface UIDynamicModifiedColor : UIDynamicColor {
    UIDynamicColor *_baseColor;
    double _alphaComponent;
    long long _contrast;
}

+ (BOOL)supportsSecureCoding;

- (id)colorWithAlphaComponent:(double)a0;
- (void).cxx_destruct;
- (id)initWithBaseColor:(id)a0 alphaComponent:(double)a1 contrast:(long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_backgroundColorIgnoringHighContrast;
- (id)_highContrastDynamicColor;
- (void)encodeWithCoder:(id)a0;

@end
