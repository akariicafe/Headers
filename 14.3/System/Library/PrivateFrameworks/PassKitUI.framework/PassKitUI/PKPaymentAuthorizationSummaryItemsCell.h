@class NSMutableArray, PKPaymentAuthorizationSummaryItemsView;

@interface PKPaymentAuthorizationSummaryItemsCell : PKTableViewCell {
    NSMutableArray *_constraints;
}

@property (readonly, nonatomic) PKPaymentAuthorizationSummaryItemsView *summaryItemsView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithLayout:(id)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
