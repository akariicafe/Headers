@interface TSCHMultiDataChartType : TSCH2DChartType

+ (id)g_genericToSpecificPropertyMapCategoryAxis;

- (Class)repClass;
- (id)cellsCreatedWarning;
- (id)genericToSpecificPropertyMap;
- (BOOL)isMultiData;
- (unsigned long long)maxCellsForInsert;
- (id)p_genericToSpecificPropertyMap;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsErrorBars;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsTrendLines;
- (BOOL)supportsValueLabelSpacing;

@end
