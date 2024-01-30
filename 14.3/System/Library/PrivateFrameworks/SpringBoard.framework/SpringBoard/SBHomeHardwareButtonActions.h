@class SBHardwareButtonGestureParameters, NSString, SBHardwareButtonActionList, SBHardwareButtonService, SBProximitySensorManager;
@protocol SBHardwareButtonGestureParametersProvider, SBHardwareButtonInteraction;

@interface SBHomeHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {
    BOOL _screenWasDimOnMenuDown;
    BOOL _dontUnlockOnButtonUp;
    long long _homeButtonType;
    SBHardwareButtonActionList *_buttonUpActions;
    SBHardwareButtonActionList *_buttonUpPostActions;
    unsigned long long _menuButtonHoldStartTime;
    double _menuButtonHoldStartAbsoluteTime;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    id<SBHardwareButtonInteraction, SBHardwareButtonGestureParametersProvider> _accessibilityButtonInteraction;
    id<SBHardwareButtonInteraction, SBHardwareButtonGestureParametersProvider> _siriButtonInteraction;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
}

@property (nonatomic, getter=isButtonDown) BOOL buttonDown;
@property (nonatomic) double currentLongPressDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performDoubleTapUpActions;
- (void).cxx_destruct;
- (void)performInitialButtonUpActions;
- (void)performSinglePressUpActionsWithSourceType:(unsigned long long)a0;
- (id)hardwareButtonGestureParameters;
- (void)performTriplePressUpActions;
- (BOOL)_performButtonPreflightActions;
- (void)configureForwardingToLockButtonActions:(id)a0;
- (void)performLongPressCancelledActions;
- (void)performSinglePressUpActions;
- (id)initWitHomeButtonType:(long long)a0;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(id /* block */)a0;
- (BOOL)_shouldIgnorePressesDueToProxOrIdle:(id *)a0;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)performLongPressActions;
- (void)performDoublePressDownActions;
- (void)performInitialButtonDownActions;
- (void)performWhenMenuButtonIsUpUsingBlock:(id /* block */)a0;
- (void)_logMenuButtonHoldTime;
- (void)performFinalButtonUpActions;

@end
