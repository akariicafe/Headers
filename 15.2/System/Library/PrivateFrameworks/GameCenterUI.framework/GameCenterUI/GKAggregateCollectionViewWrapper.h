@class GKAggregateMapping, UICollectionView;

@interface GKAggregateCollectionViewWrapper : NSObject

@property (retain, nonatomic) UICollectionView *wrappedView;
@property (retain, nonatomic) GKAggregateMapping *mapping;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)wrapperForView:(id)a0 mapping:(id)a1;

- (id)valueForUndefinedKey:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)dequeueReusableSupplementaryViewOfKind:(id)a0 withReuseIdentifier:(id)a1 forIndexPath:(id)a2;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)a0 forIndexPath:(id)a1;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)selectItemAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)deselectItemAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (id)cellForItemAtIndexPath:(id)a0;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)indexPathForCell:(id)a0;
- (void)reloadSections:(id)a0;
- (void)deleteSections:(id)a0;
- (void)insertSections:(id)a0;
- (id)indexPathsForVisibleItems;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)indexPathsForSelectedItems;
- (void)_gkRegisterClass:(Class)a0 forSupplementaryViewOfKind:(id)a1;
- (void)_gkRegisterCellClass:(Class)a0;
- (id)_gkDequeueSupplementaryViewForClass:(Class)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (id)_gkDequeueCellForClass:(Class)a0 forIndexPath:(id)a1;
- (void)_gkPerformWithoutViewReuse:(id /* block */)a0;
- (id)initWithView:(id)a0 mapping:(id)a1;

@end
