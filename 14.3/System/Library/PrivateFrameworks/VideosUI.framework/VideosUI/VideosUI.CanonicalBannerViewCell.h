@interface VideosUI.CanonicalBannerViewCell : UICollectionViewCell <VUIRentalExpirationLabelDelegate> {
    void /* unknown type, empty encoding */ bannerLayout;
    void /* unknown type, empty encoding */ titleImageView;
    void /* unknown type, empty encoding */ contentTitleView;
    void /* unknown type, empty encoding */ contentSubtitleView;
    void /* unknown type, empty encoding */ episodeInfoTextView;
    void /* unknown type, empty encoding */ promoTextView;
    void /* unknown type, empty encoding */ coverArtImageView;
    void /* unknown type, empty encoding */ buttonViews;
    void /* unknown type, empty encoding */ availabilityTextView;
    void /* unknown type, empty encoding */ availabilityImageView;
    void /* unknown type, empty encoding */ disclaimerTextView;
    void /* unknown type, empty encoding */ descriptionTextView;
    void /* unknown type, empty encoding */ rolesSummaryView;
    void /* unknown type, empty encoding */ tagsView;
    void /* unknown type, empty encoding */ infoTagsView;
    void /* unknown type, empty encoding */ uberBackgroundView;
    void /* unknown type, empty encoding */ backgroundImageViewModel;
    void /* unknown type, empty encoding */ previousViewSize;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ gradientLayerView;
    void /* unknown type, empty encoding */ transitionBackgroundView;
    void /* unknown type, empty encoding */ bannerButtonHeight;
    void /* unknown type, empty encoding */ bannerButtonSpacing;
    void /* unknown type, empty encoding */ descComputationLabel;
    void /* unknown type, empty encoding */ tagsComputationLabel;
    void /* unknown type, empty encoding */ contentOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
}

- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (void)onSystemTraitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
