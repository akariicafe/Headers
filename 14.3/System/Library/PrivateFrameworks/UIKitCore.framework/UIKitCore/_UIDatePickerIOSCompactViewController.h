@class UIDatePicker;

@interface _UIDatePickerIOSCompactViewController : UIViewController

@property (readonly, nonatomic) UIDatePicker *datePicker;

- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithValuesFromDataModel:(id)a0;
- (void)viewDidLoad;

@end
