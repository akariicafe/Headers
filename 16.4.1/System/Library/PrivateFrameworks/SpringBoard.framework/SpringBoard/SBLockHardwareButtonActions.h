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

- (void)performFinalButtonUpActions;
- (BOOL)disallowsSinglePressForReason:(id *)a0;
- (void)performForceResetSequenceBeganActions;
- (BOOL)_usesLockButtonForSiri;
- (id)initWithHomeButtonType:(long long)a0 proximitySensorManager:(id)a1;
- (BOOL)_sendButtonDownToRegisteredApp;
- (void)performKeyboardShortcut;
- (void)_performSOSDidTriggerActions;
- (void)performTerminalLockLongPressActions;
- (void)performSOSGestureBeganActions;
- (void)performInitialButtonDownActions;
- (BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
- (void)performInitialButtonUpActions;
- (BOOL)_shouldWaitForDoublePress;
- (id)hardwareButtonGestureParameters;
- (void)performTriplePressActions;
- (BOOL)reverseFadeOutIfNeeded;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (void)_registeredLockButtonAppsDidChange:(id)a0;
- (void)performSOSActionsWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;
- (BOOL)disallowsTriplePressForReason:(id *)a0;
- (BOOL)disallowsDoublePressForReason:(id *)a0;
- (void)performSecondButtonDownActions;
- (BOOL)performButtonUpPreActions;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)performSinglePressAction;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (BOOL)_usesLockButtonForSecureIntent;
- (void)performSOSGestureEndedActions;
- (void)performLongPressCancelledActions;
- (BOOL)_isSOSActive;
- (void)performSinglePressDidFailActions;
- (void)_sendButtonEventToApp:(id)a0 down:(BOOL)a1;
- (BOOL)disallowsLongPressForReason:(id *)a0;
- (void).cxx_destruct;
- (void)performDoublePressActions;
- (void)performLongPressActions;
- (BOOL)_sendButtonUpToRegisteredApp;

@end
