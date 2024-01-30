@interface TSCHChartSeriesTypeLine : TSCHChartSeriesType

- (id)init;
- (int)legendBadgeType;
- (unsigned long long)valueDimensions;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapLine;
- (id)genericToSpecificPropertyMap;
- (id)propertiesForReferenceColors;
- (int)seriesElementType;
- (BOOL)supportsDownsampling;
- (BOOL)supportsFillSetFill;
- (BOOL)supportsLineConnectionStyle;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSymbolDrawing;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (id)userInterfaceName;

@end
