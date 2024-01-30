@class UILabel, UIButton;

@interface PKPaymentSetupFooterView : PKTableFooterView {
    UIButton *_continueButton;
    UIButton *_skipCardButton;
    UILabel *_notificationText;
    BOOL _isBuddyiPad;
}

@property (nonatomic) long long context;
@property (nonatomic) BOOL forceShowSetupLaterButton;
@property (retain, nonatomic) UILabel *notificationText;
@property (retain, nonatomic) UIButton *manualEntryButton;
@property (retain, nonatomic) UIButton *setupLaterButton;
@property (retain, nonatomic) UIButton *skipCardButton;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(long long)a1;
- (void)_createSetupLaterButton;
- (struct CGSize { double x0; double x1; })_sizeForButton:(id)a0 constrainedToSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })_sizeForLabel:(id)a0 maxText:(id)a1 constrainedToSize:(struct CGSize { double x0; double x1; })a2;
- (void)setButtonsEnabled:(BOOL)a0;

@end
