@class _UICollectionViewOrthogonalScrollerEmbeddedScrollView, NSMapTable, UICollectionView, NSHashTable, NSIndexSet, NSString;

@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMapTable *scrollViewFromSectionMap;
@property (retain, nonatomic) NSMapTable *scrollViewToSectionMap;
@property (retain, nonatomic) NSHashTable *frontMostElements;
@property (retain, nonatomic) NSIndexSet *currentOrthogonalSectionIndexes;
@property (retain, nonatomic) _UICollectionViewOrthogonalScrollerEmbeddedScrollView *scrollViewCurrentlyBeingConfigured;
@property (nonatomic) BOOL isHandlingScrollViewDelegateCallout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCollectionView:(id)a0;
- (void)_configureScrollView:(id)a0 forSection:(long long)a1 baseContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 isInitialConfiguration:(BOOL)a3;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)isIndexPathInOrthogonalScrollingSection:(id)a0;
- (id)_add_sectionScrollViewForIndexPath:(id)a0;
- (void)_updateEmbeddedScrollViewContentSizeForSection:(long long)a0;
- (void)cleanupEmbeddedOrthogonalScrollViews;
- (id)_addSectionScrollViewForSection:(long long)a0;
- (void)addElementIfNeeded:(id)a0;
- (id)_managedScrollViews;
- (void)performLayout;
- (void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)a0 layoutAttributes:(id)a1;
- (void)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)updateContentSizesForOrthogonalSections:(id)a0;
- (struct CGSize { double x0; double x1; })_contentSizeForSection:(long long)a0 layout:(id)a1;
- (void)reconfigureOrthogonalSectionsForUpdate:(id)a0;
- (id)_sectionScrollViewForIndexPath:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)_sectionScrollViewForSection:(long long)a0;
- (BOOL)isElementInOrthogonalScrollingSection:(id)a0;
- (BOOL)isIndexPathInExtantOrthogonalScroller:(id)a0;
- (BOOL)hasOrthogonalSections;
- (void)_forceElementsOnTopAsNeeded;
- (void)_scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;

@end
