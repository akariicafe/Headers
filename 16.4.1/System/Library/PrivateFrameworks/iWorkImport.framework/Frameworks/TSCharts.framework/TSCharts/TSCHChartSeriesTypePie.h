@interface TSCHChartSeriesTypePie : TSCHChartSeriesType

- (id)init;
- (int)legendBadgeType;
- (unsigned long long)valueDimensions;
- (id)axisTypesForValueLabels;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0 forSeries:(id)a1;
- (BOOL)floatValueForLabelExplosion:(float *)a0 series:(id)a1;
- (id)g_genericToSpecificPropertyMapPie;
- (id)genericToSpecificPropertyMap;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)inspectorLocalizedValueLabelsTabName;
- (id)legalChartLabelPositions;
- (id)seriesFillLabelUIString;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsCalloutLines;
- (BOOL)supportsValueLabelsSeriesName;
- (id)userInterfaceName;
- (id)userInterfaceNameForLabelPosition:(id)a0;

@end
