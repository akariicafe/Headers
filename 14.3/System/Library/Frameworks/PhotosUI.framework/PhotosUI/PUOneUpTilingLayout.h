@class NSMutableDictionary, PUParallaxComputer, NSIndexPath, UITraitCollection;
@protocol PUOneUpTilingLayoutDelegate;

@interface PUOneUpTilingLayout : PUSectionedTilingLayout {
    struct CGSize { double width; double height; } _itemSize;
    NSIndexPath *_inFocusIndexPath;
    NSIndexPath *_neighborIndexPath;
    struct { BOOL respondsToAspectRatioForItemAtIndexPath; BOOL respondsToShouldScaleToFitSafeInsetsForItemAtIndexPath; BOOL respondsToBadgeSizeForItemAtIndexPath; BOOL respondsToActionBadgeSizeForItemAtIndexPath; BOOL respondsToAssetExplorerReviewScreenBadgeSizeForItemAtIndexPath; BOOL respondsToShouldShowPlayButtonForItemAtIndexPath; BOOL respondsToShouldShowProgressIndicatorForItemAtIndexPath; BOOL respondsToShouldMoveProgressIndicatorForItemAtIndexPath; BOOL respondsToShouldShowBufferingIndicatorForItemAtIndexPath; BOOL respondsToLoadingIndicatorSizeForItemAtIndexPath; BOOL respondsToModelTileTransformForItemAtIndexPath; BOOL respondsToContentOffsetForItemAtIndexPath; BOOL respondsToShouldShowAccessoryForItemAtIndexPath; BOOL respondsToMinimumVisibleContentHeightForItemAtIndexPath; BOOL respondsToMinimumVisibleAccessoryHeightForItemAtIndexPath; BOOL respondsToShouldShowVideoPlaceholderForItemAtIndexPath; BOOL respondsToDisableInitialZoomToFillForItemAtIndexPath; BOOL respondsToShouldShowReviewScreenScrubberBar; BOOL respondsToAlphaForReviewScreenBarsInLayout; } _delegateFlags;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
}

@property (weak, nonatomic) id<PUOneUpTilingLayoutDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } interpageSpacing;
@property (readonly, nonatomic) NSIndexPath *indexPathOfCurrentItem;
@property (readonly, nonatomic) double transitionProgress;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentGuideInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentSafeInsets;
@property (nonatomic) BOOL useBackgroundTile;
@property (nonatomic) BOOL useBadgeTiles;
@property (nonatomic) BOOL useAssetExplorerReviewScreenBadgeTiles;
@property (nonatomic) BOOL useSelectionIndicatorTiles;
@property (nonatomic) BOOL useImportStatusIndicatorTiles;
@property (nonatomic) BOOL useReviewScreenBars;
@property (nonatomic) long long windowInterfaceOrientation;
@property (nonatomic) BOOL useVerticalReviewScreenControlBarLayout;
@property (nonatomic) struct CGSize { double width; double height; } playButtonSize;
@property (nonatomic) struct CGSize { double width; double height; } progressIndicatorSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } progressIndicatorContentInsets;
@property (nonatomic) struct CGSize { double width; double height; } renderIndicatorSize;
@property (nonatomic) struct CGSize { double width; double height; } assetExplorerReviewScreenProgressIndicatorSize;
@property (nonatomic) struct CGSize { double width; double height; } bufferingIndicatorSize;
@property (nonatomic) BOOL canDisplayLoadingIndicators;
@property (nonatomic) BOOL useUserTransformTiles;
@property (nonatomic) long long tileInitialContentMode;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct CGSize { double width; double height; } displaySizeForInsetMatching;
@property (nonatomic) BOOL shouldPinContentToTop;
@property (retain, nonatomic) PUParallaxComputer *parallaxComputer;
@property (nonatomic) BOOL shouldHideMainContent;

+ (void)initialize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })untransformedRectForItemWithAspectRatio:(double)a0 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 safeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (id)centerTileKinds;

- (void)prepareLayout;
- (void)invalidateModelTileTransformForItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_getLayoutRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 transform:(out struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 parallaxOffset:(out struct CGPoint { double x0; double x1; } *)a2 forContentOfItemAtIndexPath:(id)a3 options:(unsigned long long)a4;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateAccessoryForItemAtIndexPath:(id)a0 withOptions:(unsigned long long)a1;
- (double)_normalizedTransitionProgressFrom:(id)a0 withAbscissa:(double)a1 outNeighbor:(out id *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollingToItemAtIndexPath:(id)a0 scrollPosition:(long long)a1;
- (BOOL)_isVideoPlacholderVisibleForItemAtIndexPath:(id)a0;
- (id)preferredScrollInfo;
- (double)_minimumBottomContentInsetsForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForSection:(long long)a0 numberOfItems:(long long)a1;
- (void)invalidateLoadingIndicatorForItemAtIndexPath:(id)a0;
- (void)invalidateProgressIndicatorForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })estimatedSectionSize;
- (struct CGPoint { double x0; double x1; })_contentOffsetForItemAtIndexPath:(id)a0;
- (void)invalidateBadgeSizeForItemAtIndexPath:(id)a0;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 section:(long long)a1 toSet:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTileWithSize:(struct CGSize { double x0; double x1; })a0 centeredOnItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })_itemSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_untransformedRectForItemAtIndexPath:(id)a0;
- (void)invalidateVideoPlaceholderForItemAtIndexPath:(id)a0;
- (BOOL)_accessoryViewVisibilityForItemAtIndexPath:(id)a0;
- (id)_indexPathOfItemClosestToAbscissa:(double)a0;
- (id)_displayTileTransformForItemAtIndexPath:(id)a0 options:(unsigned long long)a1;
- (id)_createLayoutInfoForTileWithIndexPath:(id)a0 kind:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForItemAtIndexPath:(id)a0 transitionProgress:(double)a1;
- (void)invalidateContentOffsetForItemAtIndexPath:(id)a0 withOptions:(unsigned long long)a1;
- (id)_displayTileTransformForItemAtIndexPath:(id)a0 pageSize:(struct CGSize { double x0; double x1; })a1 secondaryDisplayTransform:(id)a2 options:(unsigned long long)a3;
- (id)layoutInfoForTileWithIndexPath:(id)a0 kind:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageRectForItemAtIndexPath:(id)a0;
- (void)_invalidateContentRelatedTilesWithIndexPath:(id)a0 inContext:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_untransformedRectForItemAtIndexPath:(id)a0 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
