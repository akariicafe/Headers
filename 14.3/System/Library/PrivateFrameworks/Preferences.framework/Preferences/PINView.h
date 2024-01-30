@class UIButton, NSString, UILabel, FailureBarView;
@protocol PSPINEntryViewDelegate;

@interface PINView : UIView <PINEntryView> {
    UILabel *_titleLabel;
    UILabel *_errorTitleLabel;
    FailureBarView *_failureView;
    UILabel *_pinPolicyLabel;
    BOOL _error;
    UIButton *_optionsButton;
}

@property (copy, nonatomic) NSString *optionsButtonTitle;
@property (weak, nonatomic) id<PSPINEntryViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ passcodeOptionsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (void)hideError;
- (void)setBlocked:(BOOL)a0;
- (void)appendString:(id)a0;
- (void)layoutSubviews;
- (void)showFailedAttempts:(long long)a0;
- (void)hideFailedAttempts;
- (void)setPINPolicyString:(id)a0 visible:(BOOL)a1;
- (id)optionsButton;
- (double)getCurrentTitleFontSize;
- (void)optionsButtonTapped;
- (void)_layoutBottomSubview:(id)a0 withMinY:(double)a1 withSize:(struct CGSize { double x0; double x1; })a2;
- (void)showError:(id)a0 animate:(BOOL)a1;
- (id)stringValue;
- (void)setTextFieldKeyboardType:(long long)a0;
- (void)setTextFieldKeyboardAppearance:(long long)a0;
- (void)setTitle:(id)a0 font:(id)a1;
- (void)hidePasscodeField:(BOOL)a0;
- (void)setShowsOptionsButton:(BOOL)a0;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;
- (void)layoutTopLabel:(id)a0 withMaxY:(double)a1;
- (void)layoutBottomSubview:(id)a0 withLabel:(id)a1 withMinY:(double)a2;
- (void)deleteLastCharacter;

@end
