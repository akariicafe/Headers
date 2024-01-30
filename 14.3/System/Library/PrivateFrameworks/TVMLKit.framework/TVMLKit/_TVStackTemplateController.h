@class UIView, NSString, NSArray, IKChangeSet, _TVNeedsMoreContentEvaluator, NSMutableArray, UIViewController, NSIndexPath;

@interface _TVStackTemplateController : _TVStackCommonTemplateController <_TVStackViewDelegateFlowLayout, TVTabBarAdjusting, TVShowcasing> {
    NSArray *_unfilteredViewControllers;
    IKChangeSet *_filteredChangeSet;
    NSArray *_viewControllers;
    NSMutableArray *_preloadQueue;
    NSArray *_stackSections;
    NSArray *_stackRows;
    double _contentHeight;
    double _showcaseFactor;
    NSIndexPath *_lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    UIViewController *_backdropTintViewController;
    UIView *_backdropTintView;
    BOOL _requiresShowcasing;
    BOOL _shouldInvalidateMetrics;
    struct { BOOL _preloadingScheduled; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double showcaseFactor;
@property (nonatomic) double showcaseInset;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (struct CGPoint { double x0; double x1; })collectionView:(id)a0 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)viewControllers;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)init;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (long long)numberOfCollections;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)showcaseFactorDidChange;
- (id)scrollStopForShowcaseTransition;
- (id)scrollStopForEnteringSectionAtIndex:(long long)a0 fromEdge:(long long)a1;
- (BOOL)shouldAdjustForTabBarSafeAreaInsets;
- (void)_configureBackgroundTintView;
- (void)_adjustedContentOffsetForRowIndex:(long long)a0 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a1;
- (void)_buildStackSections;
- (void)_updateBackgroundTintView;
- (void)_updateBackgroundTintViewEffects;
- (double)_maxViewWidth;
- (struct CGSize { double x0; double x1; })_maxContentSize;
- (void)_updateFirstItemRowIndexes;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 showcaseFactorDidChangeForLayout:(id)a1;
- (void)updateCollectionViewControllersAndForceReload:(BOOL)a0;
- (void)updateBackgroundAndBackdrop;
- (void)updateBackgroundAndBackdropMaskFactor;
- (void)didUpdateSupplementarySectionInfo;
- (void)_scrollToTopAnimated:(BOOL)a0;
- (void)mediaInfoDidChange;
- (void)_invalidateSectionMetricsIfNeeded;
- (double)_offsetToScrollStop:(id)a0;
- (id)_updateWithCollectionListElement:(id)a0 commits:(id /* block */ *)a1 autoHighlightIndexPath:(id *)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_scrollableBoundsInset;
- (void)_scheduleNextPreloadConditional;
- (void)_preloadNext;
- (BOOL)_didExtendContentForPeekMetrics:(struct { double x0; double x1; double x2; struct _NSRange { unsigned long long x0; unsigned long long x1; } x3; } *)a0 above:(BOOL)a1 initial:(BOOL)a2;
- (void)didUpdateSectionInfo;
- (id)tabBarObservedScrollView;

@end
