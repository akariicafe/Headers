@class PXMemoriesDataSourceState, PHFetchResult, NSString, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface PXFetchResultBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isWorking;
    BOOL _hasCreatedInitialDataSource;
}

@property (retain, nonatomic, setter=_setState:) PXMemoriesDataSourceState *_state;
@property (retain, setter=_setRemainingMemoriesToFetch:) NSMutableOrderedSet *_remainingMemoriesToFetch;
@property (readonly, nonatomic) PHFetchResult *memories;
@property (nonatomic) BOOL loadFromEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInitialDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (id)_createMemoriesDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2;
- (void)_workerQueue_fetchRemainingMemoriesInBatchesFromTheEnd:(BOOL)a0;
- (id)initWithMemoriesFetchResult:(id)a0;
- (void)startLoadingIfNeeded;

@end
