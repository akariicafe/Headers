@interface TSCHChartFeatureColumn : TSCHChartFeatureCategory

- (BOOL)supportsCategoryAxisSeriesNames;
- (id)categoryLabelPositioner;
- (id)columnShapeUIName;
- (id)defaultDataFileName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (id)genericToSpecificPropertyMap;
- (int)labelOrientation;
- (double)maxDepthRatio;
- (Class)presetImagerClass;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (Class)stageClass;
- (id)supportedAxisScales;
- (BOOL)supportsColumnShape;
- (BOOL)supportsElementChunking;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsSeriesLabels;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
