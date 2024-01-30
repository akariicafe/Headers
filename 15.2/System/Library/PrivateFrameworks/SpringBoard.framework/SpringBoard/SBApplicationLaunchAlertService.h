@class NSString, NSSet, SBApplicationController, SBAlertItemsController, NSMutableSet, NSMutableDictionary;

@interface SBApplicationLaunchAlertService : NSObject <BSDescriptionProviding, SBSceneManagerObserver, FBSceneObserver, BSInvalidatable> {
    NSSet *_launchAlertEvaluators;
    SBApplicationController *_applicationController;
    SBAlertItemsController *_alertItemsController;
    NSSet *_sceneManagers;
    NSMutableSet *_foregroundingScenes;
    NSMutableDictionary *_mapBundleIDToLaunchAlertInfo;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneContentStateDidChange:(id)a0;
- (void)_sceneWillBecomeForeground:(id)a0;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (void)_reallyShowLaunchAlertOfType:(unsigned long long)a0 withLaunchAlertInfo:(id)a1 application:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_invalidateAndDismissLaunchAlertsForLaunchAlertInfo:(id)a0;
- (id)succinctDescription;
- (void)_tryShowLaunchAlertsForLaunchAlertInfo:(id)a0;
- (id)initObservingSceneManagers:(id)a0 launchAlertEvaluators:(id)a1 applicationController:(id)a2 alertItemsController:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_sceneDidResignForeground:(id)a0;
- (void)invalidate;
- (void)_sceneDidBecomeForeground:(id)a0;
- (void)dealloc;
- (void)showLaunchAlertOfType:(unsigned long long)a0 forApplication:(id)a1;

@end
