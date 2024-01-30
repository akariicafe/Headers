@class NSArray;

@interface GKCollectionMultiDataSource : GKCollectionDataSource

@property (retain, nonatomic) NSArray *dataSources;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)dealloc;
- (id)dataSourceForIndexPath:(id)a0;
- (long long)itemCountInSection:(long long)a0;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)a0;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)itemForIndexPath:(id)a0;
- (void)collectionView:(id)a0 didFocusItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnfocusItemAtIndexPath:(id)a1;
- (long long)itemCount;

@end
