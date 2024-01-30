@interface SBSSystemServiceClient : SBSServiceFacilityClient {
    BOOL _buttonEventServiceIsWaitingForServerMessages;
}

@property (nonatomic) long long passcodePolicy;

+ (id)serviceFacilityIdentifier;

- (void)setReachabilityActive:(BOOL)a0;
- (long long)toggleStateForButtonKind:(long long)a0;
- (void)setApplicationBundleIdentifier:(id)a0 blockedForScreenTime:(BOOL)a1;
- (void)setIdleTimerEnabled:(BOOL)a0;
- (void)_handleButtonEventConsumePressMessage:(id)a0;
- (void)setAlertsEnabled:(BOOL)a0;
- (void)acquireAssertionOfType:(long long)a0 forReason:(id)a1 withCompletion:(id /* block */)a2;
- (void)setHapticType:(long long)a0 forButtonKind:(long long)a1;
- (void)addWidgetsToEachPage;
- (void)setHiddenFeaturesEnabled:(BOOL)a0;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)a0;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (id)acquireAssertionForReachabilityEnabled:(BOOL)a0;
- (void)setOrientationLockEnabled:(BOOL)a0;
- (void)requestAppSwitcherAppearanceForHiddenApplicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)clearAllUserNotifications;
- (void)addWidgetWithIdentifier:(id)a0 toPage:(int)a1 withSizing:(int)a2;
- (void)loadStashedSwitcherModelFromPath:(id)a0;
- (void)resetToHomeScreenAnimated:(BOOL)a0;
- (void)setButtonEventServiceIsWaitingForServerMessages:(BOOL)a0;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)a0;
- (void)disableRemoteStateDumpWithCompletion:(id /* block */)a0;
- (void)addWidgetStackWithIdentifiers:(id)a0 toPage:(int)a1 withSizing:(int)a2;
- (void)setRequestsHIDEvents:(BOOL)a0 token:(id)a1 forButtonKind:(long long)a2;
- (void)setAccessoryType:(long long)a0 attached:(BOOL)a1;
- (void)requestStateDump:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)stashSwitcherModelToPath:(id)a0;
- (void)setMallocStackLoggingEnabled:(BOOL)a0;
- (void)fetchUnlockCredentialSetWithCompletion:(id /* block */)a0;
- (void)enableRemoteStateDumpWithTimeout:(long long)a0 completion:(id /* block */)a1;
- (void)setEventMask:(unsigned long long)a0 forButtonKind:(long long)a1 priority:(long long)a2;
- (void)countScenesForBundleIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)suspendAllDisplays;
- (void)fetchHapticTypeForButtonKind:(long long)a0 completion:(id /* block */)a1;

@end
