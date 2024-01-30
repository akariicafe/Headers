@class UILabel, PKDashboardCreditAccountItem;

@interface PKCreditBalanceCell : PKDashboardCollectionViewCell {
    BOOL _isCompactUI;
}

@property (retain, nonatomic) PKDashboardCreditAccountItem *item;
@property (readonly, nonatomic) UILabel *labelBalance;
@property (readonly, nonatomic) UILabel *labelAmount;
@property (readonly, nonatomic) UILabel *labelCreditAvailable;
@property (nonatomic) BOOL useAccssibilityLayout;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_createSubviews;
- (void).cxx_destruct;

@end
