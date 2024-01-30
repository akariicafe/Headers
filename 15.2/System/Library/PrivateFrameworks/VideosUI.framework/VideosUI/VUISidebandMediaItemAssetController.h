@class VUIMediaEntityType, VUIVideoManagedObject, NSString, TVPDownload, VUIMediaEntityAssetControllerState, NSObject;
@protocol VUIMediaEntityIdentifier, VUIMediaEntityAssetControllerDelegate, OS_dispatch_queue;

@interface VUISidebandMediaItemAssetController : NSObject <VUIDownloadManagerDelegate, TVPDownloadDelegate, VUIMediaEntityAssetController>

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObjectInternal;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifierInternal;
@property (weak, nonatomic) id<VUIMediaEntityAssetControllerDelegate> delegateInternal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal;
@property (retain, nonatomic) TVPDownload *downloadInternal;
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

- (void)pauseDownload;
- (void)resumeDownload;
- (void)downloadManagerDownloadsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)cancelAndRemoveDownload;
- (void)fetchNewKeysForDownloadedVideo;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)_updateObservedDownload;
- (void)_updateDownloadStateAndNotifyDelegates;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)cancelKeyFetch;
- (void)download:(id)a0 didChangeStateTo:(long long)a1;
- (void)download:(id)a0 progressDidChange:(double)a1;
- (id)initWithVideoManagedObject:(id)a0 mediaEntityIdentifier:(id)a1;

@end
