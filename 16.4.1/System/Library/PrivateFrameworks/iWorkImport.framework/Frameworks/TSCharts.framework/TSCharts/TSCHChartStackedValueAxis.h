@interface TSCHChartStackedValueAxis : TSCHChartValueAxis

- (double)doubleAxisToModelValue:(double)a0;
- (double)doubleModelToAxisValue:(double)a0 forSeries:(id)a1;
- (double)interceptForAxis:(id)a0;
- (id)p_orthogonalAxisForSeries:(id)a0;
- (BOOL)supportsReferenceLines;
- (double)unitSpaceValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 min:(double)a2 max:(double)a3;
- (double *)unitSpaceValuesForSeries:(id)a0 groupIndexSet:(id)a1 min:(double)a2 max:(double)a3;
- (void)updateGridValueTypeInterceptInAnalysis:(id)a0;
- (void)updateModelAxisAnalysis:(id)a0;
- (void)updateMultiDataModelAxisAnalysis:(id)a0;

@end
