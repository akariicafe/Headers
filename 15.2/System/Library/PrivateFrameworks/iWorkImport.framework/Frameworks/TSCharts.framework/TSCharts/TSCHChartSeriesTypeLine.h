@interface TSCHChartSeriesTypeLine : TSCHChartSeriesType

- (id)init;
- (id)fillPropertyTypeName;
- (BOOL)supportsFillSetFill;
- (int)fillPropertyType;
- (id)elementBuilder;
- (unsigned long long)valueDimensions;
- (int)seriesElementType;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (BOOL)supportsSeriesFill;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsDownsampling;
- (BOOL)supportsSymbolDrawing;
- (int)legendBadgeType;
- (id)propertiesForReferenceColors;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (BOOL)supportsLineConnectionStyle;
- (id)userInterfaceName;
- (id)g_genericToSpecificPropertyMapLine;

@end
