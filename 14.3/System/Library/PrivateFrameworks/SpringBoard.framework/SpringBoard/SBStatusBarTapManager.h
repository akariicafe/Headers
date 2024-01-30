@class NSMutableDictionary;

@interface SBStatusBarTapManager : NSObject {
    NSMutableDictionary *_statusBarOverridesToRecentScenes;
    NSMutableDictionary *_statusBarOverridesToRecentSceneResetTimers;
}

- (void).cxx_destruct;
- (id)_workspace;
- (BOOL)_isUILocked;
- (BOOL)handleTapForStyleOverrides:(int)a0;
- (BOOL)canHandleTapForStatusBarStyleOverrides:(int)a0;
- (id)_handlerForStyleOverrides:(int)a0;
- (void)_addRecentlyTappedApplicationDestinations:(id)a0 forStyleOverrides:(int)a1;
- (BOOL)_performAfterAttemptingUnlockForAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_handlerForStyleOverrides:(int)a0 orOutApplications:(id *)a1;
- (id)_allApplicationDestinationsForApplications:(id)a0;
- (id)_foregroundApplicationDestinationsForApplications:(id)a0;
- (id)_appDestinationForNextSceneToVisitForApps:(id)a0 styleOverrides:(int)a1;
- (id)_recentlyTappedApplicationDestinationsForStyleOverrides:(int)a0;
- (void)_resetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)a0;
- (void)_scheduleResetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)a0;

@end
