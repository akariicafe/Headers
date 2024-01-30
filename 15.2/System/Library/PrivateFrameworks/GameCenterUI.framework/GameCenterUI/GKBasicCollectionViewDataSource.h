@class NSArray, NSPredicate;

@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource <NSCopying>

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) SEL showAllAction;
@property (nonatomic) unsigned long long pageSize;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } preloadedRange;
@property (retain, nonatomic) NSPredicate *filterPredicate;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)itemAtIndexPath:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)removeItemsAtIndexes:(id)a0;
- (id)sectionTitle;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countOfItems;
- (void)configureCollectionView:(id)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (id)indexPathsForItem:(id)a0;
- (void)removeItemAtIndexPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)collectionViewDidBecomeInactive:(id)a0;
- (void)setItemsNoNotify:(id)a0;
- (void)setItems:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (id)itemsAtIndexes:(id)a0;
- (void)insertItems:(id)a0 atIndexes:(id)a1;
- (void)replaceItemsAtIndexes:(id)a0 withItems:(id)a1;
- (void)preloadImagesForItems:(id)a0 startingAtIndex:(unsigned long long)a1 loadBlock:(id /* block */)a2;

@end
