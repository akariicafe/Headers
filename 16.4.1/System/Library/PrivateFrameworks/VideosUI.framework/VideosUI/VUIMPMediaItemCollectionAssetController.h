@class VUIMediaEntityType, MPMediaItemCollection, NSArray, NSString, VUIMediaEntityAssetControllerState, NSObject;
@protocol VUIMediaEntityIdentifier, OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate;

@interface VUIMPMediaItemCollectionAssetController : NSObject <VUIMediaEntityAssetControllerDelegate, VUIMediaEntityAssetController>

@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) MPMediaItemCollection *mediaItemCollection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSArray *assetControllers;
@property (nonatomic) unsigned long long fullyDownloadedAssetBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (weak, nonatomic) id<VUIMediaEntityAssetControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL supportsStartingDownload;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;

+ (id)_downloadingAssetControllersWithAssetControllers:(id)a0;
+ (id)_stateFromDownloadingAssetControllers:(id)a0 fullyDownloadedAssetBytes:(unsigned long long)a1;

- (void)resumeDownload;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)pauseDownload;
- (BOOL)_allAssetsDownloaded;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)a0;
- (void)_enqueueCompletionQueueBlock:(id /* block */)a0;
- (void)_notifyDelegateStateDidChange:(id)a0;
- (void)_onProcessingQueue_cancelAndRemoveDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_onProcessingQueue_setState:(id)a0 andNotifyDelegate:(BOOL)a1;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)_onProcessingQueue_updateStateAndNotifyDelegate:(BOOL)a0;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithMediaItemCollection:(id)a0 mediaEntityIdentifier:(id)a1 serialProcessingDispatchQueue:(id)a2;
- (void)mediaEntityAssetController:(id)a0 stateDidChange:(id)a1;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;

@end
