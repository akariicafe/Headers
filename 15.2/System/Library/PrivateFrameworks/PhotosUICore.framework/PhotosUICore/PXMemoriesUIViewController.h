@class PXUIScrollViewController, PXMemoriesFeedViewControllerHelper, PXUITapGestureRecognizer, PXMemoriesDataSourceManager, PXBasicUIViewTileAnimator, PXMemoriesSpec, PXMemoriesUITileSource, PXMemoriesSpecManager, PXSectionedObjectReference, PXTilingController, NSString, PXPhotosDetailsContext, PXTouchingUIGestureRecognizer, PXSectionedLayoutEngine;
@protocol PXViewControllerEventTracker;

@interface PXMemoriesUIViewController : UIViewController <UIContextMenuInteractionDelegate, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXSectionedDataSourceManagerObserver, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController> {
    struct { BOOL layoutEngine; BOOL layout; } _updateFlags;
}

@property (readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper;
@property (readonly, nonatomic) PXMemoriesSpecManager *_specManager;
@property (readonly, nonatomic) PXMemoriesUITileSource *_tileSource;
@property (readonly, nonatomic) PXSectionedLayoutEngine *_layoutEngine;
@property (readonly, nonatomic) id<PXViewControllerEventTracker> eventTracker;
@property (retain, nonatomic, setter=_setAnchorMemoryReference:) PXSectionedObjectReference *anchorMemoryReference;
@property (nonatomic, setter=_setAnchorMemoryOrigin:) struct CGPoint { double x; double y; } anchorMemoryOrigin;
@property (retain, nonatomic, setter=_setHighlightedMemoryReference:) PXSectionedObjectReference *_highlightedMemoryReference;
@property (retain, nonatomic, setter=_setActionPresentationMemoryReference:) PXSectionedObjectReference *_actionPresentationMemoryReference;
@property (retain, nonatomic, setter=_setActivatedMemoryReference:) PXSectionedObjectReference *_activatedMemoryReference;
@property (retain, nonatomic, setter=_setSelectedItemDetailsContext:) PXPhotosDetailsContext *_selectedItemDetailsContext;
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator;
@property (retain, nonatomic, setter=_setSpec:) PXMemoriesSpec *_spec;
@property (readonly, nonatomic) unsigned long long _memoriesStyle;
@property (readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer;
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchRecognizer;
@property (nonatomic, setter=_setPerformNextTransitionWithoutAnimation:) BOOL _performNextTransitionWithoutAnimation;
@property (nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) PXTilingController *tilingController;
@property (readonly, nonatomic) PXUIScrollViewController *scrollViewController;
@property (nonatomic, getter=isEmbedded) BOOL embedded;
@property (readonly, nonatomic) PXMemoriesDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic) long long userInterfaceFeature;

- (void)prepareForPopoverPresentation:(id)a0;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)viewDidLoad;
- (void)_invalidateLayout;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)viewWillLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateLayoutIfNeeded;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)viewDidDisappear:(BOOL)a0;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)a0;
- (id)regionOfInterestForTransition:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)prepareForInteractiveTransition:(id)a0;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(BOOL)a0;
- (id)px_endPointForTransition:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithDataSourceManager:(id)a0;
- (void)_configureLayout:(id)a0;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)a0;
- (id)createNewLayoutGenerator;
- (void)tilingControllerZoomAnimationCoordinator:(id)a0 enumerateTilesToAnimateInLayerWithType:(long long)a1 layout:(id)a2 zoomAnimationContext:(id)a3 usingBlock:(id /* block */)a4;
- (void)tilingController:(id)a0 prepareForChange:(id)a1;
- (id)tilingController:(id)a0 tileIdentifierConverterForChange:(id)a1;
- (id)tilingController:(id)a0 transitionAnimationCoordinatorForChange:(id)a1;
- (struct CGPoint { double x0; double x1; })tilingController:(id)a0 initialVisibleOriginForLayout:(id)a1;
- (struct CGPoint { double x0; double x1; })tilingController:(id)a0 targetVisibleOriginForLayout:(id)a1 proposedVisibleOrigin:(struct CGPoint { double x0; double x1; })a2;
- (id)memoriesTileSource:(id)a0 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)initWithDataSourceManager:(id)a0 style:(unsigned long long)a1;
- (void)invalidateLayoutEngine;
- (void)_updateLayoutEngineIfNeeded;
- (id)_createNewLayout;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathForMemoryAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathForMemoryInScrollViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleScrollViewTap:(id)a0;
- (void)_presentMemoryAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)presentMemoryWithReference:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleTouch:(id)a0;
- (void)_reconfigureTargetLayout;
- (id)_memoryTileViewForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_previewActionMenusForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)_photosDetailsContextForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)_photosDetailsContextForMemoryReference:(id)a0;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_memoryIndexPathForViewController:(id)a0;
- (void)_updateScrollViewControllerContentInset;
- (void)_saveAnchor;
- (void)datasourceManagerDidChange;
- (id)_sourceViewForMemoryActionsController;

@end
