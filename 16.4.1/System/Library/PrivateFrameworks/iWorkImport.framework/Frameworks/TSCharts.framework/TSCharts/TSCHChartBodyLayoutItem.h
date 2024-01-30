@class NSDictionary;

@interface TSCHChartBodyLayoutItem : TSCHChartLayoutItem {
    BOOL _vertical;
}

@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;

- (id)initWithParent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (unsigned long long)countOfElementsForModel:(id)a0 series:(id)a1 forGroupsBySeries:(id)a2 outNewElementBounds:(struct CGRect **)a3 outNewClipRects:(struct CGRect **)a4 outNewElementPaths:(const struct CGPath ***)a5;
- (void)iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (void)layoutOutward;
- (BOOL)layoutSpacePointIsInChartBody:(struct CGPoint { double x0; double x1; })a0;
- (const struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (void)p_addRendererOfClass:(Class)a0 andRep:(id)a1 toArray:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_calcDrawingRectForModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_calcDrawingRectForReferenceLinesForModel:(id)a0;
- (id)p_errorBarSubselectionKnobsForSeries:(id)a0 axisID:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_exactLabelsDrawingRectForSeries:(id)a0;
- (void)p_nudgeBarElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 usingBarModelCache:(id)a1 unitSpaceValueBegin:(double)a2 unitSpaceValueEnd:(double)a3;
- (id)p_refLineSubselectionKnobsForStyleSwapIndex:(unsigned long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformForRenderingLabelForBarColSeries:(unsigned long long)a0 forGroupIndex:(unsigned long long)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformForRenderingLabelForLineAreaSeries:(unsigned long long)a0 forGroup:(unsigned long long)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)p_trendLineEquationSubselectionKnobsForSeries:(id)a0;
- (id)p_trendLineR2SubselectionKnobsForSeries:(id)a0;
- (id)p_trendLineSubselectionKnobsForSeries:(id)a0;
- (id)p_valueLabelSubselectionKnobsForSeries:(id)a0;
- (id)renderersWithRep:(id)a0;
- (id)subselectionKnobPositionsForSelection:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabelForSeries:(unsigned long long)a0 forGroup:(unsigned long long)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;

@end
