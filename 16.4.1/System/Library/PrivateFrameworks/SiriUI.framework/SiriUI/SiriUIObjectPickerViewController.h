@class SAUIDomainObjectPicker;
@protocol SiriUIObjectPickerViewControllerDelegate;

@interface SiriUIObjectPickerViewController : UIViewController

@property (readonly, nonatomic, getter=_picker) SAUIDomainObjectPicker *picker;
@property (weak, nonatomic) id<SiriUIObjectPickerViewControllerDelegate> pickerDelegate;

+ (id)pickerControllerWithPicker:(id)a0;

- (void).cxx_destruct;
- (id)initWithPicker:(id)a0;
- (void)showPicker:(id)a0;

@end
