@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject

+ (id)chartSeriesType;
+ (float)chartSeriesDepth;
+ (id)createMeshForSeries:(id)a0;
+ (BOOL)supportsChartSeriesDepthOffset;

- (struct EdgeDetectionParameters { BOOL x0; BOOL x1; float x2; })edgeDetectionParameters;
- (BOOL)shouldRenderSeries:(id)a0;
- (void)updateTilingEffect:(void *)a0 properties:(id)a1 textureTiling:(id)a2 size:(const void *)a3;

@end
