@class PKPeerPaymentMessagesMultiActionView, PKPeerPaymentMessagesNumberPadView, UILabel, PKPeerPaymentMessagesAmountStepperView, UIView;

@interface PKPeerPaymentMessagesContentAmountEntryView : UIView {
    UIView *_containerView;
    BOOL _usesAccessibilityLayout;
}

@property (readonly, nonatomic) PKPeerPaymentMessagesAmountStepperView *amountStepperView;
@property (readonly, nonatomic) PKPeerPaymentMessagesNumberPadView *numberPadView;
@property (readonly, nonatomic) PKPeerPaymentMessagesMultiActionView *actionView;
@property (readonly, nonatomic) UILabel *balanceLabel;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_useLargeLayout;
- (BOOL)_isCompactUI;

@end
