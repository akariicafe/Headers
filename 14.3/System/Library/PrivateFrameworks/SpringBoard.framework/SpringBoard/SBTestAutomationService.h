@class NSString, FBServiceClientAuthenticator, NSHashTable;
@protocol BSInvalidatable;

@interface SBTestAutomationService : NSObject <SBSystemServiceServerTestAutomationDelegate> {
    FBServiceClientAuthenticator *_clientAuthenticator;
    id<BSInvalidatable> _idleTimerAssertion;
    NSHashTable *_inFlightAnimationTransactions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_authenticateClient:(id)a0;
- (void)systemServiceServer:(id)a0 suspendAllDisplaysForClient:(id)a1;
- (void)systemServiceServer:(id)a0 client:(id)a1 setAlertsEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setIdleTimerEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setOrientationLockEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setMallocStackLoggingEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setHiddenFeaturesEnabled:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 resetToHomeScreenAnimated:(BOOL)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 port:(id)a2 acquireHUDHiddenAssertionForIdentifier:(id)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 setApplicationBundleIdentifier:(id)a2 blockedForScreenTime:(BOOL)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 setTestRunnerRecoveryApplicationBundleIdentifier:(id)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 countScenesForBundleIdentifier:(id)a2 withCompletion:(id /* block */)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 stashSwitcherModelToPath:(id)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 loadStashedSwitcherModelFromPath:(id)a2;
- (void)systemServiceServer:(id)a0 addWidgetsToEachPageForClient:(id)a1;
- (void)systemServiceServer:(id)a0 client:(id)a1 addWidgetWithIdentifier:(id)a2 toPage:(long long)a3 withSizing:(long long)a4;

@end
