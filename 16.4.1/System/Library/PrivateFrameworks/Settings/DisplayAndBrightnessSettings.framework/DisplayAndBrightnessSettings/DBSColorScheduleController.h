@class NSDateFormatter, PSSpecifier, CBClient, UIDatePicker;

@interface DBSColorScheduleController : PSListController <PSDateTimePickerCellDelegate> {
    CBClient *_brightnessClient;
    PSSpecifier *_radioGroup;
    PSSpecifier *_sunsetToSunriseRadioSpecifier;
    PSSpecifier *_scheduleRadioSpecifier;
    PSSpecifier *_timeGroup;
    PSSpecifier *_startTimePickerSpecifier;
    PSSpecifier *_endTimePickerSpecifier;
    NSDateFormatter *_timeFormatter;
    BOOL _showingScheduleSpecifiers;
    UIDatePicker *_startTimePicker;
    UIDatePicker *_endTimePicker;
}

- (id)endTime;
- (void)willResignActive;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)startTime;
- (void)dealloc;
- (id)specifiers;
- (void).cxx_destruct;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (int)blueLightMode;
- (void)handleBlueLightStatusChanged:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a0;
- (void)showScheduleSpecifiers:(BOOL)a0 animated:(BOOL)a1;

@end
