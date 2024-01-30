@class VUIImageView, NSArray, VUILabel, VUIMediaTagsView, UIView, _TtC8VideosUI16RolesSummaryView;

@interface VideosUI.CanonicalBannerViewCell : VUIBaseCollectionViewCell <VUIRentalExpirationLabelDelegate> {
    void /* unknown type, empty encoding */ bannerViewModel;
    void /* unknown type, empty encoding */ bannerLayout;
    void /* unknown type, empty encoding */ collectionViewFrameSize;
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
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ gradientLayerView;
    void /* unknown type, empty encoding */ descComputationLabel;
    void /* unknown type, empty encoding */ tagsComputationLabel;
    void /* unknown type, empty encoding */ syndicationId;
    void /* unknown type, empty encoding */ attributionViewHeight;
    void /* unknown type, empty encoding */ showAttributionViewBelowBanner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pillSeparatorView;
    void /* unknown type, empty encoding */ attributionView;
    void /* unknown type, empty encoding */ transitionBackgroundView;
    void /* unknown type, empty encoding */ isUberLayout;
    void /* unknown type, empty encoding */ isPhoneSizeClass;
    void /* unknown type, empty encoding */ isBackgroundTransitioning;
    void /* unknown type, empty encoding */ isImageLoadedForBackgroundTransitioning;
    void /* unknown type, empty encoding */ bannerButtonSpacing;
    void /* unknown type, empty encoding */ disclaimerTextBottomSpacing;
    void /* unknown type, empty encoding */ contentOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) VUIImageView *accessibilityTitleImageView;
@property (nonatomic, readonly) VUILabel *accessibilityContentTitleView;
@property (nonatomic, readonly) VUILabel *accessibilityContentSubtitleView;
@property (nonatomic, readonly) VUILabel *accessibilityEpisodeInfoTextView;
@property (nonatomic, readonly) VUILabel *accessibilityPromoTextView;
@property (nonatomic, readonly) NSArray *accessibilityButtonViews;
@property (nonatomic, readonly) VUILabel *accessibilityAvailabilityTextView;
@property (nonatomic, readonly) VUIImageView *accessibilityAvailabilityImageView;
@property (nonatomic, readonly) VUILabel *accessibilityDisclaimerTextView;
@property (nonatomic, readonly) UIView *accessibilityDescriptionTextView;
@property (nonatomic, readonly) _TtC8VideosUI16RolesSummaryView *accessibilityRolesSummaryView;
@property (nonatomic, readonly) VUIMediaTagsView *accessibilityTagsView;

- (void)handleGroupWatchActivityStateUpdatedNotification:(id)a0;
- (void)handleSyndicationInfoUpdatedNotification:(id)a0;
- (void)onSystemTraitCollectionDidChange:(id)a0;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)vui_cellWillBeDisplayed;

@end
