@protocol SBSystemServiceServerAppSwitcherDelegate, SBSystemServiceServerSoftwareUpdateDelegate, SBSystemServiceServerTestAutomationDelegate, SBSystemServiceServerStateDumpDelegate, SBSystemServiceServerBiometricsDelegate, SBSystemServiceServerHardwareButtonDelegate;

@interface SBSystemServiceServer : FBSServiceFacility

@property (weak, nonatomic) id<SBSystemServiceServerAppSwitcherDelegate> appSwitcherDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerBiometricsDelegate> biometricsDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerHardwareButtonDelegate> hardwareButtonDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerSoftwareUpdateDelegate> softwareUpdateDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerTestAutomationDelegate> testAutomationDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerStateDumpDelegate> stateDumpDelegate;

+ (id)sharedInstance;

- (void)_handleHardwareButtonGetToggleButtonState:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetIdleTimerState:(id)a0 fromClient:(id)a1;
- (void)_handleStateDumpServiceClientMessageTypeStateDump:(id)a0 fromClient:(id)a1;
- (void).cxx_destruct;
- (void)_handleTestAutomationSetHiddenFeatureState:(id)a0 fromClient:(id)a1;
- (void)_handleSoftwareUpdateSetPasscodePolicy:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonGetHapticType:(id)a0 fromClient:(id)a1;
- (void)dealloc;
- (void)_handleTestAutomationSetMallocStackLoggingState:(id)a0 fromClient:(id)a1;
- (void)_handleBiometricsFetchUnlockCredentialSetMessage:(id)a0 fromClient:(id)a1;
- (void)_handleSoftwareUpdateGetPasscodePolicy:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetOrientationLockState:(id)a0 fromClient:(id)a1;
- (void)_handleRequestAppSwitcherAppearanceForHiddenApp:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationAddWidgetsToEachPage:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationBlockApplicationForScreenTime:(id)a0 fromClient:(id)a1;
- (void)_handleStateDumpServiceClientMessageTypeDisableRemoteStateDump:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationRequestHUDHiddenAssertion:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonSetPressEventMask:(id)a0 fromClient:(id)a1;
- (id)_init;
- (void)_handleStashSwitcherModelToPath:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationGetScencesForBundleIdentifier:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationAddSpecificWidgetToPageWithSize:(id)a0 fromClient:(id)a1;
- (void)_handleLoadStashedSwitcherModelFromPath:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonSetHapticType:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetTestRunnerRecoveryApplicationBundleIdentifier:(id)a0 fromClient:(id)a1;
- (void)_handleStateDumpServiceClientMessageTypeEnableRemoteStateDump:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonAcquireAssertionMessage:(id)a0 fromClient:(id)a1;
- (void)noteClientDidDisconnect:(id)a0;
- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (void)_handleTestAutomationSuspendAllDisplays:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetAlertState:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationResetToHomeScreen:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonSetRequestsHIDEvents:(id)a0 fromClient:(id)a1;

@end
