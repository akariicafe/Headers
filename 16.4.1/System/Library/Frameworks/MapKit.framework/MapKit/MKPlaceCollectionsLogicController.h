@class MKPlaceBatchController, NSArray, UICollectionViewDiffableDataSource, UICollectionView, NSDiffableDataSourceSnapshot, NSString;
@protocol MKCuratedCollectionsSyncCoordinator;

@interface MKPlaceCollectionsLogicController : NSObject <MKCollectionsFetcher, MKCollectionDataProvider, MKCollectionUpdater, CollectionsAnalyticsProvider, MKPlaceBatchConsumer> {
    long long _context;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *collections;
@property (retain, nonatomic) NSArray *geoCollections;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) id<MKCuratedCollectionsSyncCoordinator> syncCoordinator;
@property (retain, nonatomic) MKPlaceBatchController *batchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (void).cxx_destruct;
- (void)getCollections:(id /* block */)a0;
- (id)identifierForCollectionAtIndex:(long long)a0;
- (void)prepareSnapshot;
- (void)_dispatchOnManThread:(id /* block */)a0;
- (void)appendBatchOfCollections:(id)a0;
- (void)applySnapShot:(id)a0 animated:(BOOL)a1;
- (id)buildCuratedCollectionsFrom:(id)a0 shouldCancelImageDownloads:(BOOL)a1;
- (void)clearPreviousModelImageDownloads;
- (void)clearSnapshotData;
- (id)collectionAtIndex:(long long)a0;
- (void)createBatchControllerIfNeededUsingIdentifiers:(id)a0 andPlaceCollections:(id)a1 usingCollectionFetcher:(id)a2 usingGuideConsumer:(id)a3 usingBatchSize:(unsigned long long)a4;
- (void)didStartFetchingBatch;
- (void)dismissedCollections;
- (void)displayCollections;
- (id)geoCollectionAtIndex:(long long)a0;
- (void)getCollectionsUsingDataSource:(id)a0 onCompletion:(id /* block */)a1;
- (id)initWithCollectionView:(id)a0 withPlaceCollections:(id)a1 usingCollectionIds:(id)a2 usingCollectionFetcher:(id)a3 usingGuideConsumer:(id)a4 usingSyncCoordinator:(id)a5 inContext:(long long)a6 usingBatchSize:(unsigned long long)a7;
- (id)initWithPlaceCollections:(id)a0 usingSyncCoordinator:(id)a1 inContext:(long long)a2;
- (BOOL)isCollectionSavedAtIndex:(long long)a0;
- (long long)numberOfCollections;
- (void)refreshCollections;
- (id)removeIdentifiers:(id)a0 collidingWithPlaceCollections:(id)a1;
- (long long)sectionKindAtIndex:(long long)a0;
- (void)shouldConsumeBatch:(BOOL)a0 fetchedBatch:(id)a1;
- (void)updateCollections:(id)a0 usingBatchedIdentifiers:(id)a1 usingCollectionFetcher:(id)a2 usingBatchSize:(unsigned long long)a3;
- (void)updateCollectionsWithoutPreparingSnapshot:(id)a0 usingBatchedIdentifiers:(id)a1 usingCollectionFetcher:(id)a2 usingGuideConsumer:(id)a3 usingBatchSize:(unsigned long long)a4;
- (void)updateUsingBatchedIdentifiers:(id)a0 usingCollectionFetcher:(id)a1 usingBatchSize:(unsigned long long)a2;
- (void)willDisplayCellAtIndexpath:(id)a0;

@end
