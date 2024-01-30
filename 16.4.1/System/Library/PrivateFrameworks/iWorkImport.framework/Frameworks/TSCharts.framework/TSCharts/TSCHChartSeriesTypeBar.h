@interface TSCHChartSeriesTypeBar : TSCHChartSeriesType

- (BOOL)isVertical;
- (id)init;
- (unsigned long long)valueDimensions;
- (unsigned int)adjustLabelPosition:(unsigned int)a0 forAxisValue:(double)a1 intercept:(double)a2;
- (id)axisTypesForValueLabels;
- (BOOL)chunkedBuildsIncludeInterceptValues;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapBar;
- (id)genericToSpecificPropertyMap;
- (id)legalChartLabelPositions;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsBarGap;
- (BOOL)supportsDownsampling;
- (BOOL)supportsRoundedCorners;
- (BOOL)supportsSetGap;
- (BOOL)useInBarGapCalculations;
- (id)userInterfaceName;
- (id)userInterfaceNameForLabelPosition:(id)a0;

@end
