@interface TSCHChartFeatureBar : TSCHChartFeatureCategory

- (BOOL)isHorizontal;
- (int)representativeGridValueAxisType;
- (BOOL)supportsCategoryAxisSeriesNames;
- (id)categoryLabelPositioner;
- (id)columnShapeUIName;
- (id)defaultDataFileName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (id)genericToSpecificPropertyMap;
- (id)initWithChartType:(id)a0;
- (id)initialSceneWithChartInfo:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1;
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
- (id)valueLabelPositioner;

@end
