@interface UIDynamicColor : UIColor

- (void)setFill;
- (BOOL)_isDeepColor;
- (void)set;
- (double)alphaComponent;
- (id)colorWithAlphaComponent:(double)a0;
- (id)resolvedColorWithTraitCollection:(id)a0;
- (struct CGColor { } *)CGColor;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (BOOL)_isDynamic;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (id)_highContrastDynamicColor;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)colorSpaceName;
- (id)_backgroundColorIgnoringHighContrast;
- (void)setStroke;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (BOOL)isPatternColor;

@end
