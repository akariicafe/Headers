@interface TSCHChartFeatureBar : TSCHChartFeatureCategory

- (BOOL)isHorizontal;
- (id)valueLabelPositioner;
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
- (id)initWithChartType:(id)a0;
- (Class)presetImagerClass;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsElementChunking;
- (BOOL)supportsCategoryAxisSeriesNames;
- (int)representativeGridValueAxisType;
- (int)labelOrientation;
- (BOOL)supportsColumnShape;
- (id)columnShapeUIName;
- (id)initialSceneWithChartInfo:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;

@end
