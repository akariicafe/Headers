@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject

+ (float)depthLimitFactorForSeriesCount:(long long)a0 maxLimitingSeries:(long long)a1;
+ (float)chartSeriesDepth;
+ (BOOL)supportsChartSeriesDepthOffset;
+ (id)chartSeriesType;
+ (float)chartSeriesPolygonOffset;

- (float)depthForScene:(id)a0;
- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (BOOL)transparencyDepthMask;

@end
