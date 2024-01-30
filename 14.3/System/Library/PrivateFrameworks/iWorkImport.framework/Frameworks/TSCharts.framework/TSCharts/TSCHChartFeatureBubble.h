@interface TSCHChartFeatureBubble : TSCHChartFeatureScatter

- (BOOL)supportsSharedAndSeparateX;
- (id)supportedAxisScales;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (Class)presetImagerClass;
- (id)supportedSeriesTypes;
- (BOOL)supportsEditingForAxisID:(id)a0;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsBubbleOptions;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)a0;
- (int)representativeGridValueAxisType;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (BOOL)supportsShowLabelsInFrontOption;
- (id)filteredStyleOwnersFromStyleOwners:(id)a0;
- (void)p_initializeAxisIDs;

@end
