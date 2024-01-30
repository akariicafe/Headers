@class UIColor, NSString, UIImageView, UIImage, UILabel;

@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout {
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    UIImageView *_iconHighlightImageView;
    UILabel *_itemCountLabel;
    UILabel *_priceLabel;
    UIColor *_primaryTextColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_videoHighlightImageView;
    UIImageView *_videoImageView;
    UIImageView *_videoPlayButtonImageView;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *itemCountString;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (retain, nonatomic) UIImage *videoThumbnailImage;
@property (nonatomic) struct CGSize { double width; double height; } maxImageSize;
@property (nonatomic) unsigned long long visibleFields;

- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_layoutFieldsHorizontal;
- (void)_layoutFieldsVertical;
- (id)_newDefaultLabel;
- (void)_reloadHighlight;
- (void)_reloadPriceLabel;
- (void)_removeHighlightViews;
- (struct CGSize { double x0; double x1; })cellSizeForImageOfSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCollectionViewCell:(id)a0;
- (void)setColoringWithColorScheme:(id)a0;
- (void)setItemOffer:(id)a0;
- (void)setItemState:(id)a0 animated:(BOOL)a1;

@end
