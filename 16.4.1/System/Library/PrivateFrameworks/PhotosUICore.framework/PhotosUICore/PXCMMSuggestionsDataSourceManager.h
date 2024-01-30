@class NSDate, PXCMMSuggestionsDataSource, NSArray, NSString, NSObject, PXCMMSuggestionsDataSourceState, NSMutableOrderedSet, PXCMMSuggestionsDataSourceContext;
@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
}

@property (class, readonly, nonatomic) NSDate *mostRecentCreationDate;
@property (class, readonly) NSArray *keyPathsAffectingCurrentDataSourceManager;

@property (retain, nonatomic) PXCMMSuggestionsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingAssetCollectionsObjectIDsToFetch;
@property (readonly, nonatomic) PXCMMSuggestionsDataSourceContext *context;
@property (readonly, nonatomic) PXCMMSuggestionsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceManager;
+ (id)new;
+ (id)_fetchResultForEmptyDataSourceManager;
+ (id)_fetchResultForMockRecentLargeMomentsDataSourceManager;
+ (id)_fetchResultForTypeGraphWithContext:(id)a0;
+ (id)currentDataSourceManager;
+ (id)dataSourceManagerWithParticipants:(id)a0 fetchLimit:(long long)a1 shouldShowAccepted:(BOOL)a2 message:(id)a3 date:(id)a4 matchingStrategy:(unsigned long long)a5;
+ (id)emptyDataSourceManager;
+ (id)mockDataSourceManagerFromRecentLargeMoments;

- (id)createInitialDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)init;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (id)assetCollections;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2 changedObjects:(id)a3;
- (void)_startLoadingIfNeeded;
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatchesWithAssetCollections:(id)a0;
- (id)initWithAssetCollectionsFetchResult:(id)a0;
- (id)initWithContext:(id)a0 assetCollectionsFetchResult:(id)a1;

@end
