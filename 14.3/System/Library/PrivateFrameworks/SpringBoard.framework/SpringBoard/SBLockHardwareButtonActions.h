@class SBApplication, NSString, SBSiriHardwareButtonInteraction, SBHardwareButtonService, SBWalletPreArmController, SBSleepWakeHardwareButtonInteraction, SOSManager, SBHardwareButtonGestureParameters, SBProximitySensorManager, SBAccessibilityHardwareButtonInteraction;
@protocol SBHardwareButtonGestureParametersProvider, SBHardwareButtonInteraction;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {
    long long _homeButtonType;
    SBApplication *_lastLockButtonEventRecipient;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    SBWalletPreArmController *_walletPreArmController;
    SOSManager *_sosManager;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;
    long long _sosTriggerMechanism;
}

@property (retain, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction;
@property (retain, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction;
@property (retain, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction;
@property (retain, nonatomic) id<SBHardwareButtonInteraction, SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction;
@property (readonly, nonatomic) BOOL isButtonDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)reverseFadeOutIfNeeded;
- (BOOL)performButtonUpPreActions;
- (void)performForceResetSequenceBeganActions;
- (void)performInitialButtonUpActions;
- (void)_performSOSDidTriggerActions;
- (id)hardwareButtonGestureParameters;
- (void)_sendButtonEventToApp:(id)a0 down:(BOOL)a1;
- (void)performSinglePressDidFailActions;
- (void)performLongPressCancelledActions;
- (void)_registeredLockButtonAppsDidChange:(id)a0;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (void)performTriplePressActions;
- (BOOL)disallowsDoublePressForReason:(id *)a0;
- (BOOL)_isSOSActive;
- (BOOL)_sendButtonDownToRegisteredApp;
- (BOOL)_shouldWaitForDoublePress;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
- (void)performSOSGestureBeganActions;
- (void)performLongPressActions;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (void)performInitialButtonDownActions;
- (void)performDoublePressActions;
- (BOOL)disallowsSinglePressForReason:(id *)a0;
- (BOOL)_sendButtonUpToRegisteredApp;
- (void)performSecondButtonDownActions;
- (BOOL)disallowsLongPressForReason:(id *)a0;
- (void)performSOSGestureEndedActions;
- (id)initWithHomeButtonType:(long long)a0 proximitySensorManager:(id)a1;
- (BOOL)disallowsTriplePressForReason:(id *)a0;
- (void)performSinglePressAction;
- (void)performFinalButtonUpActions;
- (void)performSOSActionsWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;

@end
