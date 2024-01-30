@interface TSCH3DChartSeriesSceneObject : TSCH3DChartElementSceneObject

+ (float)depthLimitFactorForSeriesCount:(long long)a0 maxLimitingSeries:(long long)a1;
+ (Class)propertiesClass;
+ (BOOL)shouldCreateMeshSeriesStorage;
+ (float)chartSeriesPolygonOffset;
+ (id)createBoundsForSeries:(id)a0;

- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;
- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (BOOL)shouldRenderSeries:(id)a0;
- (void)renderLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (void)updateElementEffectsStates:(id)a0 depthToWidthRatio:(float)a1;
- (void)prerenderElement:(id)a0;
- (void)postrenderElement:(id)a0;
- (BOOL)transparencyDepthMask;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState { struct array<TSCH3D::TexCoordTilingShaderEffectState::Data, 3> { struct Data { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x0[3]; } x0; } *)a0 properties:(id)a1 textureTiling:(id)a2 size:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a3;
- (float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)a0;

@end
