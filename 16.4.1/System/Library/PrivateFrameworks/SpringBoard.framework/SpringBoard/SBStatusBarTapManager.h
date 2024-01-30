@class NSMutableDictionary;

@interface SBStatusBarTapManager : NSObject {
    NSMutableDictionary *_statusBarOverridesToRecentScenes;
    NSMutableDictionary *_statusBarOverridesToRecentSceneResetTimers;
}

- (BOOL)_isUILocked;
- (void).cxx_destruct;
- (id)_workspace;
- (void)_addRecentlyTappedApplicationDestinations:(id)a0 forStyleOverrides:(unsigned long long)a1;
- (id)_allApplicationDestinationsForApplications:(id)a0;
- (id)_appDestinationForNextSceneToVisitForApps:(id)a0 styleOverrides:(unsigned long long)a1;
- (id)_foregroundApplicationDestinationsForApplications:(id)a0;
- (id)_handlerForStyleOverrides:(unsigned long long)a0;
- (id)_handlerForStyleOverrides:(unsigned long long)a0 orOutApplications:(id *)a1;
- (BOOL)_performAfterAttemptingUnlockForAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_recentlyTappedApplicationDestinationsForStyleOverrides:(unsigned long long)a0;
- (void)_resetRecentlyTappedSceneIdentifiersForStyleOverrides:(unsigned long long)a0;
- (void)_scheduleResetRecentlyTappedSceneIdentifiersForStyleOverrides:(unsigned long long)a0;
- (BOOL)canHandleTapForStatusBarStyleOverrides:(unsigned long long)a0;
- (BOOL)handleTapForStyleOverrides:(unsigned long long)a0;

@end
