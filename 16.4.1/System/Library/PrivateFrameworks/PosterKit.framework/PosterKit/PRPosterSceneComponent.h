@class BSAbsoluteMachTimer, NSString, RBSProcessIdentity, CLInUseAssertion, FBScene, RBSAssertion;
@protocol BSTimerScheduleQuerying, BSInvalidatable;

@interface PRPosterSceneComponent : NSObject <FBSceneObserver> {
    FBScene *_scene;
    RBSProcessIdentity *_processIdentity;
    NSString *_bundleIdentifier;
    unsigned long long _options;
    RBSAssertion *_mlmAssertion;
    RBSAssertion *_taskAssertion;
    CLInUseAssertion *_locationInUseAssertion;
    BSAbsoluteMachTimer *_wakeTimer;
    id<BSTimerScheduleQuerying, BSInvalidatable> _eventTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_main_updateState;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (void)sceneDidInvalidate:(id)a0;
- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)sceneDidActivate:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)_main_remoteMLMInvalidation:(id)a0;
- (id)initWithScene:(id)a0 bundleIdentifier:(id)a1 processIdentity:(id)a2 options:(unsigned long long)a3;
- (void)invalidate;
- (void).cxx_destruct;

@end
