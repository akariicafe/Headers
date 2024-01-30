@interface TSCHChartGridRenderer : TSCHRenderer

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_frame;
- (void)p_debugRenderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_drawFillWithContext:(struct CGContext { } *)a0 fill:(id)a1 frameToDraw:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)p_majorLocationsWithAxis:(id)a0;
- (void)p_renderBackground:(struct CGContext { } *)a0 style:(id)a1;
- (void)p_renderGridlines:(struct CGContext { } *)a0 axis:(id)a1 locations:(id)a2 showProperty:(int)a3 strokeProperty:(int)a4 shadowProperty:(int)a5 opacityProperty:(int)a6;
- (void)p_renderGridlinesWithContext:(struct CGContext { } *)a0 axis:(id)a1 stroke:(id)a2 locations:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
