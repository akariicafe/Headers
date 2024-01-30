@class UIDatePicker;

@interface WFInputDateDialogViewController : WFCompactDialogViewController

@property (weak, nonatomic) UIDatePicker *datePicker;

- (void).cxx_destruct;
- (void)loadView;
- (BOOL)allowsInteractiveDismiss;

@end
