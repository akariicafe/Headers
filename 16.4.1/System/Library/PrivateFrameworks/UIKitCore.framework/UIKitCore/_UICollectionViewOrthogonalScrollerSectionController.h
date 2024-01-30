@class _UICollectionViewOrthogonalScrollerEmbeddedScrollView, NSMapTable, UICollectionView, NSHashTable, NSIndexSet, NSUUID, NSString;

@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMapTable *scrollViewFromSectionMap;
@property (retain, nonatomic) NSMapTable *scrollViewToSectionMap;
@property (retain, nonatomic) NSHashTable *frontMostElements;
@property (retain, nonatomic) NSHashTable *elementsBelowOrthogonalScrollView;
@property (retain, nonatomic) NSIndexSet *currentOrthogonalSectionIndexes;
@property (retain, nonatomic) _UICollectionViewOrthogonalScrollerEmbeddedScrollView *scrollViewCurrentlyBeingConfigured;
@property (nonatomic) BOOL isHandlingScrollViewDelegateCallout;
@property (retain, nonatomic) NSUUID *lastUpdateIdentifier;
@property (nonatomic) BOOL shouldPreventFocusScrollPastContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_addSectionScrollViewForSection:(long long)a0;
- (void)updateParentScrollViewForCellPromiseRegion:(id)a0;
- (void)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)isElementInOrthogonalScrollingSection:(id)a0;
- (void)_placeView:(id)a0 belowOrthogonalScrollViewForSection:(long long)a1;
- (void)updateContentSizesForOrthogonalSections:(id)a0;
- (id)initWithCollectionView:(id)a0;
- (id)_managedScrollViews;
- (id)_sectionScrollViewForIndexPath:(id)a0;
- (void)addControlledSubview:(id)a0 atZIndex:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_orthogonalScrollViewFrameInsetsForSection:(long long)a0 layout:(id)a1;
- (BOOL)hasOrthogonalSections;
- (id)autoScrollAssistantForOrthogonalScrollingSectionAtIndexPath:(id)a0;
- (void)reconfigureOrthogonalSectionsForUpdate:(id)a0 identifier:(id)a1;
- (void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)a0 layoutAttributes:(id)a1;
- (void)_updateElementOrdering;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)isIndexPathInOrthogonalScrollingSection:(id)a0;
- (void)_updateEmbeddedScrollViewContentSizeForSection:(long long)a0;
- (struct CGSize { double x0; double x1; })_orthogonalScrollViewContentSizeForSection:(long long)a0 layout:(id)a1;
- (BOOL)isIndexPathInExtantOrthogonalScroller:(id)a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollingToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containingScrollView:(id)a3;
- (void)cleanupEmbeddedOrthogonalScrollViews;
- (id)_sectionScrollViewForSection:(long long)a0;
- (id)_addSectionScrollViewForIndexPath:(id)a0;
- (void)_scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)performLayout;
- (BOOL)_configureScrollView:(id)a0 forSection:(long long)a1 baseContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 frameInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 isInitialConfiguration:(BOOL)a4;

@end
