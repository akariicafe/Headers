@class NSString, PKPaymentTransactionView;

@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell <PKPaymentTransactionCellResponder>

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKPaymentTransactionView *transactionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (double)maxWidthForTransactionCellInWidth:(double)a0;

@end
