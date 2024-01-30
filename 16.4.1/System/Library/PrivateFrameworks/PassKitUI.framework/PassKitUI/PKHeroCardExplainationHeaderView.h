@class UIImageView, UIImage, UIView, UIActivityIndicatorView;

@interface PKHeroCardExplainationHeaderView : UIView {
    UIView *_cardImageShadowView;
    BOOL _usesCompactLayout;
    double _cardHeight;
    double _cardTopPadding;
    double _cardBottomPadding;
    double _cardBackingHeight;
    UIActivityIndicatorView *_spinner;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } recommendedCardImageSize;

@property (retain, nonatomic) UIImage *cardImage;
@property (readonly, nonatomic) UIImageView *cardImageView;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long padding;
@property (nonatomic) BOOL hideBorders;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImage:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)hideLoadingContent;
- (void)showLoadingContent;
- (void)updateCardSizeValues;

@end
