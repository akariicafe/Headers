@class UITextView, NSString, PKContinuousButton, PKPaymentSetupFooterView, OBPrivacyLinkController, ASCLockupView;

@interface PKPaymentSetupDockView : UIView {
    PKContinuousButton *_continuousButton;
    UITextView *_buttonExplanationTextView;
    PKPaymentSetupFooterView *_footerView;
    BOOL _isBuddyiPad;
}

@property (nonatomic) BOOL requiresAdditionalContinuousButtonPadding;
@property (readonly, nonatomic) long long context;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (retain, nonatomic) NSString *buttonExplanationText;
@property (readonly, nonatomic) UITextView *buttonExplanationTextView;
@property (retain, nonatomic) PKContinuousButton *continuousButton;
@property (retain, nonatomic) PKPaymentSetupFooterView *footerView;
@property (retain, nonatomic) ASCLockupView *lockUpView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(long long)a1;
- (void)layoutSubviews;
- (void)setButtonsEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_sizeForButton:(id)a0 constrainedToSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
