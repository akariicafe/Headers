@interface TSCHChartFeatureColumn : TSCHChartFeatureCategory

- (id)categoryLabelPositioner;
- (BOOL)supportsSeriesLabels;
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
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsElementChunking;
- (BOOL)supportsCategoryAxisSeriesNames;
- (int)labelOrientation;
- (BOOL)supportsColumnShape;
- (id)columnShapeUIName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;

@end
