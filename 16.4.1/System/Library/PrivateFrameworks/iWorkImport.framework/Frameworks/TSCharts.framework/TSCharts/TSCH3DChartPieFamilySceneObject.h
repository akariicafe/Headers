@interface TSCH3DChartPieFamilySceneObject : TSCH3DChartElementSceneObject

+ (Class)propertiesClass;
+ (id)chartSeriesType;
+ (float)calculateHalfAngleForSeries:(id)a0;
+ (id)createBoundsForSeries:(id)a0;
+ (id)createGeometryWithStartAngle:(float)a0 endAngle:(float)a1 bevel:(BOOL)a2 bevelEdges:(BOOL)a3;
+ (id)createMeshForSeries:(id)a0;
+ (float)geometrySpaceRadius;
+ (id)p_boundsDataBufferWithDepthFactor:(float)a0 angleRange:(const void *)a1 includeEndPoints:(BOOL)a2;
+ (unsigned long long)p_boundsStepsForAngle:(double)a0;
+ (id)p_wholePieBounds;
+ (BOOL)shouldCreateMeshSeriesStorage;
+ (id)wholePieBoundsResource;

- (Class)chartBoundsLayoutSceneDelegateClass;
- (float)explosionAtElementIndex:(const void *)a0 forScene:(id)a1;
- (Class)getBounds3DClass;
- (void)renderLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (Class)resizer3DClass;
- (void)setExplosion:(float)a0 atElementIndex:(const void *)a1 forScene:(id)a2;
- (BOOL)shouldRenderEachValue;
- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (BOOL)transparencyDepthMask;
- (void)updateElementEffectsStates:(id)a0 depthToWidthRatio:(float)a1;
- (void)updateTilingEffect:(void *)a0 properties:(id)a1 textureTiling:(id)a2 depth:(float)a3 percentOfTotal:(float)a4;

@end
