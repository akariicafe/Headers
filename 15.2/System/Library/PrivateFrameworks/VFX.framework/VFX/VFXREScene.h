@interface VFXREScene : NSObject {
    void /* unknown type, empty encoding */ effect;
    void /* unknown type, empty encoding */ rootEntity;
    void /* unknown type, empty encoding */ cameraEntity;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ reloadBlock;
    void /* unknown type, empty encoding */ remappingTable;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ transientDrawCall;
@property (nonatomic) void /* unknown type, empty encoding */ uuid;
@property (nonatomic, copy) id /* block */ reloadBlock;
@property (nonatomic, readonly) void *opaqueECS;
@property (nonatomic, readonly) float deltaTime;
@property (nonatomic, readonly) BOOL needsCollisionPlanes;

- (void)clear;
- (void)tick;
- (void).cxx_destruct;
- (id)init;
- (id)generateMaterialsAndReturnError:(id *)a0;
- (id)initWithDevice:(id)a0 contentsOf:(id)a1 error:(id *)a2;
- (id)initWithDevice:(id)a0 model:(id)a1 options:(id)a2;
- (void)copyBindingValueWithObjectName:(id)a0 bindingName:(id)a1 action:(long long)a2 storageGetterBlock:(id /* block */)a3;
- (void)setCameraEntityTransformProjection:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2 :(void /* unknown type, empty encoding */)a3 :(void /* unknown type, empty encoding */)a4 :(void /* unknown type, empty encoding */)a5 :(void /* unknown type, empty encoding */)a6;
- (void)setRootEntityTransform:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2;
- (id /* block */)recycleBuffersGetCompletion;
- (id)initWithDevice:(id)a0 model:(id)a1;
- (id)neededModelsAndReturnError:(id *)a0;
- (void)tickWithDeltaTime:(double)a0;
- (id)REMeshAssetBindings;
- (id)getREMeshAssetPath:(id)a0;
- (id)createREMeshDataBinding;
- (void)setREMeshDataBinding:(id)a0 positionData:(id)a1 normalData:(id)a2 colorData:(id)a3;
- (long long)addCollisionPlaneWithCenter:(id)a0 extents:(SEL)a1 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (void)updateCollisionPlaneWithId:(id)a0 center:(SEL)a1 extents:(long long)a2 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (void)removeCollisionPlaneWithId:(long long)a0;

@end
