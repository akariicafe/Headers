@interface TSCHChartAbstractLineElementsRenderer : TSCHRenderer

- (int)chunkPlane;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_adjustTransformForAADefeatInContext:(struct CGContext { } *)a0 inTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 forSeriesShape:(struct CGPath { } *)a2 inBodyBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)p_clipOutSymbolsInContext:(struct CGContext { } *)a0 withTransformArray:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 withCount:(unsigned long long)a2 forSeries:(id)a3;
- (id)p_findChartRootLayoutItem:(id)a0;
- (void)p_finishContextAfterRendering:(struct CGContext { } *)a0 modelCache:(id)a1 didEnableTransparencyLayer:(BOOL)a2;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_renderLabelsIntoContext:(struct CGContext { } *)a0 seriesIndex:(unsigned long long)a1 model:(id)a2 modelCache:(id)a3 bodyLayoutItem:(id)a4 groupIndexSet:(id)a5;
- (void)p_setupContextForRendering:(struct CGContext { } *)a0 layerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 modelCache:(id)a2 shadow:(id)a3 outDidEnableTransparencyLayer:(BOOL *)a4;
- (id)symbolTransformsForRenderingElements;
- (BOOL)useBlendModeCopyForTransparencyLayer;

@end
