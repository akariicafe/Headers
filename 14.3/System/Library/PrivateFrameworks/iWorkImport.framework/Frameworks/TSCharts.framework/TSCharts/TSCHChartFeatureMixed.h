@interface TSCHChartFeatureMixed : TSCHChartFeatureCategory

- (BOOL)supportsEditing;
- (id)supportedAxisScales;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (BOOL)supportsMultipleSeriesTypes;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (Class)presetImagerClass;
- (id)supportedSeriesTypes;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsIndividualShadowRendering;

@end
