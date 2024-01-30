@class NSString, UIViewController;

@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController <CNContactPickerDelegate> {
    UIViewController *_presentingViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)_dismissPicker;
- (id)_pickerResponseForPerson:(id)a0;
- (void)showPicker:(id)a0;

@end
