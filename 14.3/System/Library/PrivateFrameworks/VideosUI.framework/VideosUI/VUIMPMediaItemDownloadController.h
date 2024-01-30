@class VUIMPMediaItemDownloadControllerState, MPMediaItem, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface VUIMPMediaItemDownloadController : NSObject

@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (copy, nonatomic) VUIMPMediaItemDownloadControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) BOOL supportsCancellation;
@property (readonly, nonatomic) BOOL supportsPausing;
@property (readonly, nonatomic, getter=isRestoreDownload) BOOL restoreDownload;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerDispatchQueue;

- (void)_setState:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)cancelDownload;
- (void)invalidate;
- (void)pauseDownload;
- (void)resumeDownload;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* block */)a0;
- (id)initWithMediaItem:(id)a0 state:(id)a1 serialProcessingDispatchQueue:(id)a2;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_enqueueAsyncStrongSelfProcessingQueueBlock:(id /* block */)a0;
- (void)_onProcessingQueue_setState:(id)a0;
- (void)_notifyObservers:(id)a0 stateDidChange:(id)a1;
- (void)_enqueueObserverQueueBlock:(id /* block */)a0;

@end
