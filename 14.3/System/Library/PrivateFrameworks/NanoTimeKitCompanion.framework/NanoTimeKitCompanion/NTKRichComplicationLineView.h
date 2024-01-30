@interface NTKRichComplicationLineView : NTKRichComplicationShapeView

- (double)_shapeLineWidth;
- (struct CGPoint { double x0; double x1; })_pointAtProgress:(float)a0;
- (void)_setupGradientLayer:(id)a0;
- (id)_normalizeGradientLocations:(id)a0;
- (const struct CGPath { } *)_generatePath;
- (BOOL)_shouldReverseGradient;

@end
