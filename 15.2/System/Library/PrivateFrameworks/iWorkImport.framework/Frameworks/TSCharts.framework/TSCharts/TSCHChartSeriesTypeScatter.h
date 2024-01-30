@interface TSCHChartSeriesTypeScatter : TSCHChartSeriesType

- (id)init;
- (BOOL)supportsFillSetFill;
- (id)elementBuilder;
- (unsigned long long)valueDimensions;
- (BOOL)supportsValueLabelsAxisOption;
- (id)axisTypesForValueLabels;
- (BOOL)supportsValueLabelsSeriesName;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (BOOL)supportsSeriesFill;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsDownsampling;
- (BOOL)supportsSymbolDrawing;
- (id)p_supportedSymbolsIfSymbolsSupported;
- (BOOL)supportsGridPartitioning;
- (int)legendBadgeType;
- (id)propertiesForReferenceColors;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (BOOL)supportsLineTypeNone;
- (BOOL)supportsLineConnectionStyle;
- (id)userInterfaceName;
- (id)supportedValueLabelsAxisCombinations;
- (id)g_genericToSpecificPropertyMapScatter;

@end
