@interface VideosUI.SportsCanonicalBannerCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ bannerViewModel;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ uberBackgroundView;
    void /* unknown type, empty encoding */ uberBackgroundImageViewModel;
    void /* unknown type, empty encoding */ previousViewSize;
    void /* unknown type, empty encoding */ accessibilityPreviouslyEnabled;
    void /* unknown type, empty encoding */ transitionBackgroundView;
    void /* unknown type, empty encoding */ newBannerView;
    void /* unknown type, empty encoding */ newBannerAccessoryView;
    void /* unknown type, empty encoding */ bannerView;
    void /* unknown type, empty encoding */ scoreboardUpdateTimer;
    void /* unknown type, empty encoding */ scoreboardUpdateRequest;
    void /* unknown type, empty encoding */ syndicationId;
}

- (void)handleSyndicationInfoUpdatedNotification:(id)a0;
- (void)onSystemTraitCollectionDidChange:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)vui_cellWillBeDisplayed;
- (void)vui_cellDidEndDisplaying;

@end
