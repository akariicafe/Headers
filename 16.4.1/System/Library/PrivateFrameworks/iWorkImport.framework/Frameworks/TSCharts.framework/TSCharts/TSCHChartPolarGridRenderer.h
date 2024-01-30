@interface TSCHChartPolarGridRenderer : TSCHChartGridRenderer

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_frame;
- (void)p_debugRenderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_drawFillWithContext:(struct CGContext { } *)a0 fill:(id)a1 frameToDraw:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)p_majorLocationsWithAxis:(id)a0;
- (BOOL)p_polarAxisIsEnabled:(int)a0;
- (struct CGPath { } *)p_polarAxisShapePathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 unitSpaceValue:(double)a1 numberOfValues:(unsigned long long)a2;
- (void)p_renderGridlinesWithContext:(struct CGContext { } *)a0 axis:(id)a1 stroke:(id)a2 locations:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (double)p_rotationInRadians;

@end
