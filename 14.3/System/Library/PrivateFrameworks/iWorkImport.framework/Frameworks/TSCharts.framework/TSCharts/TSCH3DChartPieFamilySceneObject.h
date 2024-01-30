@interface TSCH3DChartPieFamilySceneObject : TSCH3DChartElementSceneObject

+ (Class)propertiesClass;
+ (id)chartSeriesType;
+ (BOOL)shouldCreateMeshSeriesStorage;
+ (id)createBoundsForSeries:(id)a0;
+ (id)createMeshForSeries:(id)a0;
+ (float)geometrySpaceRadius;
+ (unsigned long long)p_boundsStepsForAngle:(double)a0;
+ (id)p_boundsDataBufferWithDepthFactor:(float)a0 angleRange:(const struct range<double> { double x0; double x1; } *)a1 includeEndPoints:(BOOL)a2;
+ (id)p_wholePieBounds;
+ (float)calculateHalfAngleForSeries:(id)a0;
+ (id)createGeometryWithStartAngle:(float)a0 endAngle:(float)a1 bevel:(BOOL)a2 bevelEdges:(BOOL)a3;
+ (id)wholePieBoundsResource;

- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (BOOL)shouldRenderEachValue;
- (void)renderLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (void)updateElementEffectsStates:(id)a0 depthToWidthRatio:(float)a1;
- (BOOL)transparencyDepthMask;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState { struct array<TSCH3D::TexCoordTilingShaderEffectState::Data, 3> { struct Data { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x0[3]; } x0; } *)a0 properties:(id)a1 textureTiling:(id)a2 depth:(float)a3 percentOfTotal:(float)a4;
- (float)explosionAtElementIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0 forScene:(id)a1;
- (void)setExplosion:(float)a0 atElementIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1 forScene:(id)a2;
- (Class)chartBoundsLayoutSceneDelegateClass;
- (Class)resizer3DClass;
- (Class)getBounds3DClass;

@end
