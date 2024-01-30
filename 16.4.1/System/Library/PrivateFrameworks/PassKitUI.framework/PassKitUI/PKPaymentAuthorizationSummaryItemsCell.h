@class NSMutableArray, PKPaymentAuthorizationSummaryItemsView;

@interface PKPaymentAuthorizationSummaryItemsCell : PKTableViewCell {
    NSMutableArray *_constraints;
}

@property (readonly, nonatomic) PKPaymentAuthorizationSummaryItemsView *summaryItemsView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0 reuseIdentifier:(id)a1;

@end
