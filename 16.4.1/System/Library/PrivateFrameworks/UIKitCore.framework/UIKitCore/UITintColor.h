@interface UITintColor : UIDynamicColor

- (id)_resolvedColorWithTraitCollection:(id)a0;
- (double)alphaComponent;
- (BOOL)_isDynamicTintColor;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)CGColor;
- (BOOL)_isDeepColor;
- (BOOL)isPatternColor;
- (id)colorSpaceName;
- (void)setStroke;
- (void)set;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (void)setFill;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
