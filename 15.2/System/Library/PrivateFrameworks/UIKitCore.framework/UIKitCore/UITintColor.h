@interface UITintColor : UIDynamicColor

- (void)setFill;
- (BOOL)_isDeepColor;
- (void)set;
- (double)alphaComponent;
- (struct CGColor { } *)CGColor;
- (BOOL)_isDynamicTintColor;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)colorSpaceName;
- (unsigned long long)hash;
- (void)setStroke;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (BOOL)isPatternColor;

@end
