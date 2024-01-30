@class UIColor, NSString, UIImageView, UIActivityIndicatorView, UILabel, NSNumberFormatter;

@interface PKDashboardTitleDetailCell : PKDashboardCollectionViewCell {
    NSString *_titleText;
    NSString *_detailText;
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinnerView;
    unsigned long long _accessory;
    UIColor *_titleTextColor;
    UIColor *_detailTextColor;
    UIColor *_defaultTitleTextColor;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSNumberFormatter *_numberFormatter;
}

- (void)setAccessory:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setTitleTextColor:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_updateDefaultValues;
- (void)setDetailTextColor:(id)a0;
- (void)setTitleText:(id)a0 detail:(id)a1;

@end
