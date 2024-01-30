@class NSMutableArray, CBAdaptationClient, CBBlueLightClient, CBClient, CCUILabeledRoundButtonViewController, UIAlertController;

@interface CCUIDisplayBackgroundViewController : CCUISliderModuleBackgroundViewController {
    CBClient *_brightnessClient;
    CBAdaptationClient *_trueToneClient;
    CBBlueLightClient *_nightShiftClient;
    struct { BOOL active; BOOL enabled; BOOL sunSchedulePermitted; int mode; struct { struct { int hour; int minute; } fromTime; struct { int hour; int minute; } toTime; } schedule; unsigned long long disableFlags; BOOL available; } _currentStatus;
    UIAlertController *_presentedAlertController;
    NSMutableArray *_buttons;
}

@property (retain, nonatomic) CCUILabeledRoundButtonViewController *styleModeButton;
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *nightShiftButton;
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *trueToneButton;

- (id)_timeFormatter;
- (id)_subtitleForTrueToneEnabled:(BOOL)a0;
- (void)_setupNightShift;
- (id)_timeStringForBlueLightTransitionTime:(struct { int x0; int x1; })a0;
- (void).cxx_destruct;
- (id)_subtitleForBlueLightStatus:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; })a0;
- (unsigned long long)_formattedHourForTransitionTime:(struct { int x0; int x1; })a0;
- (void)_setupStyleMode;
- (void)_updateState;
- (void)_getBlueLightStatus:(id /* block */)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_toggleTrueTone;
- (void)_setNightShiftEnabled:(BOOL)a0;
- (unsigned long long)_formattedHourForHour:(unsigned long long)a0;
- (BOOL)_toggleNightShift;
- (id)_timeStringForHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (void)_trueToneButtonPressed:(id)a0;
- (void)_styleModeButtonPressed:(id)a0;
- (void)_styleModeDidChange;
- (id)_alertControllerForDisablingAccessibilityScreenFilter:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (id)_subtitleForUserInterfaceStyle:(long long)a0 nextTransition:(id)a1;
- (BOOL)_uses24HourTime;
- (void)_nightShiftButtonPressed:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)_subtitleFormatStringForBlueLightEnabled:(BOOL)a0 transitionTime:(struct { int x0; int x1; })a1;
- (void)viewDidLoad;
- (void)_toggleStyleMode;

@end
