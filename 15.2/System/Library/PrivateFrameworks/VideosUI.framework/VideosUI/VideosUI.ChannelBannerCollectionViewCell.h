@interface VideosUI.ChannelBannerCollectionViewCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ bannerView;
    void /* unknown type, empty encoding */ transitionBackgroundView;
    void /* unknown type, empty encoding */ bgImageViewModel;
    void /* unknown type, empty encoding */ previousSize;
    void /* unknown type, empty encoding */ isBackgroundTransitioning;
    void /* unknown type, empty encoding */ isImageLoadedForBackgroundTransitioning;
}

- (void)onSystemTraitCollectionDidChange:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
