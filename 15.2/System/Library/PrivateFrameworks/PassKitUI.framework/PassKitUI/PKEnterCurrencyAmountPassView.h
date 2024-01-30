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

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCurrenyAmount:(id)a0 pass:(id)a1;
- (struct CGSize { double x0; double x1; })_passViewSize;
- (double)_newBalanceHorizontalPadding;
- (struct { double x0; double x1; double x2; struct CGSize { double x0; double x1; } x3; })_amountPassViewSizeInfoForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCurrenyAmount:(id)a0;
- (void)shakePassView;

@end
