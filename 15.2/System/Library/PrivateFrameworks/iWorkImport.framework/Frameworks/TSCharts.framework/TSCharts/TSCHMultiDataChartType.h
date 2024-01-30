@interface TSCHMultiDataChartType : TSCH2DChartType

+ (id)g_genericToSpecificPropertyMapCategoryAxis;

- (Class)repClass;
- (BOOL)isMultiData;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsTrendLines;
- (BOOL)supportsErrorBars;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsValueLabelSpacing;
- (unsigned long long)maxCellsForInsert;
- (BOOL)supportsSeriesShadow;
- (id)cellsCreatedWarning;
- (id)p_genericToSpecificPropertyMap;

@end
