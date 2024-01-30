@interface TSCHChartFeatureMixed : TSCHChartFeatureCategory

- (BOOL)supportsEditing;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)supportsSymbolOverhang;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
