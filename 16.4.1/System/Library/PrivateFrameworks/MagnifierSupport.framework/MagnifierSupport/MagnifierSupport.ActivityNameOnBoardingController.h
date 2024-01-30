@interface MagnifierSupport.ActivityNameOnBoardingController : OBWelcomeController <UIAdaptivePresentationControllerDelegate, UITextFieldDelegate> {
    void /* unknown type, empty encoding */ kContentViewHeight;
    void /* unknown type, empty encoding */ kTextFieldHeight;
    void /* unknown type, empty encoding */ kTextFieldWidthPadding;
    void /* unknown type, empty encoding */ kTextFieldTopPadding;
    void /* unknown type, empty encoding */ kTextFieldCornerRadius;
    void /* unknown type, empty encoding */ activityNameTextField;
    void /* unknown type, empty encoding */ activityNameTakenLabel;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ createActivityDelegate;
    void /* unknown type, empty encoding */ delegate;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)viewDidLoad;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)activityNameFromTextFieldWithTextField:(id)a0;

@end
