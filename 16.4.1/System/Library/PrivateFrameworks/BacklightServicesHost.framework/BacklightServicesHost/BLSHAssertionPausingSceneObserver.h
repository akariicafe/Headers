@class NSString, BLSPauseWhenSceneBackgroundAttribute, FBScene;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

@interface BLSHAssertionPausingSceneObserver : NSObject <BLSHLocalAssertionAttributeHandlerEntry, FBSceneObserver> {
    FBScene *_scene;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
    BOOL _paused;
}

@property (readonly, weak, nonatomic) BLSPauseWhenSceneBackgroundAttribute *attribute;
@property (readonly, weak, nonatomic) id<BLSAssertionServiceResponding> assertion;
@property (readonly, weak, nonatomic) id<BLSHAssertionAttributeHandlerService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2 attributeHandler:(id)a3;

- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (BOOL)reactivateIfPossible;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
