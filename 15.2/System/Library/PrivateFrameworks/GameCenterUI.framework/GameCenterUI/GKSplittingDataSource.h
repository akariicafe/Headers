@class NSMutableDictionary, GKBasicCollectionViewDataSource;

@interface GKSplittingDataSource : GKCollectionViewDataSource

@property (retain, nonatomic) NSMutableDictionary *sectionToSectionInfo;
@property (retain, nonatomic) GKBasicCollectionViewDataSource *underlyingDataSource;
@property (readonly, nonatomic) long long sectionCount;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)removeSection:(long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)removeAllSections;
- (id)init;
- (void)configureDataSource;
- (id)titleForSection:(long long)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1 updateNotifier:(id)a2;
- (id)indexPathsForItem:(id)a0;
- (void)removeItemAtIndexPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)collectionViewDidBecomeInactive:(id)a0;
- (void)addSectionWithTitle:(id)a0 sortDescriptors:(id)a1;
- (void)setFilterPredicate:(id)a0 forSection:(long long)a1;
- (id)sectionInfoForSection:(long long)a0;
- (id)itemsForSection:(long long)a0;
- (void)refreshAdditionalInfoForDataType:(unsigned int)a0 updateNotifier:(id)a1;
- (id)filteredItemsForRawItems:(id)a0;
- (void)setItems:(id)a0 forSection:(long long)a1;
- (void)willUpdateSectionsWithItems:(id)a0;
- (void)setSortDescriptors:(id)a0 forSection:(long long)a1;

@end
