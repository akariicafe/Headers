@class NSValue, TSCHLegendModelCache;

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem {
    NSValue *_legendGeometryFrame;
}

@property (readonly) TSCHLegendModelCache *legendModelCache;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } legendModelGeometryFrame;

- (id)initWithParent:(id)a0;
- (void)setLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)clearAll;
- (id)renderersWithRep:(id)a0;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (void)iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (id)textStyleProvidingSource;
- (const struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (void)clearLayoutSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingBadge:(unsigned long long)a0 cellType:(int)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 cellType:(int)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 cellType:(int)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (void)updateLegendGeometryFrameFromLegendModelCache;
- (double)p_legendModelWidth;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformForRenderingLabel:(unsigned long long)a0 paragraphStyle:(id)a1 cellType:(int)a2 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 outElementSize:(struct CGSize { double x0; double x1; } *)a4 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;
- (void)resetLayoutSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 paragraphStyle:(id)a1 cellType:(int)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 outElementSize:(struct CGSize { double x0; double x1; } *)a4 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;

@end
