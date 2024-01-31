@class TKTonePickerViewController;
@protocol CNPickerControllerDelegate;

@interface CNTonePickerController : UINavigationController

@property (retain, nonatomic) TKTonePickerViewController *tonePicker;
@property (weak, nonatomic) id<CNPickerControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)cancelButton:(id)a0;
- (void)doneButton:(id)a0;
- (id)initWithAlertType:(long long)a0 activityAlert:(id)a1;

@end
