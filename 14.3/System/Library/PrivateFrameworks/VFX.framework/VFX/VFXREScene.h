@interface VFXREScene : NSObject {
    void /* unknown type, empty encoding */ rootEntity;
    void /* unknown type, empty encoding */ cameraEntity;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ remappingTable;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ transientDrawCall;
@property (nonatomic, readonly) void *opaqueECS;
@property (nonatomic, readonly) float deltaTime;

- (void)tick;
- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 model:(id)a1;
- (id)initWithDevice:(id)a0 contentsOf:(id)a1 error:(id *)a2;
- (id)generateMaterialsAndReturnError:(id *)a0;
- (void)copyBindingValueWithObjectName:(id)a0 bindingName:(id)a1 action:(long long)a2 storageGetterBlock:(id /* block */)a3;
- (id /* block */)recycleBuffersGetCompletion;
- (void)setRootEntityTransform:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2;
- (void)setCameraEntityTransformProjection:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2 :(void /* unknown type, empty encoding */)a3 :(void /* unknown type, empty encoding */)a4 :(void /* unknown type, empty encoding */)a5 :(void /* unknown type, empty encoding */)a6;

@end
