@class NSArray, PXImportAssetsDataSource, NSMutableDictionary, NSDictionary, NSSet, NSObject, PXImportAssetCollection, NSMutableArray;
@protocol OS_dispatch_queue, PXImportAssetsDataSourceManagerDelegate;

@interface PXImportAssetsDataSourceManager : PXAssetsDataSourceManager

@property (retain, nonatomic) PXImportAssetsDataSource *unfilteredDataSource;
@property (retain, nonatomic) NSMutableDictionary *allAssetCollectionsById;
@property (copy, nonatomic) NSDictionary *filteredAssetCollectionsById;
@property (retain, nonatomic) NSMutableArray *allAssetCollections;
@property (copy, nonatomic) NSArray *filteredAssetCollections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modelQueue;
@property (nonatomic) BOOL needsFilterUpdate;
@property (nonatomic) long long maxAlreadyImportedItems;
@property (nonatomic) long long forcedAlreadyImportedTruncationMode;
@property (weak, nonatomic) id<PXImportAssetsDataSourceManagerDelegate> delegate;
@property (readonly, nonatomic) PXImportAssetsDataSource *dataSource;
@property (readonly, nonatomic) PXImportAssetCollection *unfilteredAlreadyImportedAssetCollection;
@property (copy, nonatomic) NSSet *visibleImportAssetIdentifiers;
@property (nonatomic) BOOL showAlreadyImportedItems;
@property (nonatomic) BOOL showNotYetImportedItems;
@property (nonatomic) BOOL alreadyImportedItemsSelectable;

+ (BOOL)assetCollectionsArray:(id)a0 isEqualToAssetCollectionsArray:(id)a1;
+ (void)copyFromAssetCollections:(id)a0 toAssetCollections:(id *)a1 assetCollectionsById:(id *)a2;
+ (void)addModels:(id)a0 toAssetCollections:(id)a1 assetCollectionsById:(id)a2;
+ (void)removeModels:(id)a0 fromAssetCollections:(id)a1 assetCollectionsById:(id)a2;
+ (void)sortAssetCollectionsInArray:(id)a0;

- (id)createInitialDataSource;
- (void)addAssets:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)removeAssets:(id)a0;
- (void).cxx_destruct;
- (void)updateFilteredAssetsIfNeeded;
- (id)initWithAssetsFromDataSourceManager:(id)a0 delegate:(id)a1;
- (void)modifyAssetCollectionsWithBlock:(id /* block */)a0;
- (id)filteredModelsFromModels:(id)a0 inAssetCollections:(id)a1 assetCollectionsById:(id)a2;
- (id)existingModelsFromModels:(id)a0 inAssetCollections:(id)a1 assetCollectionsById:(id)a2;
- (void)rebuildAlreadyImportedAssetCollectionInCollections:(id)a0 collectionsById:(id)a1;
- (void)pruneEmptyAssetCollectionsInCollections:(id)a0 collectionsById:(id)a1;
- (void)setNeedsFilterUpdate;
- (void)updateAlreadyImportedSelectability;
- (long long)countOfUnfilteredAlreadyImportedAssetCollection;
- (long long)countOfAlreadyImportedAssetCollectionInCollectionsMap:(id)a0;

@end
