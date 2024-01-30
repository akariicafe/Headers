@class UIColor, NSString, PKPaymentTransactionView;

@interface PKPaymentTransactionTableCell : PKTableViewCell <PKPaymentTransactionCellResponder>

@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKPaymentTransactionView *transactionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
