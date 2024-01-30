@class UIFont, NSString, UIColor, UIImage, PKTitleDetailValueTextView, UIImageView;

@interface PKTitleDetailValueCell : UICollectionViewListCell {
    PKTitleDetailValueTextView *_textView;
    UIImageView *_checkmarkView;
    UIColor *_backgroundColor;
    UIFont *_defaultTitleFont;
    UIFont *_defaultDetailFont;
    UIFont *_defaultValueFont;
    UIColor *_defaultDetailColor;
}

@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *detailIcon;
@property (retain, nonatomic) UIFont *detailFont;
@property (retain, nonatomic) UIColor *detailColor;
@property (copy, nonatomic) NSString *valueText;
@property (retain, nonatomic) UIFont *valueFont;
@property (retain, nonatomic) UIColor *valueColor;
@property (nonatomic) unsigned long long accessory;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double verticalMargin;
@property (nonatomic) double labelPadding;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureView;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_resetValues;

@end
