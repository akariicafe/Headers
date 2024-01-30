@class UIImage, UIImageView, PKWatchHeroImageView;

@interface PKHeroCardWatchExplainationHeaderView : UIView {
    UIImageView *_passImageView;
    PKWatchHeroImageView *_watchView;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } recommendedCardImageSize;
@property (retain, nonatomic) UIImage *cardImage;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_deviceBackgroundColor;
- (BOOL)_isSmallPhone;

@end
