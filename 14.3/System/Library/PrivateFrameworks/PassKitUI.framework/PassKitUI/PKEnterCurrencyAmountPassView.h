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

- (id)initWithCurrenyAmount:(id)a0 pass:(id)a1;
- (struct CGSize { double x0; double x1; })_passViewSize;
- (id)initWithCurrenyAmount:(id)a0;
- (void)shakePassView;
- (double)_topPadding;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
