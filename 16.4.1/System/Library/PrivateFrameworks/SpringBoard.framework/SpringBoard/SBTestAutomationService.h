@class NSString, FBServiceClientAuthenticator, NSHashTable, NSMutableDictionary;
@protocol BSInvalidatable;

@interface SBTestAutomationService : NSObject <SBSystemServiceServerTestAutomationDelegate> {
    FBServiceClientAuthenticator *_clientAuthenticator;
    id<BSInvalidatable> _idleTimerAssertion;
    NSHashTable *_reachabilityEnabledAssertions;
    NSHashTable *_inFlightAnimationTransactions;
    NSMutableDictionary *_accessoriesByType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_authenticateClient:(id)a0;
- (unsigned long long)_iconGridSizeClassFromClientArgument:(long long)a0;
- (void)systemServiceServer:(id)a0 addWidgetsToEachPageForClient:(id)a1;
- (void)systemServiceServer:(id)a0 clearAllUserNotificationsForClient:(id)a1;
- (void)systemServiceServer:(id)a0 client:(id)a1 addWidgetStackWithIdentifiers:(id)a2 toPage:(long long)a3 withSizing:(long long)a4;
- (void)systemServiceServer:(id)a0 client:(id)a1 addWidgetWithIdentifier:(id)a2 toPage:(long long)a3 withSizing:(long long)a4;
- (void)systemServiceServer:(id)a0 client:(id)a1 countScenesForBundleIdentifier:(id)a2 withCompletion:(id /* block */)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 getChamoisPrefersDockHiddenWithCompletion:(id /* block */)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 getChamoisPrefersStripHiddenWithCompletion:(id /* block */)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 getDeviceSupportsSystemAperture:(id /* block */)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 getIsChamoisWindowingUIEnabledWithCompletion:(id /* block */)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 loadStashedSwitcherModelFromPath:(id)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 port:(id)a2 acquireAssertionForReachabilityEnabled:(BOOL)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 port:(id)a2 acquireHUDHiddenAssertionForIdentifier:(id)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 resetToHomeScreenAnimated:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setAccessoryType:(long long)a2 attached:(BOOL)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 setAlertsEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setApplicationBundleIdentifier:(id)a2 blockedForScreenTime:(BOOL)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 setChamoisPrefersDockHidden:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setChamoisPrefersStripHidden:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setChamoisWindowingUIEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setHiddenFeaturesEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setIdleTimerEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setMallocStackLoggingEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setOrientationLockEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setReachabilityActive:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setTestRunnerRecoveryApplicationBundleIdentifier:(id)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 stashSwitcherModelToPath:(id)a2;
- (void)systemServiceServer:(id)a0 enterLostModeForClient:(id)a1;
- (void)systemServiceServer:(id)a0 exitLostModeForClient:(id)a1;
- (id)systemServiceServer:(id)a0 getSystemApertureStateDumpForClient:(id)a1;
- (id)systemServiceServer:(id)a0 getWidgetControllerStateDump:(id)a1;
- (void)systemServiceServer:(id)a0 setUserPresenceDetectedSinceWakeForClient:(id)a1;
- (void)systemServiceServer:(id)a0 suspendAllDisplaysForClient:(id)a1;

@end
