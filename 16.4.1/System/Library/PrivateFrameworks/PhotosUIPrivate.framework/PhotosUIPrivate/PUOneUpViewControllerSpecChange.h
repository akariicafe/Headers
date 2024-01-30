@interface PUOneUpViewControllerSpecChange : PUViewControllerSpecChange

@property (nonatomic, setter=_setChromeVisibilityChanged:) BOOL chromeVisibilityChanged;
@property (nonatomic, setter=_setContentLockingChanged:) BOOL contentLockingChanged;
@property (nonatomic, setter=_setPresentedForPreviewChanged:) BOOL presentedForPreviewChanged;
@property (nonatomic, setter=_setShouldPlaceButtonsInNavigationBarChanged:) BOOL shouldPlaceButtonsInNavigationBarChanged;
@property (nonatomic, setter=_setShouldUseCompactTitleViewChanged:) BOOL shouldUseCompactTitleViewChanged;
@property (nonatomic, setter=_setMaximumToolbarHeightChanged:) BOOL maximumToolbarHeightChanged;
@property (nonatomic, setter=_setMaximumAccessoryToolbarHeightChanged:) BOOL maximumAccessoryToolbarHeightChanged;
@property (nonatomic, setter=_setShouldUseContentGuideInsetsChanged:) BOOL shouldUseContentGuideInsetsChanged;
@property (nonatomic, setter=_setShouldUseUserTransformTilesChanged:) BOOL shouldUseUserTransformTilesChanged;
@property (nonatomic, setter=_setShouldDisplayBadgesChanged:) BOOL shouldDisplayBadgesChanged;
@property (nonatomic, setter=_setShouldDisplayAssetExplorerReviewScreenBadgesChanged:) BOOL shouldDisplayAssetExplorerReviewScreenBadgesChanged;
@property (nonatomic, setter=_setShouldDisplayPlayButtonsChanged:) BOOL shouldDisplayPlayButtonsChanged;
@property (nonatomic, setter=_setShouldDisplayProgressIndicatorsChanged:) BOOL shouldDisplayProgressIndicatorsChanged;
@property (nonatomic, setter=_setShouldDisplayPeopleRowChanged:) BOOL shouldDisplayPeopleRowChanged;
@property (nonatomic, setter=_setShouldDisplayEmptyPlaceholderChanged:) BOOL shouldDisplayEmptyPlaceholderChanged;
@property (nonatomic, setter=_setShouldAutoplayOnAppearChanged:) BOOL shouldAutoplayOnAppearChanged;
@property (nonatomic, setter=_setShouldDisplayBufferingIndicatorsChanged:) BOOL shouldDisplayBufferingIndicatorsChanged;
@property (nonatomic, setter=_setCanDisplayLoadingIndicatorsChanged:) BOOL canDisplayLoadingIndicatorsChanged;
@property (nonatomic, setter=_setBackgroundColorOverrideChanged:) BOOL backgroundColorOverrideChanged;
@property (nonatomic, setter=_setProgressIndicatorSizeChanged:) BOOL progressIndicatorSizeChanged;
@property (nonatomic, setter=_setPeopleRowSizeChanged:) BOOL peopleRowSizeChanged;
@property (nonatomic, setter=_setProgressIndicatorContentInsetsChanged:) BOOL progressIndicatorContentInsetsChanged;
@property (nonatomic, setter=_setBufferingIndicatorSizeChanged:) BOOL bufferingIndicatorSizeChanged;
@property (nonatomic, setter=_setRenderIndicatorSizeChanged:) BOOL renderIndicatorSizeChanged;
@property (nonatomic, setter=_setShouldUseCompactCommentsTitleChanged:) BOOL shouldUseCompactCommentsTitleChanged;
@property (nonatomic, setter=_setTileInitialContentModeChanged:) BOOL tileInitialContentModeChanged;
@property (nonatomic, setter=_setShouldCounterrotateReviewScreenBarsChanged:) BOOL shouldCounterrotateReviewScreenBarsChanged;
@property (nonatomic, setter=_setShouldPinContentToTopChanged:) BOOL shouldPinContentToTopChanged;
@property (nonatomic, setter=_setShouldLayoutReviewScreenControlBarVerticallyChanged:) BOOL shouldLayoutReviewScreenControlBarVerticallyChanged;
@property (nonatomic, setter=_setShouldPlaceScrubberInScrubberBarChanged:) BOOL shouldPlaceScrubberInScrubberBarChanged;
@property (nonatomic, setter=_setShouldDisplaySyndicationAttribution:) BOOL shouldDisplaySyndicationAttribution;
@property (nonatomic, setter=_setHideNavigationBarWhenShowingAccessoryView:) BOOL hideNavigationBarWhenShowingAccessoryView;
@property (nonatomic, setter=_setHideScrubberWhenShowingAccessoryView:) BOOL hideScrubberWhenShowingAccessoryView;
@property (nonatomic, setter=_setPrefersSquareImageInDetails:) BOOL prefersSquareImageInDetails;
@property (nonatomic, setter=_setHideStatusBarWhenShowingAccessoryView:) BOOL hideStatusBarWhenShowingAccessoryView;
@property (nonatomic, setter=_setHideBadgesWhenShowingAccessoryView:) BOOL hideBadgesWhenShowingAccessoryView;

- (BOOL)changed;

@end
