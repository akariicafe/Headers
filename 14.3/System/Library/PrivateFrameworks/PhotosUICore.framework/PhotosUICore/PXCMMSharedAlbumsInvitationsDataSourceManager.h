@class PXCMMSharedAlbumsInvitationsDataSourceState, NSString, NSMutableOrderedSet, PXCMMSharedAlbumsInvitationsDataSource, NSObject;
@protocol OS_dispatch_queue;

@interface PXCMMSharedAlbumsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
}

@property (readonly, nonatomic) PXCMMSharedAlbumsInvitationsDataSource *dataSource;
@property (retain, nonatomic) PXCMMSharedAlbumsInvitationsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingSharedAlbumObjectIDsToFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mockDataSourceManagerFromCMMDebugSharedAlbums;

- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)initWithAssetCollectionsFetchResult:(id)a0;
- (id)sharedAlbums;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_workerQueue_fetchRemainingSharedAlbumsInBatches;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2;
- (void)startLoadingIfNeeded;

@end
