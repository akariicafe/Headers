@class UILabel, SBUIButton, UIView;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
    BOOL _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

@property (readonly, nonatomic) SBUIButton *okButton;
@property (nonatomic) BOOL showsOkButton;
@property (readonly, nonatomic) UILabel *promptLabel;
@property (nonatomic) BOOL showsPromptLabel;

+ (BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
+ (BOOL)_usesTextFieldForFirstResponder;

- (void)_handleKeyUIEvent:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (struct CGSize { double x0; double x1; })_viewSize;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)_resetForFailedPasscode:(BOOL)a0;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)_okButtonHit;
- (void)_getPasscodeFieldSize:(struct CGSize { double x0; double x1; } *)a0 okButtonSize:(struct CGSize { double x0; double x1; } *)a1;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;

@end
