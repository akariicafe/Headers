@interface NTKRichComplicationLineView : CDRichComplicationShapeView

- (double)_shapeLineWidth;
- (const struct CGPath { } *)_generatePath;
- (id)_normalizeGradientLocations:(id)a0;
- (struct CGPoint { double x0; double x1; })_pointAtProgress:(float)a0;
- (void)_setupGradientLayer:(id)a0;
- (BOOL)_shouldReverseGradient;

@end
