@class UIColor, NSString, UIImageView, UILabel, UIView;

@interface PKTileDetailCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_textLabel;
    UILabel *_detailLabel;
    UILabel *_textSubtitleLabel;
    UIView *_seperatorForCustomView;
    UIView *_seperatorForText;
    UIImageView *_accessoryView;
    UIColor *_backgroundColor;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textSubtitle;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) unsigned long long accessory;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureView;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
