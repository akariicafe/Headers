@class NSDateFormatter, NSTimer, PSSpecifier, CBClient;

@interface DBSColorTemperatureController : PSListController <PSTimeRangeCellDelegate> {
    CBClient *_brightnessClient;
    NSDateFormatter *_timeFormatter;
    BOOL _temperatureSliderWasTracking;
    NSTimer *_blueLightReductionLabelRefreshTimer;
    BOOL _showColorTemperature;
    BOOL _showingScheduleRange;
    PSSpecifier *_scheduleRangeSpecifier;
    PSSpecifier *_scheduleSwitchSpecifier;
    PSSpecifier *_manualSwitchSpecifier;
    PSSpecifier *_temperatureSlider;
}

- (id)toDetailForCell:(id)a0;
- (id)fromDetailForCell:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)handleBlueLightStatusChanged:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a0;
- (id)blueLightReductionFooter;
- (void)showScheduleRange:(BOOL)a0 animated:(BOOL)a1;
- (void)_printBlueLightStatus:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a0;
- (void)showAlertToDisableAccessibilityFiltersForBlueLightReduction:(id /* block */)a0 cancel:(id /* block */)a1;
- (void)colorTemperatureSliderDidChange;
- (id)localizedTimeForTime:(struct { int x0; int x1; })a0;
- (id)getBlueLightReductionEnabled:(id)a0;
- (void)setBlueLightReductionEnabled:(id)a0 forSpecifier:(id)a1;
- (id)getBlueLightReductionScheduleEnabled:(id)a0;
- (void)setBlueLightReductionSchedule:(id)a0 forSpecifier:(id)a1;
- (id)temperatureStrength:(id)a0;
- (void)setTemperatureStrength:(id)a0 specifier:(id)a1;

@end
