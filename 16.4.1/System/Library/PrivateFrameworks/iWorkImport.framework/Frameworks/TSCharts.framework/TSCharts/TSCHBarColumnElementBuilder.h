@interface TSCHBarColumnElementBuilder : TSCHElementBuilder {
    BOOL _vertical;
}

+ (void)calculateGapsForChartModel:(id)a0 forTotalWidth:(float)a1 outBarWidth:(float *)a2 outBarGroupGap:(float *)a3 outBarGap:(float *)a4;

- (id)init;
- (unsigned long long)countOfBarRectsForSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewGroupIndexArray:(unsigned long long **)a3 outNewElementRectsArray:(struct CGRect **)a4 outNewClipRectsArray:(struct CGRect **)a5;
- (unsigned long long)countOfElementsInSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewElementBounds:(struct CGRect **)a3 outNewClipRects:(struct CGRect **)a4 outNewElementPaths:(const struct CGPath ***)a5 outSelectionKnobLocations:(id *)a6 forHighlightPath:(BOOL)a7;
- (unsigned long long)countOfErrorBarsInSeries:(id)a0 forGroups:(id)a1 forAxisID:(id)a2 forBodyLayout:(id)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 outNewErrorBarDescriptors:(struct **)a5;
- (unsigned long long)countOfLabelsForSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewTransforms:(struct CGAffineTransform **)a3 outNewElementSizes:(struct CGSize **)a4 outNewClipRect:(struct CGRect **)a5 outNewStrings:(id *)a6;
- (id)initWithVertical:(BOOL)a0;
- (struct CGPath { } *)newRoundedRectPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 chartInfo:(id)a1 series:(id)a2 groupIndex:(unsigned long long)a3 isVertical:(BOOL)a4 forGroups:(id)a5 forBodyLayout:(id)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nudgeBarElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inPlotAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBarModelCache:(id)a2 unitSpaceValueBegin:(double)a3 unitSpaceValueEnd:(double)a4 withViewScale:(double)a5;
- (double)p_beginValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 unitSpaceIntercept:(double)a2 relativelyPositive:(BOOL)a3 valueAxis:(id)a4;
- (void)p_calcGapsForBodyLayout:(id)a0 elementCount:(unsigned long long)a1 outBarWidth:(float *)a2 outBarGroupGap:(float *)a3 outBarGap:(float *)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_createBarRectInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSeries:(id)a1 groupIndex:(unsigned long long)a2 count:(unsigned long long)a3 valueAxis:(id)a4 groupAxis:(id)a5 barWidth:(float)a6 barGroupGap:(float)a7 barGap:(float)a8;
- (unsigned long long)p_logicalSeriesIndexForSeries:(id)a0;
- (void)p_nudgeBarElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inPlotAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBarModelCache:(id)a2 unitSpaceValueBegin:(double)a3 unitSpaceValueEnd:(double)a4 withViewScale:(double)a5;
- (unsigned long long)p_numberOfSeriesForGapCalcInModel:(id)a0;
- (void)p_trendlineInfoForSeries:(id)a0 forBodyLayout:(id)a1 outVertical:(BOOL *)a2 outOffsetInBody:(double *)a3;

@end
