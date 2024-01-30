@class NSMutableArray, NSString, SCNMaterial, PKMotionManager, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface PKPeerPayment3DStore : NSObject <PKMotionManagerClientProtocol> {
    NSCache *_cache;
    SCNMaterial *_textMaterial;
    NSObject<OS_dispatch_queue> *_scenesQueue;
    NSObject<OS_dispatch_queue> *_sceneLoadingQueue;
    NSMutableArray *_activeScenes;
    struct { void /* unknown type, empty encoding */ columns[4]; } _rotationMatrix;
    void /* unknown type, empty encoding */ _skew;
    void /* unknown type, empty encoding */ _lastRollPitch;
    struct { void /* unknown type, empty encoding */ columns[4]; } _staticRotationMatrix;
    void /* unknown type, empty encoding */ _staticSkew;
    PKMotionManager *_motionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)material;
- (void)sceneDidBecomeActive:(id)a0;
- (void)newSceneWithCompletion:(id /* block */)a0 synchronously:(BOOL)a1;
- (void)relinquishScene:(id)a0;
- (void)charactersForText:(id)a0 completion:(id /* block */)a1 synchronously:(BOOL)a2;
- (void)sceneDidBecomeInactive:(id)a0;
- (void)setRollPitch:(SEL)a0;
- (id)nodeForCharacter:(id)a0;
- (void)motionManager:(id)a0 didReceiveMotion:(id)a1;

@end
