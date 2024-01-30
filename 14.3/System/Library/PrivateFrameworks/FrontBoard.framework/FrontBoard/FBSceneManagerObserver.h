@class NSString;
@protocol FBSceneManagerObserver, FBSceneManagerDelegate;

@interface FBSceneManagerObserver : NSObject <BSDescriptionProviding, FBSceneManagerInternalObserver, FBSceneManagerDelegate_Private> {
    unsigned long long _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    BOOL _internalObserver;
    BOOL _privateDelegate;
    BOOL _didCreate;
    BOOL _willDestroy;
    BOOL _didDestroy;
    BOOL _updatePreparedDEPRECATED;
    BOOL _updateAppliedDEPRECATED;
    BOOL _updateCompletedDEPRECATED;
    BOOL _didCreateSceneDEPRECATED;
    BOOL _willUpdateSceneDEPRECATED;
    BOOL _willCommitDEPRECATED;
    BOOL _didCommitDEPRECATED;
    BOOL _didCommitDEPRECATED2;
    BOOL _didReceiveActionsDEPRECATED;
    BOOL _willSynchronize;
    BOOL _didSynchronize;
    BOOL _interceptSceneUpdatesForDeactivationManager;
    BOOL _didUpdateClientSettings;
    BOOL _interceptSceneUpdates;
    BOOL _hostingPolicyForDisplay;
    BOOL _hostingPolicyForScene;
    BOOL _createDefaultTransitionContext;
    BOOL _clientDidConnect;
}

@property (readonly, weak, nonatomic) id<FBSceneManagerObserver> observer;
@property (readonly, weak, nonatomic) id<FBSceneManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observerWithObserver:(id)a0;

- (BOOL)isDelegate;
- (id)_internalObserver;
- (id)_privateDelegate;
- (void)sceneManager:(id)a0 clientDidConnectWithHandshake:(id)a1;
- (id)sceneManager:(id)a0 createDefaultTransitionContextForScene:(id)a1;
- (void)sceneManager:(id)a0 willDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (void)sceneManager:(id)a0 scene:(id)a1 didReceiveActions:(id)a2;
- (void).cxx_destruct;
- (void)sceneManager:(id)a0 interceptUpdateForScene:(id)a1 withNewSettings:(id)a2;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 completedWithContext:(id)a2 error:(id)a3;
- (id)initWithObject:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithObserver:(id)a0;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)a0;
- (id)succinctDescription;
- (void)sceneManager:(id)a0 scene:(id)a1 didUpdateClientSettingsWithDiff:(id)a2 oldClientSettings:(id)a3 transitionContext:(id)a4;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 appliedWithContext:(id)a2;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (id)_initWithObserver:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)sceneManager:(id)a0 interceptUpdateForSceneDeactivationManager:(id)a1 withNewSettings:(id)a2;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)a0;
- (BOOL)isInternalObserver;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 preparedWithContext:(id)a2;

@end
