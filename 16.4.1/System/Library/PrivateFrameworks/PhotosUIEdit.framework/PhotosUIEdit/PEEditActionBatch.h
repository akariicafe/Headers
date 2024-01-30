@class NSArray, NSMutableDictionary, NSDictionary, NSMutableSet, NSProgress, NSObject, PEPhotoKitMediaDestination, PEResourceManager;
@protocol OS_dispatch_queue, PEEditActionBatchDelegate, PELoadingStatusDelegate;

@interface PEEditActionBatch : NSObject {
    NSDictionary *_actionMap;
    NSMutableDictionary *_loadingIdMap;
    NSMutableDictionary *_progressMap;
    NSMutableSet *_mediaRequestIds;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    PEResourceManager *_resourceManager;
    NSArray *_assets;
    PEPhotoKitMediaDestination *_mediaDestination;
}

@property (weak, nonatomic) id<PELoadingStatusDelegate> loadingStatusManager;
@property (readonly) NSProgress *progress;
@property (nonatomic) BOOL crossPlatformSerializationEnabled;
@property (nonatomic) BOOL forceRunAsUnadjustedAsset;
@property (nonatomic) BOOL async;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) long long state;
@property (weak, nonatomic) id<PEEditActionBatchDelegate> delegate;

- (void)cancel;
- (void).cxx_destruct;
- (void)_cancelLoading;
- (id)_processAssets:(id)a0;
- (id)initWithAssets:(id)a0 action:(id)a1 progress:(id)a2;
- (void)_commitComposition:(id)a0 toResource:(id)a1 changeType:(long long)a2 completion:(id /* block */)a3;
- (id)_presetForAsset:(id)a0;
- (void)_processDidCompleteWithID:(id)a0 error:(id)a1;
- (void)_processDidUpdateWithID:(id)a0 progress:(double)a1;
- (void)_processResult:(id)a0 targetPreset:(id)a1 completion:(id /* block */)a2;
- (id)_processWillBeginWithAsset:(id)a0 progress:(double)a1;
- (void)_requestResourcesForAsset:(id)a0 progressHandler:(id /* block */)a1 resultHandler:(id /* block */)a2;
- (void)_setupWithActionMap:(id)a0 assets:(id)a1 progress:(id)a2;
- (void)_updateProgress:(double)a0 forLoadingID:(id)a1;
- (id)initWithAssets:(id)a0 actionMap:(id)a1 progress:(id)a2;
- (void)runActionWithBatchSize:(unsigned long long)a0 completion:(id /* block */)a1;

@end
