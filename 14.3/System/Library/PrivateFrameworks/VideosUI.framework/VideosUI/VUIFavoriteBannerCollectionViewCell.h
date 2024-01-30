@class VUIFavoriteBannerView, VUIFavoriteBannerLayout;

@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell

@property (nonatomic) double width;
@property (retain, nonatomic) VUIFavoriteBannerView *bannerView;
@property (retain, nonatomic) VUIFavoriteBannerLayout *bannerLayout;

+ (id)configureCellWithElement:(id)a0 existingCell:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)registerForInAppMessaging:(BOOL)a0;

@end
