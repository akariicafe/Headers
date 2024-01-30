@class GKAggregateMapping, UICollectionView;

@interface GKAggregateCollectionViewWrapper : NSObject

@property (retain, nonatomic) UICollectionView *wrappedView;
@property (retain, nonatomic) GKAggregateMapping *mapping;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)wrapperForView:(id)a0 mapping:(id)a1;

- (void)selectItemAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)cellForItemAtIndexPath:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (void)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)deselectItemAtIndexPath:(id)a0 animated:(BOOL)a1;
- (id)valueForUndefinedKey:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)reloadSections:(id)a0;
- (void)deleteSections:(id)a0;
- (void)insertSections:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (id)dequeueReusableCellWithReuseIdentifier:(id)a0 forIndexPath:(id)a1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)a0 withReuseIdentifier:(id)a1 forIndexPath:(id)a2;
- (id)indexPathForCell:(id)a0;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)indexPathsForSelectedItems;
- (id)indexPathsForVisibleItems;
- (void)insertItemsAtIndexPaths:(id)a0;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (id)_gkDequeueCellForClass:(Class)a0 forIndexPath:(id)a1;
- (id)_gkDequeueSupplementaryViewForClass:(Class)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (void)_gkPerformWithoutViewReuse:(id /* block */)a0;
- (void)_gkRegisterCellClass:(Class)a0;
- (void)_gkRegisterClass:(Class)a0 forSupplementaryViewOfKind:(id)a1;
- (id)initWithView:(id)a0 mapping:(id)a1;

@end
