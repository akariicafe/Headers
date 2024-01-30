@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject

+ (float)chartSeriesDepth;
+ (BOOL)supportsChartSeriesDepthOffset;
+ (id)chartSeriesType;
+ (id)createMeshForSeries:(id)a0;

- (BOOL)shouldRenderSeries:(id)a0;
- (void)updateTilingEffect:(void *)a0 properties:(id)a1 textureTiling:(id)a2 size:(const void *)a3;
- (struct EdgeDetectionParameters { BOOL x0; BOOL x1; float x2; })edgeDetectionParameters;

@end
