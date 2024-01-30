@class NSMutableDictionary, NSMutableArray, NSMapTable;

@interface GKCollectionViewAggregateDataSource : GKCollectionViewDataSource

@property (retain, nonatomic) NSMutableArray *mappings;
@property (retain, nonatomic) NSMapTable *dataSourceToMappings;
@property (retain, nonatomic) NSMutableDictionary *globalSectionToMappings;
@property (nonatomic) unsigned long long sectionCount;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)itemAtIndexPath:(id)a0;
- (void)removeDataSource:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)configureCollectionView:(id)a0;
- (void)dataSource:(id)a0 didRefreshSections:(id)a1;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (id)dataSourceForSection:(unsigned long long)a0;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1 updateNotifier:(id)a2;
- (id)indexPathsForItem:(id)a0;
- (BOOL)item:(id)a0 matchesSearchTerms:(id)a1 inSection:(long long)a2;
- (void)removeItemAtIndexPath:(id)a0 completionHandler:(id /* block */)a1;
- (id)collectionView:(id)a0 evaluateFactoryForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2 isRecursive:(BOOL)a3;
- (id)createMetricsTreeWithGridLayout:(id)a0;
- (void)collectionViewWillBecomeActive:(id)a0;
- (void)collectionViewDidBecomeInactive:(id)a0;
- (BOOL)containsDataSource:(id)a0;
- (unsigned long long)sectionForDataSource:(id)a0;
- (void)dataSource:(id)a0 didInsertItemsAtIndexPaths:(id)a1;
- (void)dataSource:(id)a0 didRemoveItemsAtIndexPaths:(id)a1;
- (void)dataSource:(id)a0 didRefreshItemsAtIndexPaths:(id)a1;
- (void)dataSource:(id)a0 didMoveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)dataSource:(id)a0 didInsertSections:(id)a1;
- (void)dataSource:(id)a0 didRemoveSections:(id)a1;
- (void)dataSource:(id)a0 didMoveSection:(long long)a1 toSection:(long long)a2;
- (void)dataSourceDidReloadData:(id)a0;
- (void)dataSource:(id)a0 performBatchUpdate:(id /* block */)a1 complete:(id /* block */)a2;
- (id)_gkDescription;
- (id)wrapperForView:(id)a0 mapping:(id)a1;
- (void)updateMappings;
- (id)mappingForDataSource:(id)a0;
- (id)mappingForGlobalSection:(long long)a0;
- (id)allDataSources;
- (id)globalIndexPathsForLocal:(id)a0 dataSource:(id)a1;
- (id)globalSectionsForLocal:(id)a0 dataSource:(id)a1;
- (void)addDataSource:(id)a0 withTag:(id)a1;
- (void)setDataSource:(id)a0 forTag:(id)a1;

@end
