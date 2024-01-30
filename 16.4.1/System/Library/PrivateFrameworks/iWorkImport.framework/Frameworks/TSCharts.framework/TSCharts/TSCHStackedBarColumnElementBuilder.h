@interface TSCHStackedBarColumnElementBuilder : TSCHBarColumnElementBuilder

- (struct CGPath { } *)newRoundedRectPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 chartInfo:(id)a1 series:(id)a2 groupIndex:(unsigned long long)a3 isVertical:(BOOL)a4 forGroups:(id)a5 forBodyLayout:(id)a6;
- (double)p_beginValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 unitSpaceIntercept:(double)a2 relativelyPositive:(BOOL)a3 valueAxis:(id)a4;
- (unsigned long long)p_logicalSeriesIndexForSeries:(id)a0;
- (unsigned long long)p_numberOfSeriesForGapCalcInModel:(id)a0;
- (id)p_stackedRectsWithChartInfo:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2;

@end
