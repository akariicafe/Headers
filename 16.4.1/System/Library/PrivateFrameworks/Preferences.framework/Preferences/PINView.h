@class FailureBarView, NSString, UILabel, UIButton;
@protocol PSPINEntryViewDelegate;

@interface PINView : UIView <PINEntryView> {
    UILabel *_titleLabel;
    UILabel *_errorTitleLabel;
    FailureBarView *_failureView;
    UILabel *_pinPolicyLabel;
    BOOL _error;
}

@property (retain, nonatomic) UIButton *optionsButton;
@property (copy, nonatomic) NSString *optionsButtonTitle;
@property (weak, nonatomic) id<PSPINEntryViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ passcodeOptionsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringValue;
- (BOOL)becomeFirstResponder;
- (void)appendString:(id)a0;
- (void)setStringValue:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)deleteLastCharacter;
- (void)setBlocked:(BOOL)a0;
- (void)setTextFieldKeyboardAppearance:(long long)a0;
- (void)_layoutBottomSubview:(id)a0 withMinY:(double)a1 withSize:(struct CGSize { double x0; double x1; })a2;
- (double)getCurrentTitleFontSize;
- (void)hideError;
- (void)hideFailedAttempts;
- (void)hidePasscodeField:(BOOL)a0;
- (void)layoutBottomSubview:(id)a0 withLabel:(id)a1 withMinY:(double)a2;
- (void)layoutTopLabel:(id)a0 withMaxY:(double)a1;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;
- (void)optionsButtonTapped;
- (void)setPINPolicyString:(id)a0 visible:(BOOL)a1;
- (void)setShowsOptionsButton:(BOOL)a0;
- (void)setTextFieldKeyboardType:(long long)a0;
- (void)setTitle:(id)a0 font:(id)a1;
- (void)showError:(id)a0 animate:(BOOL)a1;
- (void)showFailedAttempts:(long long)a0;

@end
