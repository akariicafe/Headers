@interface TSCHChartStackedValueAxis : TSCHChartValueAxis

- (double)interceptForAxis:(id)a0;
- (double)doubleModelToAxisValue:(double)a0 forSeries:(id)a1;
- (BOOL)supportsReferenceLines;
- (void)updateGridValueTypeInterceptInAnalysis:(id)a0;
- (void)updateMultiDataModelAxisAnalysis:(id)a0;
- (double)doubleAxisToModelValue:(double)a0;
- (void)updateModelAxisAnalysis:(id)a0;
- (double)unitSpaceValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 min:(double)a2 max:(double)a3;
- (double *)unitSpaceValuesForSeries:(id)a0 groupIndexSet:(id)a1 min:(double)a2 max:(double)a3;
- (id)p_orthogonalAxisForSeries:(id)a0;

@end
