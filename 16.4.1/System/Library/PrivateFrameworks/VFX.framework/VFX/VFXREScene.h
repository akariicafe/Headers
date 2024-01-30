@interface VFXREScene : NSObject {
    void /* unknown type, empty encoding */ rootEntity;
    void /* unknown type, empty encoding */ cameraEntity;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ worldFromScene;
    void /* unknown type, empty encoding */ sceneFromWorld;
    void /* unknown type, empty encoding */ reloadBlock;
    void /* unknown type, empty encoding */ remappingTable;
    void /* unknown type, empty encoding */ renderOutput;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ effect;
@property (nonatomic, retain) void /* unknown type, empty encoding */ transientDrawCall;
@property (nonatomic) void /* unknown type, empty encoding */ uuid;
@property (nonatomic) void /* unknown type, empty encoding */ sceneScale;
@property (nonatomic, copy) id /* block */ reloadBlock;
@property (nonatomic, readonly) void *opaqueECS;
@property (nonatomic, readonly) float deltaTime;
@property (nonatomic, readonly) struct { void /* unknown type, empty encoding */ x0[2]; } worldBoundingBox;
@property (nonatomic, readonly) BOOL shouldUseDrawCallHandler;
@property (nonatomic, readonly) BOOL needsCollisionPlanes;

- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)REMeshAssetBindings;
- (void)setClientTextureWithId:(long long)a0 texture:(id)a1;
- (long long)addCollisionPlaneWithCenter:(id)a0 extents:(SEL)a1 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (long long)addCollisionPlaneWithExtents:(SEL)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)copyBindingValueWithObjectName:(id)a0 bindingName:(id)a1 action:(long long)a2 storageGetterBlock:(id /* block */)a3;
- (id)createREMeshDataBinding;
- (long long)fetchClientTextureIDWithNamed:(id)a0;
- (id)generateMaterialsAndReturnError:(id *)a0;
- (id)getREMeshAssetPath:(id)a0;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 model:(id)a2 options:(id)a3;
- (id)initWithDevice:(id)a0 contentsOf:(id)a1 error:(id *)a2;
- (id)initWithDevice:(id)a0 model:(id)a1;
- (id)initWithDevice:(id)a0 model:(id)a1 options:(id)a2;
- (id)neededModelsAndReturnError:(id *)a0;
- (id /* block */)recycleBuffersGetCompletion;
- (void)removeCollisionPlaneWithId:(long long)a0;
- (void)setCameraEntityTransformProjection:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2 :(void /* unknown type, empty encoding */)a3 :(void /* unknown type, empty encoding */)a4 :(void /* unknown type, empty encoding */)a5 :(void /* unknown type, empty encoding */)a6;
- (void)setFrameConfigurationWithRenderInCompositeLayer:(BOOL)a0 fadeOpacity:(float)a1 drawsSeparateDepth:(BOOL)a2;
- (void)setREMeshDataBinding:(id)a0 positionData:(id)a1 normalData:(id)a2 colorData:(id)a3;
- (void)setRootEntityTransform:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2;
- (void)setRootTransform:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2;
- (void)setSceneTransform:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2;
- (void)tick;
- (void)tickWithCommandBuffer:(id)a0;
- (void)tickWithDeltaTime:(double)a0;
- (void)tickWithDeltaTime:(double)a0 commandBuffer:(id)a1;
- (void)updateCollisionPlaneWithId:(id)a0 center:(SEL)a1 extents:(long long)a2 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (void)updateCollisionPlaneWithId:(SEL)a0 extents:(long long)a1 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;

@end
