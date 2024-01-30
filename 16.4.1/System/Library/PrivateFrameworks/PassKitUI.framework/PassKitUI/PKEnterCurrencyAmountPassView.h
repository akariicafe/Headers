@class UIImageView, PKEnterValueNewBalanceView, PKEnterCurrencyAmountView, PKPass;
@protocol PKEnterCurrencyAmountPassViewDelegate;

@interface PKEnterCurrencyAmountPassView : UIView {
    UIImageView *_passView;
    BOOL _loadingSnapshot;
}

@property (retain, nonatomic) PKPass *pass;
@property (weak, nonatomic) id<PKEnterCurrencyAmountPassViewDelegate> delegate;
@property (readonly, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView;
@property (readonly, nonatomic) PKEnterValueNewBalanceView *balanceView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; struct CGSize { double x0; double x1; } x3; })_amountPassViewSizeInfoForSize:(struct CGSize { double x0; double x1; })a0;
- (double)_newBalanceHorizontalPadding;
- (struct CGSize { double x0; double x1; })_passViewSize;
- (id)initWithCurrenyAmount:(id)a0;
- (id)initWithCurrenyAmount:(id)a0 pass:(id)a1;
- (void)shakePassView;

@end
