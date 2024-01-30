@interface TSCH3DChartSeriesSceneObject : TSCH3DChartElementSceneObject

+ (Class)propertiesClass;
+ (float)chartSeriesPolygonOffset;
+ (id)createBoundsForSeries:(id)a0;
+ (float)depthLimitFactorForSeriesCount:(long long)a0 maxLimitingSeries:(long long)a1;
+ (BOOL)shouldCreateMeshSeriesStorage;

- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;
- (void)postrenderElement:(id)a0;
- (void)prerenderElement:(id)a0;
- (void)renderLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)a0;
- (BOOL)shouldRenderSeries:(id)a0;
- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (BOOL)transparencyDepthMask;
- (void)updateElementEffectsStates:(id)a0 depthToWidthRatio:(float)a1;
- (void)updateTilingEffect:(void *)a0 properties:(id)a1 textureTiling:(id)a2 size:(const void *)a3;

@end
