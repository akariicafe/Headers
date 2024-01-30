@class UIButton;

@interface PKPaymentSetupFindWithoutNumberFooterView : PKTableFooterView

@property (nonatomic) long long context;
@property (retain, nonatomic) UIButton *noNumberButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(long long)a1;
- (void)layoutSubviews;
- (void)setButtonsEnabled:(BOOL)a0;
- (BOOL)isBuddyiPad;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
