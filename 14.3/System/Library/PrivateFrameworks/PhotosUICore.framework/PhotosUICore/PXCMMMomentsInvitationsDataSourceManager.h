@class NSString, PXCMMMomentsInvitationsDataSourceState, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface PXCMMMomentsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
}

@property (retain, nonatomic) PXCMMMomentsInvitationsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingAssetCollectionObjectIDsToFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mockDataSourceManagerFromRecentLargeMoments;
+ (id)new;

- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)init;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)_createInvitationsDataSourceFromCurrentState;
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatches;
- (id)initWithAssetCollectionsFetchResult:(id)a0;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2;
- (void)startLoadingIfNeeded;
- (id)assetCollections;

@end
