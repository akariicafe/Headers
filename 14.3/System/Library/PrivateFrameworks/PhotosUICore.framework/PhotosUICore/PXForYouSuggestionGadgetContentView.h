@class NSError, PXDisplayAssetUIView, NSArray, PXUIAssetBadgeView, NSString, PXUIMediaProvider, UIImage, PXGadgetSpec, UILabel, PXRoundedCornerOverlayView;
@protocol PXDisplaySuggestion, PXDisplayAsset;

@interface PXForYouSuggestionGadgetContentView : UIView <PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    BOOL _forceAssetContentReload;
}

@property (class, readonly, nonatomic) NSArray *lightPlaceholderFilters;
@property (class, readonly, nonatomic) NSArray *darkPlaceholderFilters;
@property (class, readonly, nonatomic) double scaledTitleBaselineDistance;
@property (class, readonly, nonatomic) double scaledTitleWithSuggestionBaselineDistance;
@property (class, readonly, nonatomic) double scaledSuggestionBaselineDistance;
@property (class, readonly, nonatomic) double scaledSubtitleBaselineDistance;

@property (retain, nonatomic) PXDisplayAssetUIView *assetView;
@property (retain, nonatomic) PXUIAssetBadgeView *badgeView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedOverlayView;
@property (copy, nonatomic) NSString *caption;
@property (nonatomic) unsigned long long badgeTypes;
@property (retain, nonatomic) id<PXDisplaySuggestion> suggestion;
@property (retain, nonatomic) id<PXDisplayAsset> keyAsset;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } assetContentsRect;
@property (readonly, nonatomic) UIImage *currentAssetImage;
@property (nonatomic) BOOL assetContentHidden;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL blursDegradedContent;
@property (readonly, nonatomic) BOOL isDisplayingFullQualityContent;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadResources;
+ (id)titleLabelFont;
+ (id)suggestionLabelFont;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 withSuggestion:(id)a1 title:(id)a2 subtitle:(id)a3;
+ (id)_gaussianBlurFilter;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateIfNeeded;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateRoundedCornerOverlayView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_assetFrameInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_calculateLayoutWithInputSize:(struct CGSize { double x0; double x1; })a0 apply:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })assetContentBoundsInCoordinateSpace:(id)a0;
- (void)_updateBadgeViews;
- (void)_updateAssetView;
- (id)previewAssetView;
- (void)_updateAssetViewAnimatedContentEnabled;
- (void)_updateAssetViewPlaceholderFilters;
- (void)_updateTitleFont;
- (void)_updateBadgeContents;
- (void)_handleChangedAsset:(id)a0;

@end
