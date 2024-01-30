@interface TSCHChartFeatureScatter : TSCHChartFeature

- (BOOL)supportsSharedAndSeparateX;
- (id)supportedAxisScales;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (id)initWithChartType:(id)a0;
- (Class)presetImagerClass;
- (id)supportedSeriesTypes;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)a0;
- (int)representativeGridValueAxisType;
- (BOOL)supportsValueLabelSpacing;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;

@end
