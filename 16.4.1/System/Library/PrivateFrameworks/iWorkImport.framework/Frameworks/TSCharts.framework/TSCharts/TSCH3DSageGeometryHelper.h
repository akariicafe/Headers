@interface TSCH3DSageGeometryHelper : TSCHSageGeometryHelper

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeSageChartAreaBoundsForChartInfo:(id)a0 geometryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 returningContainingViewportSize:(id *)a2;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeSageLayoutCBBForSpiceDoc:(BOOL)a0;
- (BOOL)p_hasValidContainingViewport;

@end
