@class VUIMediaEntityType, NSString, MPMediaItem, NSTimer, VUIMediaEntityAssetControllerState, VUIMPMediaItemDownloadController, NSObject;
@protocol VUIMediaEntityIdentifier, OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate;

@interface VUIMPMediaItemAssetController : NSObject <VUIMPMediaItemDownloadControllerObserver, MPStoreDownloadManagerObserver, VUIMediaEntityAssetController>

@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (retain, nonatomic) VUIMPMediaItemDownloadController *downloadController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic, getter=isRequestingPermissionToDownload) BOOL requestingPermissionToDownload;
@property (readonly, nonatomic) MPMediaItem *mediaItem;
@property (retain, nonatomic) NSTimer *waitForDeletionTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (weak, nonatomic) id<VUIMediaEntityAssetControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL supportsStartingDownload;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;

+ (void)initialize;
+ (BOOL)_supportsStartingDownloadWithMediaItem:(id)a0;
+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)a0;

- (void)pauseDownload;
- (void)resumeDownload;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1 removeDownloads:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (BOOL)_isDownloaded;
- (void)_enqueueCompletionQueueBlock:(id /* block */)a0;
- (void)cancelAndRemoveDownload;
- (void)_onProcessingQueue_invalidate;
- (void)fetchNewKeysForDownloadedVideo;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)cancelKeyFetch;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)a0;
- (void)mediaItemDownloadController:(id)a0 stateDidChange:(id)a1;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)a0;
- (void)_notifyDelegateStateDidChange:(id)a0;
- (id)initWithMediaItem:(id)a0 mediaEntityIdentifier:(id)a1 serialProcessingDispatchQueue:(id)a2;
- (void)_onProcessingQueue_calculateStateAndNotify:(BOOL)a0;
- (void)_onProcessingQueue_invalidateAndSetState;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 completion:(id /* block */)a2;
- (void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(id /* block */)a0;
- (id)_onProcessingQueue_downloadController;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 downloadProgress:(double)a1 bytesDownloaded:(unsigned long long)a2 bytesToDownload:(unsigned long long)a3 supportsPausing:(BOOL)a4 supportsCancellation:(BOOL)a5 notify:(BOOL)a6;
- (void)_onProcessingQueue_startMonitoringDownload;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 notify:(BOOL)a1;
- (void)_onProcessingQueue_setDownloadController:(id)a0;

@end
