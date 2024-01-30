@class NSTimer, NSString, SSDownload, VUIMediaEntityAssetControllerState, VUIFamilySharingMediaItem, NSObject, VUIMediaEntityType, SSDownloadManager;
@protocol VUIMediaEntityIdentifier, OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate;

@interface VUIFamilySharingMediaItemAssetController : NSObject <SSPurchaseManagerDelegate, SSDownloadManagerObserver, VUIMediaEntityAssetController>

@property (retain, nonatomic) VUIFamilySharingMediaItem *mediaItemInternal;
@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifierInternal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (weak, nonatomic) id<VUIMediaEntityAssetControllerDelegate> delegateInternal;
@property (retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal;
@property (retain, nonatomic) SSDownloadManager *ssDownloadManager;
@property (retain, nonatomic) SSDownload *downloadInternal;
@property (nonatomic) BOOL observingDownload;
@property (retain, nonatomic) NSTimer *waitForDeletionTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (weak, nonatomic) id<VUIMediaEntityAssetControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL supportsStartingDownload;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;

+ (void)initialize;

- (void)pauseDownload;
- (void)resumeDownload;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)cancelAndRemoveDownload;
- (void)fetchNewKeysForDownloadedVideo;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)_updateObservedDownload;
- (void)_updateDownloadStateAndNotifyDelegates;
- (id)initWithFamilySharingMediaItem:(id)a0 mediaEntityIdentifier:(id)a1;
- (void)_cancelAndRemoveDownloadWithCompletion:(id /* block */)a0;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)cancelKeyFetch;
- (id)initWithVideosPlayable:(id)a0;

@end
