@class UIColor, NSString, UIImageView, UIImage, UILabel;

@interface PKDashboardTextCollectionViewCell : PKDashboardCollectionViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_disclosureView;
}

@property (nonatomic) long long textLayoutStyle;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) BOOL hideDisclosure;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_maxWidthForTransactionCellInWidth:(double)a0;
- (void)_setFonts;

@end
