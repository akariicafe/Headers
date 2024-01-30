@class SKUIItemOfferButton, NSString, UIImage, UILabel, SKUIClientContext, SKUIItemArtworkContext, UIImageView, SKUIItem, SKUIGiftTheme, SKUIItemState;

@interface SKUIGiftItemView : UIView {
    SKUIClientContext *_clientContext;
    UIImageView *_itemImageView;
    UIImageView *_starRatingImageView;
    UILabel *_subtitleLabel1;
    UILabel *_subtitleLabel2;
    UILabel *_titleLabel;
    UILabel *_userRatingCountLabel;
}

@property (nonatomic) BOOL leftToRight;
@property (readonly, nonatomic) long long giftItemStyle;
@property (readonly, nonatomic) SKUIItem *item;
@property (copy, nonatomic) SKUIGiftTheme *theme;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) float userRating;
@property (readonly, nonatomic) SKUIItemOfferButton *itemOfferButton;
@property (retain, nonatomic) SKUIItemState *itemState;
@property (retain, nonatomic) UIImage *itemImage;
@property (readonly, nonatomic) SKUIItemArtworkContext *artworkContext;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_imageSize;
- (id)_newLabel;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageEdgeInsets;
- (id)_titleColor;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (id)_subtitleColor;
- (void)_reloadUserRatingViews;
- (id)initWithStyle:(long long)a0 item:(id)a1 clientContext:(id)a2;
- (void)_reloadItemState:(BOOL)a0;
- (void)_itemOfferConfirmAction:(id)a0;
- (void)_reloadSubtitles;
- (void)setItemState:(id)a0 animated:(BOOL)a1;
- (double)_paddingTrailing;
- (double)_paddingLeading;
- (void)_enumerateMetadataViewsUsingBlock:(id /* block */)a0;
- (id)_userRatingColor;

@end
