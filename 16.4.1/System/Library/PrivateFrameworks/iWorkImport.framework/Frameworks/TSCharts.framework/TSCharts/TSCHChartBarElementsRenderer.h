@interface TSCHChartBarElementsRenderer : TSCHRenderer {
    BOOL _vertical;
    BOOL _touchInResize;
    BOOL _touchInBody;
    unsigned long long _hitSeriesIndex;
    unsigned long long _hitValueIndex;
    double _hitFudgeOffset;
    BOOL _resizeIsOutsideBody;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastDrawRect;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barElementFrameForSeries:(id)a0 groupIndex:(unsigned long long)a1;
- (int)chunkPlane;
- (struct CGPath { } *)clippingPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inGroupIndex:(unsigned long long)a1 series:(id)a2 withContext:(struct CGContext { } *)a3 relativelyPositive:(BOOL)a4 stackRects:(id)a5 forceRoundedCornersOff:(BOOL)a6;
- (void)enumerateElementsForSeries:(id)a0 context:(struct CGContext { } *)a1 elementCount:(unsigned long long)a2 groupIndexes:(unsigned long long *)a3 elementRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 clipRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5 forBlock:(id /* block */)a6;
- (id)initWithChartRep:(id)a0 layoutItem:(id)a1;
- (void)p_drawBars:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_drawLabels:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_drawLayer:(struct CGLayer { } *)a0 intoContext:(struct CGContext { } *)a1 contextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 groupIndex:(unsigned long long)a3 series:(id)a4 relativelyPositive:(BOOL)a5 stackRects:(id)a6 forceRoundedCornersOff:(BOOL)a7;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)p_strokeForSeriesIndex:(unsigned long long)a0 withContext:(struct CGContext { } *)a1;
- (void)renderElementStroke:(id)a0 intoContext:(struct CGContext { } *)a1 usingElementRenderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inGroupIndex:(unsigned long long)a3 series:(id)a4 relativelyPositive:(BOOL)a5 stackRects:(id)a6 forceRoundedCornersOff:(BOOL)a7;
- (void)renderRoundedCornerElementStrokeIntoContext:(struct CGContext { } *)a0 stroke:(id)a1 clippingPath:(struct CGPath { } *)a2 elementRenderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderingElementFrameForBarElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 groupIndex:(unsigned long long)a1 modelCache:(id)a2 stroke:(id)a3 viewScale:(double)a4 contextInfo:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; struct CGPoint { double x0; double x1; } x1; })a5 returningFillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6 strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a7;
- (struct CGPath { } *)roundedCornerPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldRoundOuterEndOnly:(BOOL)a1 relativelyPositive:(BOOL)a2;
- (id)stackRectsWithContext:(struct CGContext { } *)a0;
- (BOOL)supportsSeparateLabelsRenderPass;

@end
