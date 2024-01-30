@interface AKBoxAdornmentLayer : AKAdornmentLayer

- (BOOL)_drawsBorderForAnnotation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectangleForAnnotation:(id)a0;
- (void)updateAdornmentElements;
- (void)updateSublayersWithScale:(double)a0;

@end
