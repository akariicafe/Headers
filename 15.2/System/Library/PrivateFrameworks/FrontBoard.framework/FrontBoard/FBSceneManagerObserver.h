@class NSString;
@protocol FBSceneManagerObserver;

@interface FBSceneManagerObserver : NSObject <BSDescriptionProviding, FBSceneWorkspaceDelegate, FBSceneManagerInternalObserver, FBSceneManagerDelegate_Private> {
    unsigned long long _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    BOOL _supportLegacy;
    BOOL _internalObserver;
    BOOL _privateDelegate;
    BOOL _didCreateDEPRECATED;
    BOOL _willDestroyDEPRECATED;
    BOOL _didDestroyDEPRECATED;
    BOOL _updatePreparedDEPRECATED;
    BOOL _updateAppliedDEPRECATED;
    BOOL _updateCompletedDEPRECATED;
    BOOL _didCreateSceneDEPRECATED;
    BOOL _willUpdateSceneDEPRECATED;
    BOOL _willCommitDEPRECATED;
    BOOL _didCommitDEPRECATED;
    BOOL _didCommitDEPRECATED2;
    BOOL _didReceiveActionsDEPRECATED;
    BOOL _willSynchronizeLEGACY;
    BOOL _didSynchronizeLEGACY;
    BOOL _didUpdateClientSettingsDEPRECATED;
    BOOL _didAddLEGACY;
    BOOL _willRemoveLEGACY;
    BOOL _interceptSceneUpdatesLEGACY;
    BOOL _clientDidConnectLEGACY;
    BOOL _didAdd;
    BOOL _willRemove;
}

@property (readonly, weak, nonatomic) id<FBSceneManagerObserver> observer;
@property (readonly, weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneManager:(id)a0 didAddScene:(id)a1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)a0;
- (id)sceneManager:(id)a0 createDefaultTransitionContextForScene:(id)a1;
- (BOOL)isDelegate;
- (void)sceneManager:(id)a0 willDestroyScene:(id)a1;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)a0;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (id)_internalObserver;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)sceneManager:(id)a0 scene:(id)a1 didReceiveActions:(id)a2;
- (void)sceneManager:(id)a0 clientDidConnectWithHandshake:(id)a1;
- (void)workspace:(id)a0 didAddScene:(id)a1;
- (void)sceneManager:(id)a0 willRemoveScene:(id)a1;
- (void)sceneManager:(id)a0 scene:(id)a1 didUpdateClientSettingsWithDiff:(id)a2 oldClientSettings:(id)a3 transitionContext:(id)a4;
- (id)succinctDescription;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 completedWithContext:(id)a2 error:(id)a3;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 preparedWithContext:(id)a2;
- (void)sceneManager:(id)a0 interceptUpdateForScene:(id)a1 withNewSettings:(id)a2;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 appliedWithContext:(id)a2;
- (id)initWithObserver:(id)a0 supportLegacy:(BOOL)a1;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_privateDelegate;
- (id)succinctDescriptionBuilder;
- (id)initWithDelegate:(id)a0 supportLegacy:(BOOL)a1;
- (BOOL)isInternalObserver;
- (id)_initWithObserver:(id)a0 supportLegacy:(BOOL)a1;
- (void)workspace:(id)a0 willRemoveScene:(id)a1;

@end
