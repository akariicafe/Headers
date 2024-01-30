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

- (void)performSOSActionsWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)performKeyboardShortcut;
- (BOOL)_sendButtonUpToRegisteredApp;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (void)performDoublePressActions;
- (void)performForceResetSequenceBeganActions;
- (BOOL)_isSOSActive;
- (void)performInitialButtonDownActions;
- (void)_registeredLockButtonAppsDidChange:(id)a0;
- (BOOL)_sendButtonDownToRegisteredApp;
- (void)_performSOSDidTriggerActions;
- (void)performSinglePressAction;
- (BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
- (void)_sendButtonEventToApp:(id)a0 down:(BOOL)a1;
- (BOOL)disallowsDoublePressForReason:(id *)a0;
- (BOOL)disallowsSinglePressForReason:(id *)a0;
- (id)hardwareButtonGestureParameters;
- (void).cxx_destruct;
- (BOOL)disallowsTriplePressForReason:(id *)a0;
- (void)performFinalButtonUpActions;
- (void)performLongPressCancelledActions;
- (void)performInitialButtonUpActions;
- (BOOL)reverseFadeOutIfNeeded;
- (id)initWithHomeButtonType:(long long)a0 proximitySensorManager:(id)a1;
- (void)performLongPressActions;
- (BOOL)disallowsLongPressForReason:(id *)a0;
- (void)performSecondButtonDownActions;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (void)performTriplePressActions;
- (void)performSinglePressDidFailActions;
- (BOOL)_shouldWaitForDoublePress;
- (void)performSOSGestureBeganActions;
- (void)performSOSGestureEndedActions;
- (BOOL)performButtonUpPreActions;

@end
