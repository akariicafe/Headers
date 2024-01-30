@class NSDateFormatter, PSSpecifier, UISUserInterfaceStyleMode, UIDatePicker;

@interface DBSDeviceAppearanceScheduleController : PSListController <PSDateTimePickerCellDelegate>

@property (retain, nonatomic) PSSpecifier *_radioGroup;
@property (retain, nonatomic) PSSpecifier *_timeGroup;
@property (retain, nonatomic) PSSpecifier *_lightAppearanceTimePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *_darkAppearanceTimePickerSpecifier;
@property (nonatomic) BOOL _showingScheduleSpecifiers;
@property (weak, nonatomic) UISUserInterfaceStyleMode *_styleMode;
@property (retain, nonatomic) NSDateFormatter *_timeFormatter;
@property (retain, nonatomic) UIDatePicker *_lightAppearanceTimePicker;
@property (retain, nonatomic) UIDatePicker *_darkAppearanceTimePicker;

- (void)willResignActive;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (void)showScheduleSpecifiers:(BOOL)a0 animated:(BOOL)a1;
- (id)_lightAppearanceTimeString;
- (id)_darkAppearanceTimeString;

@end
