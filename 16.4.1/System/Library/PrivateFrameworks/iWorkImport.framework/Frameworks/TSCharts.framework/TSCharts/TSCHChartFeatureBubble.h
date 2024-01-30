@interface TSCHChartFeatureBubble : TSCHChartFeatureScatter

- (BOOL)supportsSharedAndSeparateX;
- (int)representativeGridValueAxisType;
- (BOOL)supportsShowLabelsInFrontOption;
- (id)defaultDataFileName;
- (id)filteredStyleOwnersFromStyleOwners:(id)a0;
- (id)genericToSpecificPropertyMap;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)a0;
- (id)initWithChartType:(id)a0;
- (Class)presetImagerClass;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsEditingForAxisID:(id)a0;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
