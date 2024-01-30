@interface SBSTestAutomationService : SBSAbstractSystemService

- (void)suspendAllDisplays;
- (void)addWidgetsToEachPage;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)a0;
- (void)countScenesForBundleIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)setHiddenFeaturesEnabled:(BOOL)a0;
- (void)loadStashedSwitcherModelFromPath:(id)a0;
- (void)setMallocStackLoggingEnabled:(BOOL)a0;
- (void)resetToHomeScreenAnimated:(BOOL)a0;
- (void)setAlertsEnabled:(BOOL)a0;
- (void)addWidgetWithIdentifier:(id)a0 toPage:(int)a1 withSizing:(int)a2;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)a0;
- (void)setIdleTimerEnabled:(BOOL)a0;
- (void)stashSwitcherModelToPath:(id)a0;
- (void)setOrientationLockEnabled:(BOOL)a0;
- (void)setApplicationBundleIdentifier:(id)a0 blockedForScreenTime:(BOOL)a1;

@end
