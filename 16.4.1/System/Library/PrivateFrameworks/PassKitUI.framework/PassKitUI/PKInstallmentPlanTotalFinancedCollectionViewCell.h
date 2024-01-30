@class NSString, UIImageView, UILabel, PKCurrencyAmount;

@interface PKInstallmentPlanTotalFinancedCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_amountLabel;
    UILabel *_subtitleLabel;
    UIImageView *_disclosureView;
    BOOL _isTemplateLayout;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (copy, nonatomic) NSString *subtitleText;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
