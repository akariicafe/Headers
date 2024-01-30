@class NSString, _UISunScheduleController, UISUserInterfaceStyleMode, NSDate, NSBackgroundActivityScheduler, _UICustomScheduleController;

@interface UIUserInterfaceStyleArbiter : NSObject <UISUserInterfaceStyleModeDelegate, BLSBacklightStateObserving> {
    UISUserInterfaceStyleMode *_styleMode;
    long long _currentModeValue;
    long long _currentStyle;
    long long _lastProposedAutomaticStyle;
    struct { long long style; long long timing; } _lastOverride;
    BOOL _isAddingBacklightStateObserver;
    BOOL _isObservingBacklightState;
    BOOL _isDim;
    _UISunScheduleController *_sunScheduleController;
    _UICustomScheduleController *_customScheduleController;
    NSDate *_lastUpdateDate;
    NSBackgroundActivityScheduler *_backgroundActivityScheduler;
    int _notificationToken;
}

@property (readonly, nonatomic) long long currentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_backlightStateUpdated:(long long)a0 updateStyle:(BOOL)a1;
- (id)nextTransition;
- (long long)_proposedStyleForCurrentMode;
- (void)_updateCurrentStyleForReason:(long long)a0;
- (void)_logChangeEventWithNewMode:(long long)a0 oldMode:(long long)a1 newStyle:(long long)a2 oldStyle:(long long)a3 reason:(long long)a4;
- (void)_setWatchesScreenDim:(BOOL)a0;
- (void)_updateCurrentStyleAndNotify:(BOOL)a0 forReason:(long long)a1;
- (BOOL)_updateControllersWithOldModeValue:(long long)a0 newModeValue:(long long)a1;
- (void)toggleCurrentStyleWithOverrideTiming:(long long)a0;
- (id)_init;
- (void)_logPeriodicEvent;
- (void)userInterfaceStyleModeDidChange:(id)a0;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (void)_logArbiterDecisionToBiomeWithNewStyle:(long long)a0 reason:(long long)a1;
- (void).cxx_destruct;
- (void)toggleCurrentStyle;

@end
