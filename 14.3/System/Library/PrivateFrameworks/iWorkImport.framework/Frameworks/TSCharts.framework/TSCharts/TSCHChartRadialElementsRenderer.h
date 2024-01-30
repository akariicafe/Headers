@class NSIndexSet;

@interface TSCHChartRadialElementsRenderer : TSCHRenderer {
    struct CGPoint { double x; double y; } mHitPoint;
    unsigned long long mHitSeries;
    float mHitStartAngle;
    float mHitRadius;
    float mHitExplosion;
    BOOL mDidMoveDuringTouchIfNotThenRotateChartForDemo;
    NSIndexSet *mPartialRenderingSeriesIndexSet;
    BOOL mPartialRenderingInclusionFlag;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)chunkPlane;
- (void)p_drawWedgePathIntoContext:(struct CGContext { } *)a0 path:(struct CGPath { } *)a1 fill:(id)a2 stroke:(id)a3 opacity:(double)a4 withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (BOOL)p_shouldRenderSeriesIndex:(unsigned long long)a0;
- (struct CGLayer { } *)p_newPreRenderedImageWithContext:(struct CGContext { } *)a0 wedgePath:(struct CGPath { } *)a1 fullWedgePath:(struct CGPath { } *)a2 fill:(id)a3 stroke:(id)a4 shadow:(id)a5 outUserSpaceLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6;
- (void)p_drawOnlyShadow:(id)a0 forImage:(struct CGLayer { } *)a1 intoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 intoContext:(struct CGContext { } *)a3 atViewScale:(double)a4 usingBlendMode:(int)a5 opacity:(double)a6;
- (void)p_drawOnlyShapeImage:(struct CGLayer { } *)a0 intoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intoContext:(struct CGContext { } *)a2 usingBlendMode:(int)a3 opacity:(double)a4;
- (void)p_drawLinePathsIntoContext:(struct CGContext { } *)a0 linePath:(struct CGPath { } *)a1 tailPath:(struct CGPath { } *)a2 headPath:(struct CGPath { } *)a3 fillTail:(BOOL)a4 fillHead:(BOOL)a5 stroke:(id)a6;
- (double)p_calculateIntersectionAreaForRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 circleCenter:(struct CGPoint { double x0; double x1; })a1 circleRadius:(double)a2;
- (void)renderLabelsWithWedgeLayoutInfo:(id)a0 paragraphStyle:(id)a1 context:(struct CGContext { } *)a2;
- (void)renderLabelWithPieLabel:(id)a0 combinedLabelTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 context:(struct CGContext { } *)a2 paragraphStyle:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chartLayoutSpaceRenderingRect;
- (void)drawOnlySeriesIndicies:(id)a0;
- (void)drawAllButSeriesIndicies:(id)a0;
- (void)drawAll;

@end
