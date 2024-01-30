@interface TSCHChartSeriesTypeStackedColumn : TSCHChartSeriesTypeColumn

- (id)init;
- (unsigned int)adjustLabelPosition:(unsigned int)a0 forAxisValue:(double)a1 intercept:(double)a2;
- (double)beginDataValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 valueAxisID:(id)a2;
- (double)beginDataValueForSeries:(id)a0 valueIndex:(unsigned long long)a1 valueAxisID:(id)a2;
- (double)beginValueForSeries:(unsigned long long)a0 groupIndex:(unsigned long long)a1 unitSpaceIntercept:(double)a2 relativelyPositive:(BOOL)a3 valueAxis:(id)a4;
- (id)elementBuilder;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapStackedColumn;
- (id)genericToSpecificPropertyMap;
- (id)legalChartLabelPositions;
- (unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)a0;
- (unsigned long long)seriesIndexForDrawing:(id)a0;
- (BOOL)supportsBarGap;
- (id)userInterfaceName;
- (id)userInterfaceNameForLabelPosition:(id)a0;

@end
