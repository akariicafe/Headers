@interface VFXREManager : NSObject {
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ rootEntity;
    void /* unknown type, empty encoding */ cameraEntity;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ remappingTable;
    void /* unknown type, empty encoding */ registeredBindings;
    void /* unknown type, empty encoding */ transientDrawCall;
}

@property (nonatomic, readonly) float deltaTime;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)tick:(void *)a0;
- (id)generateMaterialsAndReturnError:(id *)a0;
- (id /* block */)recycleBuffersGetCompletion;
- (void)setRootEntityTransform:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2;
- (void)setCameraEntityTransformProjection:(id)a0 :(SEL)a1 :(void /* unknown type, empty encoding */)a2 :(void /* unknown type, empty encoding */)a3 :(void /* unknown type, empty encoding */)a4 :(void /* unknown type, empty encoding */)a5 :(void /* unknown type, empty encoding */)a6;
- (void)withPointerToValueAtPath:(id)a0 block:(id /* block */)a1;
- (id)initWithDevice:(id)a0 modelManager:(id)a1;
- (BOOL)loadWithUrl:(id)a0 loadScriptSymbols:(BOOL)a1 error:(id *)a2;
- (BOOL)registerBindingWithPath:(id)a0 type:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (void)unregisterBindingWithPath:(id)a0;
- (void)forEachDrawCall:(id /* block */)a0;

@end
