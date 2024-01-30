@class UIImage, UIImageView, UIView;

@interface PKHeroCardExplainationHeaderView : UIView {
    UIView *_cardImageShadowView;
    BOOL _usesCompactLayout;
    double _cardHeight;
    double _cardTopPadding;
    double _cardBottomPadding;
    double _cardBackingHeight;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } recommendedCardImageSize;

@property (retain, nonatomic) UIImage *cardImage;
@property (readonly, nonatomic) UIImageView *cardImageView;
@property (nonatomic) BOOL useCompactLayout;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)updateCardValuesForCompactLayout:(BOOL)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
