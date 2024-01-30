@interface TSCHChartFeatureArea : TSCHChartFeatureCategory

- (id)categoryLabelPositioner;
- (double)maxDepthRatio;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (Class)stageClass;
- (id)supportedAxisScales;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (Class)presetImagerClass;
- (int)labelOrientation;
- (BOOL)supportsInterSetDepthGap;
- (int)deprecated3DShadowSpecificProperty;

@end
