@class PXCMMPhotoKitPeopleSuggestionsDataSource, PHAssetCollection, PXUpdater, NSMutableOrderedSet, NSString, PXCMMPhotoKitPeopleSuggestionsDataSourceState, NSObject;
@protocol OS_dispatch_queue;

@interface PXCMMPhotoKitPeopleSuggestionsDataSourceManager : PXCMMPeopleSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    BOOL _isPrefetching;
    BOOL _hasCreatedInitialDataSource;
    BOOL _needsDeferredLoading;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedWorkerQueue;

@property (readonly, nonatomic) PXCMMPhotoKitPeopleSuggestionsDataSource *dataSource;
@property (retain, nonatomic) PXCMMPhotoKitPeopleSuggestionsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingPeopleToFetch;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) PXUpdater *updater;
@property (nonatomic) BOOL hasStartedLoadingFinalDataSource;
@property (nonatomic) BOOL hasFinishedLoadingFinalDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mockDataSourceManagerFromPeopleInPhotosInAssetCollection:(id)a0;
+ (id)photosGraphPeopleSuggestionsDataSourceManagerWithAssetCollection:(id)a0;

- (id)people;
- (void)startLoading;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (BOOL)isLoading;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)boostLoading;
- (id)initWithPeopleFetchResult:(id)a0;
- (id)_initWithAssetCollection:(id)a0;
- (void)_loadFinalDataSource;
- (void)_handleFinishedLoadingFinalDataSourceFetchResult:(id)a0;
- (void)startPrefetchingIfNeeded;
- (void)cancelLoading;
- (void)_workerQueue_fetchRemainingPeopleInBatches;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2;

@end
