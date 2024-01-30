@class UIButton;

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell

@property (nonatomic) BOOL showsCameraCaptureButton;
@property (readonly, retain, nonatomic) UIButton *cameraCaptureButton;

- (BOOL)textFieldShouldClear:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setPaymentSetupField:(id)a0;
- (void)setEnabled:(BOOL)a0;

@end
