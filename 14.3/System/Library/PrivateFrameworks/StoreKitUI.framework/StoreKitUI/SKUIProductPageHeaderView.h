@class SKUIItemOffer, UIImageView, UILabel, SKUIItemOfferButton, SKUIItemState, UIButton, SKUIBadgeLabel, NSString, SKUIItemContentRating, SKUIProductPageHeaderLabel, SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIColorScheme, UIImage;

@interface SKUIProductPageHeaderView : UIView <SKUIItemOfferButtonDelegate, SKUIContentRatingArtworkLoaderObserver> {
    UILabel *_ageBandLabel;
    SKUIBadgeLabel *_editorialBadgeLabel;
    SKUIClientContext *_clientContext;
    UIImageView *_headerImageView;
    UIImageView *_iconImageView;
    UILabel *_inAppPurchasesLabel;
    UILabel *_itemOfferExplanationLabel;
    UILabel *_itemOfferExplanationTitleLabel;
    BOOL _needsLayoutAfterButtonAnimation;
    SKUIProductPageHeaderLabel *_titleLabel;
    UILabel *_userRatingLabel;
    UIImageView *_userRatingStarsView;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *inAppPurchasesString;
@property (copy, nonatomic) NSString *editorialBadge;
@property (readonly, nonatomic) UIButton *artistButton;
@property (retain, nonatomic) SKUIContentRatingArtworkResourceLoader *contentRatingArtworkLoader;
@property (retain, nonatomic) SKUIItemContentRating *contentRating;
@property (retain, nonatomic) SKUIItemContentRating *secondaryContentRating;
@property (copy, nonatomic) NSString *ageBandString;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (retain, nonatomic) UIImage *headerImage;
@property (nonatomic) double headerImageHeight;
@property (retain, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) SKUIItemOffer *itemOffer;
@property (readonly, nonatomic) SKUIItemOfferButton *itemOfferButton;
@property (copy, nonatomic) NSString *itemOfferExplanationText;
@property (copy, nonatomic) NSString *itemOfferExplanationTitle;
@property (nonatomic, getter=isRestricted) BOOL restricted;
@property (copy, nonatomic) SKUIItemState *itemState;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) double userRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sizeToFit;
- (void)dealloc;
- (id)initWithClientContext:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_showConfirmationAction:(id)a0;
- (void)itemOfferButtonDidAnimateTransition:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)setItemState:(id)a0 animated:(BOOL)a1;
- (void)contentRatingArtworkLoader:(id)a0 didLoadImage:(id)a1 forContentRating:(id)a2;
- (void)_reloadItemOfferButton:(BOOL)a0;
- (id)contentRatingName;
- (void)_getTopLayoutProperties:(struct **)a0 origins:(double **)a1 height:(double *)a2 forWidth:(double)a3;
- (void)_getBottomLayoutProperties:(struct **)a0 origins:(double **)a1 height:(double *)a2 forWidth:(double)a3;
- (void)_finishButtonAnimation;

@end
