@interface TSCHChartSeriesTypeArea : TSCHChartSeriesType

- (id)init;
- (id)fillPropertyTypeName;
- (int)fillPropertyType;
- (id)elementBuilder;
- (unsigned long long)valueDimensions;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsDownsampling;
- (BOOL)supportsSymbolDrawing;
- (int)legendBadgeType;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (id)userInterfaceName;
- (id)g_genericToSpecificPropertyMapArea;

@end
