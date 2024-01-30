@class CABackdropLayer, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountView : UIView {
    CABackdropLayer *_background;
}

@property (readonly, nonatomic) PKBillPaymentSuggestedAmount *suggestedAmount;

- (void).cxx_destruct;
- (id)initWithSuggestedAmount:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
