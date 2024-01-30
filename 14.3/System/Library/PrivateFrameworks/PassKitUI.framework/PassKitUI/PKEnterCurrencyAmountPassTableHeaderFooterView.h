@class PKEnterCurrencyAmountPassView;
@protocol PKEnterCurrencyAmountPassViewDelegate;

@interface PKEnterCurrencyAmountPassTableHeaderFooterView : UITableViewHeaderFooterView

@property (weak, nonatomic) id<PKEnterCurrencyAmountPassViewDelegate> delegate;
@property (readonly, nonatomic) PKEnterCurrencyAmountPassView *amountPassView;

- (id)initWithCurrenyAmount:(id)a0 pass:(id)a1;
- (id)initWithCurrenyAmount:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_bottomPadding;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
