@interface TSCHChartLogAxis : TSCHChartValueAxis

- (double)interceptForAxis:(id)a0;
- (id)userMax;
- (id)userMin;
- (double)doubleModelToAxisValue:(double)a0 forSeries:(id)a1;
- (BOOL)shouldAnalyzeAxisValue:(double)a0;
- (void)updateGridValueTypeInterceptInAnalysis:(id)a0;
- (double)doubleAxisToModelValue:(double)a0;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)a0;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)a0;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)a0;
- (double)unitSpaceValueForDataSpaceValue:(double)a0 min:(double)a1 max:(double)a2;
- (double)validateUserMinForDouble:(double)a0;
- (double)validateUserMaxForDouble:(double)a0;
- (id)p_orthogonalAxis;

@end
