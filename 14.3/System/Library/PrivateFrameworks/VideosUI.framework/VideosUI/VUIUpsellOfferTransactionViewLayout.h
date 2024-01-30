@class VUIButtonLayout, VUITextLayout;

@interface VUIUpsellOfferTransactionViewLayout : TVViewLayout

@property (readonly, nonatomic) VUITextLayout *disclaimerTextLayout;
@property (readonly, nonatomic) VUIButtonLayout *buttonLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (double)buttonHeight;
- (double)buttonSpacing;
- (void)_configureLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsPhone;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsPad;
- (double)disclaimerBottomMargin;

@end
