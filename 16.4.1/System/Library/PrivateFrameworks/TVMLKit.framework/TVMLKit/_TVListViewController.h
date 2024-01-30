@class NSIndexPath, NSString, IKViewElement, NSDictionary, NSMutableArray, UIViewController;
@protocol _TVListViewControllerDelegate;

@interface _TVListViewController : _TVMLCollectionViewController <_TVListViewCellDelegate, TVAppTemplateImpressionable, UICollectionViewDelegateFlowLayout> {
    BOOL _configureForStackTemplate;
    BOOL _relatedContentElementValid;
    IKViewElement *_relatedContentElement;
    IKViewElement *_previewElement;
    BOOL _previewUpdated;
    UIViewController *_previewController;
    double _cachedCellWidth;
    NSDictionary *_cachedListItemLockupHeightsBySection;
    NSMutableArray *_cachedListChildViewControllers;
    NSIndexPath *_pendingPreviewIndexPath;
    NSIndexPath *_lastPreviewedIndexPath;
    NSIndexPath *_secondCellIndexPath;
    BOOL _secondIndexPathFocused;
}

@property (weak, nonatomic) id<_TVListViewControllerDelegate> delegate;
@property (nonatomic, getter=isAlwaysSoftFocusEnabled) BOOL alwaysSoftFocusEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_shadowCollectionElementForCollectionElement:(id)a0;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldHandleLongPressForItemAtIndexPath:(id)a1;
- (BOOL)listCell:(id)a0 shouldAppearSelectedForPreviouslyFocusedView:(id)a1;
- (id)_cachedViewControllerForElement:(id)a0;
- (void)_delayedUpdatePreview;
- (struct CGSize { double x0; double x1; })_expectedCellSizeForElement:(id)a0 inSectionIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })_expectedHeaderCellSizeForElement:(id)a0 section:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_marginForHeaderCellForElement:(id)a0 section:(long long)a1;
- (id)_previewControllerWithElement:(id)a0 previewElement:(id *)a1;
- (id)_relatedContentElementForIndexPath:(id)a0;
- (BOOL)_relatedElementIsGridAtIndexPath:(id)a0;
- (void)_updateCellMetrics;
- (void)_updatedPreviewWithItemAtIndexPath:(id)a0;
- (id)_viewControllerForElement:(id)a0;
- (Class)cellClassForElement:(id)a0;
- (BOOL)contentFlowsVertically;
- (void)didUpdateCollectionViewByNeedingReload:(BOOL)a0 focusUpdate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })expectedCellSizeForElement:(id)a0 atIndexPath:(id)a1;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (id)makeCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)templateControllerDidUpdateFocusFromView:(id)a0;
- (void)updateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)updateSupplementaryViewsForSectionAtOldIndex:(long long)a0 oldElement:(id)a1 withNewIndex:(long long)a2 newElement:(id)a3 requiresReload:(BOOL *)a4 requiresRelayout:(BOOL *)a5;
- (void)updateViewLayoutAnimated:(BOOL)a0 relayout:(BOOL)a1;
- (void)updateVisibleCell:(id)a0 atIndexPath:(id)a1 withElement:(id)a2;
- (void)updateWithViewElement:(id)a0 cellMetrics:(struct TVCellMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; })a1;

@end
