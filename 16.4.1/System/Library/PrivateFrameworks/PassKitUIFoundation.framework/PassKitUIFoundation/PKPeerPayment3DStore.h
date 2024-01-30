@class NSObject, NSString, SCNMaterial, NSMutableArray, NSCache;
@protocol OS_dispatch_queue;

@interface PKPeerPayment3DStore : NSObject <PKMotionManagerClientProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_activeScenes;
    NSCache *_cache;
    SCNMaterial *_textMaterial;
    NSObject<OS_dispatch_queue> *_sceneLoadingQueue;
    struct { void /* unknown type, empty encoding */ columns[4]; } _rotationMatrix;
    void /* unknown type, empty encoding */ _skew;
    void /* unknown type, empty encoding */ _lastRollPitch;
    struct { void /* unknown type, empty encoding */ columns[4]; } _staticRotationMatrix;
    void /* unknown type, empty encoding */ _staticSkew;
    BOOL _monitorMotion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)sceneDidBecomeActive:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)material;
- (void)motionManager:(id)a0 didReceiveMotion:(id)a1;
- (void)_setMonitorMotion:(BOOL)a0;
- (BOOL)_shouldMonitorMotion;
- (void)_updateMonitorMotion;
- (void)charactersForText:(id)a0 completion:(id /* block */)a1 synchronously:(BOOL)a2;
- (void)newSceneWithCompletion:(id /* block */)a0 synchronously:(BOOL)a1;
- (id)nodeForCharacter:(id)a0;
- (void)relinquishScene:(id)a0;
- (void)sceneDidBecomeInactive:(id)a0;

@end
