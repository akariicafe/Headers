@class UIColor, PUOneUpViewControllerSpecChange;

@interface PUOneUpViewControllerSpec : PUViewControllerSpec

@property (readonly, nonatomic) PUOneUpViewControllerSpecChange *currentChange;
@property (nonatomic, setter=_setShouldPlaceButtonsInNavigationBar:) BOOL shouldPlaceButtonsInNavigationBar;
@property (nonatomic, setter=_setShouldUseCompactTitleView:) BOOL shouldUseCompactTitleView;
@property (nonatomic, setter=_setMaximumToolbarHeight:) double maximumToolbarHeight;
@property (nonatomic, setter=_setMaximumAccessoryToolbarHeight:) double maximumAccessoryToolbarHeight;
@property (nonatomic, setter=_setShouldUseContentGuideInsets:) BOOL shouldUseContentGuideInsets;
@property (nonatomic, setter=_setShouldUseUserTransformTiles:) BOOL shouldUseUserTransformTiles;
@property (nonatomic, setter=_setShouldAutoplayOnAppear:) BOOL shouldAutoplayOnAppear;
@property (nonatomic, setter=_setShouldDisplayBadges:) BOOL shouldDisplayBadges;
@property (nonatomic, setter=_setShouldDisplayAssetExplorerReviewScreenBadges:) BOOL shouldDisplayAssetExplorerReviewScreenBadges;
@property (nonatomic, setter=_setShouldDisplayPlayButtons:) BOOL shouldDisplayPlayButtons;
@property (nonatomic, setter=_setShouldDisplayProgressIndicators:) BOOL shouldDisplayProgressIndicators;
@property (nonatomic, setter=_setShouldDisplayBufferingIndicators:) BOOL shouldDisplayBufferingIndicators;
@property (nonatomic, setter=_setCanDisplayLoadingIndicators:) BOOL canDisplayLoadingIndicators;
@property (nonatomic, setter=_setShouldDisplayEmptyPlaceholder:) BOOL shouldDisplayEmptyPlaceholder;
@property (retain, nonatomic, setter=_setBackgroundColorOverride:) UIColor *backgroundColorOverride;
@property (nonatomic, setter=_setProgressIndicatorSize:) struct CGSize { double width; double height; } progressIndicatorSize;
@property (nonatomic, setter=_setProgressIndicatorContentInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } progressIndicatorContentInsets;
@property (nonatomic, setter=_setBufferingIndicatorSize:) struct CGSize { double width; double height; } bufferingIndicatorSize;
@property (nonatomic, setter=_setShouldUseCompactCommentsTitle:) BOOL shouldUseCompactCommentsTitle;
@property (nonatomic, setter=_setTileInitialContentMode:) long long tileInitialContentMode;
@property (nonatomic, setter=_setShouldCounterrotateReviewScreenBars:) BOOL shouldCounterrotateReviewScreenBars;
@property (nonatomic, setter=_setShouldPinContentToTop:) BOOL shouldPinContentToTop;
@property (nonatomic, setter=_setShouldLayoutReviewScreenControlBarVertically:) BOOL shouldLayoutReviewScreenControlBarVertically;
@property (nonatomic, setter=_setShouldPlaceScrubberInScrubberBar:) BOOL shouldPlaceScrubberInScrubberBar;
@property (nonatomic, setter=setChromeVisible:) BOOL isChromeVisible;
@property (nonatomic, setter=setPresentedForPreview:) BOOL isPresentedForPreview;
@property (nonatomic, setter=setShowingPlayPauseButtonInBars:) BOOL isShowingPlayPauseButtonInBars;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL allowAccessoryVisibility;
@property (readonly, nonatomic) BOOL allowSuggestions;
@property (readonly, nonatomic) BOOL allowDoneButton;
@property (readonly, nonatomic) BOOL allowTapOnTitle;
@property (readonly, nonatomic) BOOL shouldShowTitleView;
@property (readonly, nonatomic) BOOL shouldDisplaySelectionIndicators;
@property (readonly, nonatomic) BOOL shouldDisplayAssetExplorerReviewScreenProgressIndicators;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } assetExplorerReviewScreenProgressIndicatorSize;
@property (readonly, nonatomic) BOOL shouldDisplayReviewScreenBars;
@property (readonly, nonatomic) BOOL shouldDisableNavigationBarsVisibility;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } playButtonSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } renderIndicatorSize;

- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_setRenderIndicatorSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateIfNeeded;
- (BOOL)_shouldForceBlackBackground;
- (BOOL)_isAssetExplorerReviewScreen;
- (id)newSpecChange;

@end
