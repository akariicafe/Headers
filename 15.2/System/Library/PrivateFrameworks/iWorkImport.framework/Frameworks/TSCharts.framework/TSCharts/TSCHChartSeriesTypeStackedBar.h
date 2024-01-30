@interface TSCHChartSeriesTypeStackedBar : TSCHChartSeriesTypeBar

- (id)init;
- (id)elementBuilder;
- (unsigned int)adjustLabelPosition:(unsigned int)a0 forAxisValue:(double)a1 intercept:(double)a2;
- (id)legalChartLabelPositions;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsBarGap;
- (id)userInterfaceNameForLabelPosition:(id)a0;
- (double)beginValueForSeries:(unsigned long long)a0 groupIndex:(unsigned long long)a1 unitSpaceIntercept:(double)a2 relativelyPositive:(BOOL)a3 valueAxis:(id)a4;
- (double)beginDataValueForSeries:(id)a0 valueIndex:(unsigned long long)a1 valueAxisID:(id)a2;
- (double)beginDataValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 valueAxisID:(id)a2;
- (unsigned long long)seriesIndexForDrawing:(id)a0;
- (unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)a0;
- (id)userInterfaceName;
- (id)g_genericToSpecificPropertyMapStackedBar;

@end
