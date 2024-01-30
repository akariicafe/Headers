@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject

+ (float)chartSeriesDepth;
+ (BOOL)supportsChartSeriesDepthOffset;
+ (id)chartSeriesType;
+ (id)createMeshForSeries:(id)a0;

- (BOOL)shouldRenderSeries:(id)a0;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState { struct array<TSCH3D::TexCoordTilingShaderEffectState::Data, 3> { struct Data { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x0[3]; } x0; } *)a0 properties:(id)a1 textureTiling:(id)a2 size:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a3;
- (struct EdgeDetectionParameters { BOOL x0; BOOL x1; float x2; })edgeDetectionParameters;

@end
