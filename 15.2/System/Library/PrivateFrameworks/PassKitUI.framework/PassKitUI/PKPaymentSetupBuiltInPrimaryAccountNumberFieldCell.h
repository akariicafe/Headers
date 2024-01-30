@class UIButton, UIAction;

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    UIButton *_cameraCaptureButton;
}

@property (nonatomic) BOOL showsCameraCaptureButton;
@property (retain, nonatomic) UIAction *cameraCaptureTapAction;

- (void)setEnabled:(BOOL)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setPaymentSetupField:(id)a0;

@end
