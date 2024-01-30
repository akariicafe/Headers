@class PKSpendingSummaryChartView, NSString, UIFont, UILabel, PKDashboardCreditAccountItem;

@interface PKCreditActivityCell : PKDashboardCollectionViewCell {
    UILabel *_labelTitle;
    BOOL _isCompactUI;
}

@property (retain, nonatomic) PKDashboardCreditAccountItem *item;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) PKSpendingSummaryChartView *chartView;
@property (nonatomic) BOOL useAccssibilityLayout;
@property (retain, nonatomic) UIFont *titleFont;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
