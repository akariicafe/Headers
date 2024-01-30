@class NSString, UILabel, PKCurrencyAmount;

@interface PKDashboardCurrencyAmountCell : PKDashboardCollectionViewCell {
    PKCurrencyAmount *_currencyAmount;
    UILabel *_titleLabel;
    UILabel *_currencyLabel;
}

@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *detailString;
@property (copy, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) BOOL showsPositivePrefix;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetFonts;
- (id)defaultPrimaryColor;
- (id)defaultSecondaryColor;
- (void)_updateCurrencyLabel;
- (BOOL)_shouldUseStackedLayoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
