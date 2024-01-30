@class IKViewElement, VUILabel, NSArray, VUIUpsellOfferTransactionViewLayout;

@interface VUIUpsellOfferTransactionView : UIView

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIUpsellOfferTransactionViewLayout *layout;
@property (retain, nonatomic) VUILabel *disclaimerLabel;
@property (retain, nonatomic) NSArray *buttons;

+ (id)transactionViewFromElement:(id)a0 existingView:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;

@end
