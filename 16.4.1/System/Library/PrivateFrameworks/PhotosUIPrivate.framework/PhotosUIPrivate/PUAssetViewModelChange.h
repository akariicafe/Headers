@class PUBrowsingIrisPlayerChange, PUBrowsingAnimatedImagePlayerChange, PUBrowsingVideoPlayerChange;

@interface PUAssetViewModelChange : PUViewModelChange

@property (nonatomic, setter=_setAssetChanged:) BOOL assetChanged;
@property (nonatomic, setter=_setAssetContentChanged:) BOOL assetContentChanged;
@property (nonatomic, setter=_setModelTileTransformChanged:) BOOL modelTileTransformChanged;
@property (nonatomic, setter=_setUserTransformingTileDidChange:) BOOL isUserTransformingTileDidChange;
@property (nonatomic, setter=_setFocusValueChanged:) BOOL focusValueChanged;
@property (nonatomic, setter=_setLoadingStatusChanged:) BOOL loadingStatusChanged;
@property (nonatomic, setter=_setSaveProgressChanged:) BOOL saveProgressChanged;
@property (nonatomic, setter=_setIsUpdatingDisplayedContentChanged:) BOOL isUpdatingDisplayedContentChanged;
@property (nonatomic, setter=_setIsFavoriteChanged:) BOOL isFavoriteChanged;
@property (nonatomic, setter=_setIsAssetSyndicationStateChanged:) BOOL isAssetSyndicationStateChanged;
@property (nonatomic, setter=_setBadgeInfoChanged:) BOOL badgeInfoChanged;
@property (nonatomic, setter=_setAccessoryViewVisibilityChanged:) BOOL accessoryViewVisibilityChanged;
@property (nonatomic, setter=_setIsAccessoryViewDoneAnimatingInChangedChanged:) BOOL isAccessoryViewDoneAnimatingInChanged;
@property (nonatomic, setter=_setContentOffsetChanged:) BOOL contentOffsetChanged;
@property (retain, nonatomic, setter=_setVideoPlayerChange:) PUBrowsingVideoPlayerChange *videoPlayerChange;
@property (nonatomic, setter=_setForceBadgesVisibleChanged:) BOOL forceBadgesVisibleChanged;
@property (retain, nonatomic, setter=_setIrisPlayerChange:) PUBrowsingIrisPlayerChange *irisPlayerChange;
@property (nonatomic, setter=_setIsInEditModeChanged:) BOOL isInEditModeChanged;
@property (nonatomic, setter=_setFlippingFullSizeRenderStateChanged:) BOOL flippingFullSizeRenderStateChanged;
@property (nonatomic, setter=_setToggleCTMChanged:) BOOL toggleCTMChanged;
@property (nonatomic) BOOL revealsGainMapImageChanged;
@property (retain, nonatomic, setter=_setAnimatedImageChange:) PUBrowsingAnimatedImagePlayerChange *animatedImageChange;
@property (nonatomic, setter=_setSaveStateChanged:) BOOL saveStateChanged;
@property (nonatomic, setter=_setImportStateChanged:) BOOL importStateChanged;
@property (nonatomic, setter=_setIsPresentedForPreviewChanged:) BOOL isPresentedForPreviewChanged;
@property (nonatomic, setter=_setVisualImageAnalysisChanged:) BOOL visualImageAnalysisChanged;
@property (nonatomic, setter=_setIsBeingDismissedChanged:) BOOL isBeingDismissedChanged;
@property (nonatomic, setter=_setIsIrisPlayingChanged:) BOOL isIrisPlayingChanged;
@property (nonatomic, setter=_setVisualSearchCornerViewChanged:) BOOL visualSearchCornerViewChanged;
@property (nonatomic, setter=_setVisualIntelligenceAnalysisButtonChanged:) BOOL visualIntelligenceAnalysisButtonChanged;
@property (nonatomic, setter=_setIsVisualSearchCardShowingChanged:) BOOL isVisualSearchCardShowingChanged;
@property (nonatomic, setter=_setVisualSearchLookupTopItemChanged:) BOOL visualSearchLookupTopItemChanged;
@property (nonatomic, setter=_setNeedsVisualImageAnalysisChanged:) BOOL needsVisualImageAnalysisChanged;
@property (nonatomic, setter=_setShouldHideVisualIntelligenceOverlayChanged:) BOOL shouldHideVisualIntelligenceOverlayChanged;
@property (nonatomic, setter=_setBestImageChanged:) BOOL bestImageChanged;
@property (nonatomic) BOOL videoPlayerDidChange;

- (BOOL)hasChanges;
- (void).cxx_destruct;

@end
