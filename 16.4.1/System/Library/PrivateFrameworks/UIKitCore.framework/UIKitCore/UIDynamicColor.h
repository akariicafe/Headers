@interface UIDynamicColor : UIColor

- (id)resolvedColorWithTraitCollection:(id)a0;
- (BOOL)_isDynamic;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (double)alphaComponent;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)CGColor;
- (BOOL)_isDeepColor;
- (BOOL)isPatternColor;
- (id)colorSpaceName;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (void)set;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (void)setFill;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)_highContrastDynamicColor;
- (id)_backgroundColorIgnoringHighContrast;
- (id)_resolvedMaterialWithTraitCollection:(id)a0;

@end
