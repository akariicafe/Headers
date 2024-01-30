@interface SeymourUI.MarketingHeaderBannerCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ labelGuide;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ artworkBackgroundView;
    void /* unknown type, empty encoding */ bannerMessageBackgroundView;
    void /* unknown type, empty encoding */ bannerMessageImageView;
    void /* unknown type, empty encoding */ playButton;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ titleLabel;
}

- (void)accessibilityConfigureForPlayback:(BOOL)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;

@end
