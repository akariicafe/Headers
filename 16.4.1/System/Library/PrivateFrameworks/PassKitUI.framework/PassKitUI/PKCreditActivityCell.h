@class PKSpendingSummaryChartView, NSString, UIFont, UIColor, UILabel, PKDashboardCreditAccountItem;

@interface PKCreditActivityCell : PKDashboardCollectionViewCell {
    UILabel *_labelTitle;
    UILabel *_labelRewardsSummary;
    BOOL _isCompactUI;
}

@property (retain, nonatomic) PKDashboardCreditAccountItem *item;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *rewardsSummary;
@property (readonly, nonatomic) PKSpendingSummaryChartView *chartView;
@property (nonatomic) BOOL useAccssibilityLayout;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *rewardsSummaryFont;
@property (retain, nonatomic) UIColor *rewardsSummaryTextColor;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_createSubviews;

@end
