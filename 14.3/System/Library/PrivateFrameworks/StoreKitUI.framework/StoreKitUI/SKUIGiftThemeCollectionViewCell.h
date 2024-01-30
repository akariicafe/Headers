@class SKUIGiftItemView, UILabel, UIImageView, UIImage, SKUIGift, SKUIGiftTheme, SKUIGiftConfiguration;

@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell {
    UIImageView *_headerImageView;
    SKUIGiftItemView *_itemView;
    UILabel *_messageLabel;
    UILabel *_priceLabel;
    UILabel *_senderNameLabel;
    UILabel *_senderNameLabelLabel;
}

@property (retain, nonatomic) SKUIGiftConfiguration *giftConfiguration;
@property (retain, nonatomic) SKUIGift *gift;
@property (retain, nonatomic) SKUIGiftTheme *theme;
@property (retain, nonatomic) UIImage *itemImage;

- (void).cxx_destruct;
- (id)_itemView;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)_setPrice:(id)a0;
- (void)_setMessage:(id)a0;
- (void)reloadThemeHeaderImage;
- (void)_setHeaderImage:(id)a0;
- (void)_setSenderName:(id)a0;
- (void)_reloadItemView;

@end
