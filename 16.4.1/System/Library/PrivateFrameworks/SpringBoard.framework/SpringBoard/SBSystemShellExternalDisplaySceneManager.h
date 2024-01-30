@class SBMainDisplayLayoutStateManager, SBMainDisplayLayoutState, NSString, SBSuspendedUnderLockManager, UIApplicationSceneClientSettingsDiffInspector, SBWindowScene;

@interface SBSystemShellExternalDisplaySceneManager : SBSceneManager <SBLayoutStateSceneIdentityProviderDataSource, SBSuspendedUnderLockManagerDelegate> {
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
}

@property (readonly, nonatomic) SBMainDisplayLayoutStateManager *_layoutStateManager;
@property (readonly, nonatomic) SBWindowScene *_windowScene;
@property (readonly, nonatomic) SBMainDisplayLayoutState *currentLayoutState;
@property (nonatomic, getter=isSuspendedUnderLock) BOOL suspendedUnderLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layoutStateManager;
- (id)suspendedUnderLockManager:(id)a0 sceneHandleForScene:(id)a1;
- (void)_noteDidCommitUpdateForScene:(id)a0;
- (id)suspendedUnderLockManagerVisibleScenes:(id)a0;
- (void)_scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)transientApplicationSceneHandlesForApplication:(id)a0;
- (void)_doObserverCalloutWithBlock:(id /* block */)a0;
- (BOOL)_shouldAutoHostScene:(id)a0;
- (void)_noteDidChangeToVisibility:(unsigned long long)a0 previouslyExisted:(BOOL)a1 forScene:(id)a2;
- (id)_appSceneClientSettingsDiffInspector;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventUnderLockForScene:(id)a1;
- (id)newSceneIdentifierForBundleIdentifier:(id)a0 supportsMultiwindow:(BOOL)a1;
- (void)setSuspendedUnderLock:(BOOL)a0 alongsideWillChangeBlock:(id /* block */)a1 alongsideDidChangeBlock:(id /* block */)a2;
- (void)_reconnectSceneRemnant:(id)a0 forProcess:(id)a1 sceneManager:(id)a2;
- (BOOL)_shouldFenceTransitionForScene:(id)a0 updatedClientSettingsDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)sceneSnapshotRequestStrategyForSceneSnapshotRequestor:(id)a0;
- (void)dealloc;
- (void)_scene:(id)a0 willUpdateWithSettings:(id)a1 transitionContext:(id)a2;
- (void)_scene:(id)a0 interceptUpdateWithNewSettings:(id)a1;
- (id)initWithReference:(id)a0 sceneIdentityProvider:(id)a1 presentationBinder:(id)a2 snapshotBehavior:(unsigned long long)a3;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventSuspendUnderLockForScene:(id)a1;
- (id)externalApplicationSceneHandles;
- (id)runningApplicationScenes:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldTrackScenesForDeactivation;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)a0;
- (id)initWithReference:(id)a0 sceneIdentityProvider:(id)a1 presentationBinder:(id)a2;

@end
