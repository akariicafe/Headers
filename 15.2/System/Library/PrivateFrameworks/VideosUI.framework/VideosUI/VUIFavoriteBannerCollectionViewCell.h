@class VUIFavoriteBannerView, VUIFavoriteBannerLayout;

@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell

@property (nonatomic) double width;
@property (retain, nonatomic) VUIFavoriteBannerView *bannerView;
@property (retain, nonatomic) VUIFavoriteBannerLayout *bannerLayout;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)registerForInAppMessaging:(BOOL)a0;

@end
