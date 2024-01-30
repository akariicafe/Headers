@interface TSCHChartFeatureDonut : TSCHChartFeaturePieFamily

- (id)defaultDataFileName;
- (BOOL)supportsCalloutLines;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (Class)presetImagerClass;
- (float)defaultLabelExplosionPercentage;
- (BOOL)supportsPlaceTitleAtCenter;
- (double)minInnerRadiusPercentage;
- (double)maxInnerRadiusPercentage;

@end
