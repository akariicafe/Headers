@class PXGadgetSpecManager, PXUpdater, PXGadgetDataSourceManager, NSObject, PXGadgetDataSource, UIContextMenuInteraction, PXGadgetNavigationHelper, UIViewController, NSMapTable, UIView, PXGadgetAnchorHelper, UIColor, PXContentUnavailableView, PXContentUnavailablePlaceholderManager, NSTimer, NSMutableSet, PXGadgetCollectionViewLayout, NSString;
@protocol OS_os_log, PXGadgetTransition, PXGadgetDelegate, PXGadget;

@interface PXGadgetUIViewController : UICollectionViewController <UIContextMenuInteractionDelegate, PXGadgetCollectionViewLayoutDelegate, PXGadgetAnchorHelperDelegate, PXSectionedDataSourceManagerObserver, PXContentUnavailablePlaceholderManagerDelegate, UICollectionViewDataSourcePrefetching, PXSplitViewControllerChangeObserver, PXChangeObserver, PXGadgetNavigationHelperDelegate, UICollectionViewDropDelegate, UICollectionViewDelegateFlowLayout, PXGadgetDelegate> {
    NSMutableSet *_registeredCellReuseIdentifiers;
    NSMapTable *_cellsToGadgets;
}

@property (class, readonly, nonatomic) Class gadgetSpecClass;

@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (retain, nonatomic) id<PXGadget> interactionPreviewGadget;
@property (retain, nonatomic) UIViewController *interactionPreviewViewController;
@property (retain, nonatomic) UIView *interactionPreviewView;
@property (nonatomic) BOOL isInteractionPreviewCancelled;
@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) PXGadgetDataSource *dataSource;
@property (nonatomic, getter=isCurrentlyVisible) BOOL currentlyVisible;
@property (nonatomic, getter=isLoadingGadgets) BOOL loadingGadgets;
@property (nonatomic, getter=isGadgetAnimating) BOOL gadgetAnimating;
@property (nonatomic, getter=isBatchUpdating) BOOL batchUpdating;
@property (retain, nonatomic) PXGadgetSpecManager *specManager;
@property (retain, nonatomic) id<PXGadget> selectedGadget;
@property (nonatomic) struct PXGadgetUpdateFlags { BOOL collectionNeedsUpdate; BOOL loadRemaingGadgetsAfterViewAppeared; } updateFlags;
@property (retain, nonatomic) NSTimer *gadgetSeenTimer;
@property (retain, nonatomic) NSMutableSet *seenGadgetIdentifiers;
@property (nonatomic, setter=setContentVisible:) BOOL isContentVisible;
@property (readonly, nonatomic) NSObject<OS_os_log> *gadgetViewControllerLog;
@property (retain, nonatomic) NSMutableSet *cellsWantingVisibleRectUpdates;
@property (retain, nonatomic) PXContentUnavailableView *placeholderView;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isDFITogglingSidebar;
@property (nonatomic) BOOL isRotatingVerticalLayout;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (retain, nonatomic) PXContentUnavailablePlaceholderManager *placeholderManager;
@property (readonly, nonatomic) BOOL shouldPreventPlaceholder;
@property (readonly, nonatomic) BOOL allowsBarManagement;
@property (readonly, nonatomic) PXGadgetDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXGadgetNavigationHelper *navigationHelper;
@property (readonly, nonatomic) PXGadgetAnchorHelper *anchorHelper;
@property (nonatomic) unsigned long long numberOfInitialGadgetsToLoad;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) PXGadgetCollectionViewLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } insetsForSectionHeaders;
@property (readonly, nonatomic) BOOL isTogglingSidebarNoRotating;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canHandleDropSesson:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setLayout:(id)a0;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (long long)scrollAnimationIdentifier;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)a0;
- (void)gadget:(id)a0 animateChanges:(id /* block */)a1;
- (void)presentGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)_dataSourceManagerDidChange;
- (void)splitViewController:(id)a0 willChangeSidebarVisibility:(BOOL)a1;
- (void)splitViewController:(id)a0 didChangeSidebarVisibility:(BOOL)a1;
- (void)updateIfNeeded;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)contextMenuInteractionDidEnd:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (BOOL)navigateToGadget:(id)a0 animated:(BOOL)a1;
- (id)gadgetDataSourceForNavigationHelper:(id)a0;
- (void)navigationHelperDidNotFindValidGadget:(id)a0;
- (void)contentUnavailablePlaceholderManagerDidChange:(id)a0;
- (id)sortedVisibleIndexPathsForAnchorHelper:(id)a0;
- (BOOL)anchorHelper:(id)a0 indexPathIsFullyVisible:(id)a1;
- (void)_initializeDataSource;
- (void)_initializeHelpers;
- (BOOL)isRootGadgetViewController;
- (id)gadgetAtLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)_addContextMenuInteraction;
- (void)_removeContextMenuInteraction;
- (void)_updaterNeedsUpdate;
- (id)_gadgetAtIndexPath:(id)a0;
- (id)_indexPathForGadget:(id)a0;
- (void)_configureHeader:(id)a0 withGadgetSection:(id)a1;
- (void)_handleGadgetsSeen;
- (void)_clearTimerToHandleGadgetsSeen;
- (void)_setTimerToHandleGadgetsSeen;
- (void)_notifyGadgetsThatGadgetControllerHasAppeared;
- (void)_notifyGadgetsThatGadgetControllerHasDisappeared;
- (void)_updateHeaderForGadget:(id)a0 atIndexPath:(id)a1;
- (void)_updateVisibleGadgetHeaders;
- (void)_notifyPresentedGadgetsOfVisibilityChange;
- (void)_scrollViewDidEndScrolling;
- (void)_updateGadgetVisibleRects;
- (void)_updateVisibleRectForGadget:(id)a0 inCell:(id)a1 collectionView:(id)a2;
- (void)visibleBoundsDidChange;
- (BOOL)_isUsingDeprecatedViewLoadingForGadget:(id)a0;
- (id)_gadgetForCollectionViewCell:(id)a0;
- (void)_setGadget:(id)a0 forCollectionViewCell:(id)a1;
- (void)_gadgetSpecDidChange;
- (void)viewWillAppear:(BOOL)a0;
- (void)_invalidatePlaceholder;
- (id)debugURLsForDiagnostics;
- (BOOL)gadget:(id)a0 transitionToViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)gadgetViewControllerHostingGadget:(id)a0;
- (void)rootGadgetControllerWillAppear;
- (void)rootGadgetControllerDidDisappear;
- (BOOL)navigationHelperCanCurrentlyNavigate:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)_scrollAxis;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureSectionHeader:(id)a0;
- (void)reloadContent;
- (id)initWithLayout:(id)a0 dataSourceManager:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)_updatePlaceholder;
- (id)px_endPointForTransition:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
