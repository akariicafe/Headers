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

- (void)layoutSubviews;
- (void)_handleKeyUIEvent:(id)a0;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })_viewSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_resetForFailedPasscode:(BOOL)a0;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)a0;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0;
- (void)_okButtonHit;
- (void)_getPasscodeFieldSize:(struct CGSize { double x0; double x1; } *)a0 okButtonSize:(struct CGSize { double x0; double x1; } *)a1;

@end
