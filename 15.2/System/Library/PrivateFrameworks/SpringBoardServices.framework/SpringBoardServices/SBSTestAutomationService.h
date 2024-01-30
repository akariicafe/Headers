@interface SBSTestAutomationService : SBSAbstractSystemService

- (void)setReachabilityActive:(BOOL)a0;
- (void)setApplicationBundleIdentifier:(id)a0 blockedForScreenTime:(BOOL)a1;
- (void)setIdleTimerEnabled:(BOOL)a0;
- (void)setAlertsEnabled:(BOOL)a0;
- (void)addWidgetsToEachPage;
- (void)setHiddenFeaturesEnabled:(BOOL)a0;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)a0;
- (id)acquireAssertionForReachabilityEnabled:(BOOL)a0;
- (void)setOrientationLockEnabled:(BOOL)a0;
- (void)clearAllUserNotifications;
- (void)addWidgetWithIdentifier:(id)a0 toPage:(int)a1 withSizing:(int)a2;
- (void)loadStashedSwitcherModelFromPath:(id)a0;
- (void)resetToHomeScreenAnimated:(BOOL)a0;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)a0;
- (void)addWidgetStackWithIdentifiers:(id)a0 toPage:(int)a1 withSizing:(int)a2;
- (void)setAccessoryType:(long long)a0 attached:(BOOL)a1;
- (void)stashSwitcherModelToPath:(id)a0;
- (void)setMallocStackLoggingEnabled:(BOOL)a0;
- (void)countScenesForBundleIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)suspendAllDisplays;

@end
