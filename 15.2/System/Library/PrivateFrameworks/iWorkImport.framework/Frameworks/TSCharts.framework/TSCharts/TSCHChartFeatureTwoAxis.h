@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory

- (BOOL)supportsEditing;
- (BOOL)supportsReferenceLines;
- (id)supportedAxisScales;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)requiresYAxisOrdinal;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (id)initWithChartType:(id)a0;
- (Class)presetImagerClass;
- (id)supportedSeriesTypes;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsConnectingLines;
- (int)representativeGridValueAxisType;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (BOOL)supportsIndividualShadowRendering;

@end
