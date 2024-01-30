@interface UIDynamicColor : UIColor

- (BOOL)_isDeepColor;
- (id)colorSpaceName;
- (void)setFill;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (id)colorWithAlphaComponent:(double)a0;
- (void)setStroke;
- (double)alphaComponent;
- (void)set;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (struct CGColor { } *)CGColor;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (BOOL)isPatternColor;
- (id)resolvedColorWithTraitCollection:(id)a0;
- (BOOL)_isDynamic;
- (id)_backgroundColorIgnoringHighContrast;
- (id)_highContrastDynamicColor;

@end
