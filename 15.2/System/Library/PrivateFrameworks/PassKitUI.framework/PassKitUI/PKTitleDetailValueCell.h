@class UIFont, NSString, UIColor, UIImageView, UILabel;

@interface PKTitleDetailValueCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_valueLabel;
    UIImageView *_disclosureView;
}

@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIFont *detailFont;
@property (retain, nonatomic) UIColor *detailColor;
@property (copy, nonatomic) NSString *valueText;
@property (retain, nonatomic) UIFont *valueFont;
@property (retain, nonatomic) UIColor *valueColor;
@property (nonatomic) BOOL showChevron;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_configureView;

@end
