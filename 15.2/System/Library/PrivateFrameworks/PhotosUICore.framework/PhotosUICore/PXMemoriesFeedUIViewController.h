@class UIBarButtonItem, PXMemoriesFeedViewControllerHelper, _UIContentUnavailableView, PXUITapGestureRecognizer, PXUIScrollViewController, PXBasicUIViewTileAnimator, PXMemoriesOnboardingUIViewController, PXMemoriesFeedDataSourceManager, PXMemoriesUITileSource, UIScrollView, NSString, PXSectionedDataSource, PXPhotosDetailsContext, PXPhotoAnalysisStatusController, PXTouchingUIGestureRecognizer;

@interface PXMemoriesFeedUIViewController : UIViewController <UIContextMenuInteractionDelegate, PXReusableObjectPoolDelegate, PXChangeObserver, UIGestureRecognizerDelegate, PXAssetCollectionActionPerformerDelegate, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXSectionedDataSourceManagerObserver, UIPopoverPresentationControllerDelegate, PXMemoriesFeedViewControllerHelperDelegate, PXMemoriesOnboardingViewControllerDelegate, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController, PXSettingsKeyObserver> {
    BOOL _isInitialized;
    struct { BOOL navigationItem; BOOL contentUnavailablePlaceholder; } _needsUpdateFlags;
    BOOL _hasAppeared;
}

@property (readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper;
@property (readonly, nonatomic) unsigned long long _memoriesStyle;
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator;
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController;
@property (readonly, nonatomic) PXPhotoAnalysisStatusController *_graphStatusController;
@property (retain, nonatomic, setter=_setOnboardingViewController:) PXMemoriesOnboardingUIViewController *_onboardingViewController;
@property (retain, nonatomic, setter=_setContentUnavailableView:) _UIContentUnavailableView *_contentUnavailableView;
@property (retain, nonatomic, setter=_setSelectedItemDetailsContext:) PXPhotosDetailsContext *_selectedItemDetailsContext;
@property (readonly, nonatomic) PXMemoriesUITileSource *_tileSource;
@property (readonly, nonatomic) UIBarButtonItem *_refreshBarButtonItem;
@property (readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer;
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchRecognizer;
@property (readonly, nonatomic) PXMemoriesFeedDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (retain, nonatomic, setter=setScrollTargetMemoryUUID:) NSString *scrollTargetMemoryUUID;
@property (readonly, nonatomic) PXSectionedDataSource *ppt_memoriesDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic) long long userInterfaceFeature;

+ (void)_setCurrentFeedViewController:(id)a0;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)_handleSpecChange;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)viewWillLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)viewDidDisappear:(BOOL)a0;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (id)_suppressionContexts;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)a0;
- (id)regionOfInterestForTransition:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)prepareForInteractiveTransition:(id)a0;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)px_endPointForTransition:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)a0;
- (void)scrollViewControllerWillLayoutSubviews:(id)a0;
- (id)showDetailsForMemoryWithLocalIdentifier:(id)a0;
- (void)tilingControllerZoomAnimationCoordinator:(id)a0 enumerateTilesToAnimateInLayerWithType:(long long)a1 layout:(id)a2 zoomAnimationContext:(id)a3 usingBlock:(id /* block */)a4;
- (id)memoriesTileSource:(id)a0 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (void)_handleScrollViewTap:(id)a0;
- (void)_handleTouch:(id)a0;
- (id)_memoryTileViewForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_memoryIndexPathForViewController:(id)a0;
- (void)_updateScrollViewControllerContentInset;
- (id)_sourceViewForMemoryActionsController;
- (void)memoriesOnboardingViewControllerDidTapContinueButton:(id)a0;
- (BOOL)memoriesFeedViewControllerHelperFeedIsVisible:(id)a0;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)a0;
- (id)initWithMemoriesStyle:(unsigned long long)a0;
- (void)_preloadFontSpecs;
- (void)_updateBarAppearance;
- (id)_showMemoryDetailsForContext:(id)a0 animated:(BOOL)a1;
- (void)revealMostRecentMemoryAnimated:(BOOL)a0;
- (void)_navigateToMemoryAtSectionObjectReference:(id)a0;
- (void)_navigateToMemoryAtSectionObjectReference:(id)a0 willPresentHandler:(id /* block */)a1;
- (id)_photosDetailsContextForMemoryObjectReference:(id)a0;
- (void)_refreshBarButtonItemAction:(id)a0;
- (void)_startRefreshWithCompletion:(id /* block */)a0;
- (void)_invalidateNavigationItem;
- (void)_updateNavigationItemIfNeeded;
- (void)_invalidateContentUnavailablePlaceholder;
- (void)_updateContentUnavailablePlaceholderIfNeeded;
- (id)_previewActionMenusForInteraction:(id)a0;
- (void)playMiroMovieWithMemoryUUID:(id)a0;
- (void)ppt_navigateToLatestMemoryAnimated:(BOOL)a0;
- (void)ppt_navigateToLatestInteractiveMemoryWithWillPresentHandler:(id /* block */)a0;
- (void)ppt_revealMemoryWithReference:(id)a0 animated:(BOOL)a1;
- (void)ppt_navigateToMemoryWithReference:(id)a0 animated:(BOOL)a1;

@end
