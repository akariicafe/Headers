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

- (id)_managedScrollViews;
- (BOOL)isIndexPathInExtantOrthogonalScroller:(id)a0;
- (void)reconfigureOrthogonalSectionsForUpdate:(id)a0 identifier:(id)a1;
- (void)updateParentScrollViewForCellPromiseRegion:(id)a0;
- (id)_sectionScrollViewForSection:(long long)a0;
- (id)_addSectionScrollViewForIndexPath:(id)a0;
- (id)initWithCollectionView:(id)a0;
- (void)addElementIfNeeded:(id)a0;
- (void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)a0 layoutAttributes:(id)a1;
- (BOOL)isElementInOrthogonalScrollingSection:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)performLayout;
- (void)_placeView:(id)a0 belowOrthogonalScrollViewForSection:(long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_orthogonalScrollViewFrameInsetsForSection:(long long)a0 layout:(id)a1;
- (void)cleanupEmbeddedOrthogonalScrollViews;
- (BOOL)isIndexPathInOrthogonalScrollingSection:(id)a0;
- (id)_addSectionScrollViewForSection:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_updateElementOrdering;
- (BOOL)hasOrthogonalSections;
- (BOOL)_configureScrollView:(id)a0 forSection:(long long)a1 baseContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 frameInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 isInitialConfiguration:(BOOL)a4;
- (struct CGSize { double x0; double x1; })_contentSizeForSection:(long long)a0 layout:(id)a1;
- (void)updateContentSizesForOrthogonalSections:(id)a0;
- (void)_scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (id)_sectionScrollViewForIndexPath:(id)a0;
- (void)_updateEmbeddedScrollViewContentSizeForSection:(long long)a0;
- (id)autoScrollAssistantForOrthogonalScrollingSectionAtIndexPath:(id)a0;

@end
