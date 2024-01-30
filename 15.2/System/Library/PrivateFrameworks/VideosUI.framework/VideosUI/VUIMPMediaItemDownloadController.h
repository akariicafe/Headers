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

- (void)cancelDownload;
- (void)_setState:(id)a0;
- (void)pauseDownload;
- (void)resumeDownload;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)initWithMediaItem:(id)a0 state:(id)a1 serialProcessingDispatchQueue:(id)a2;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* block */)a0;
- (void)_enqueueAsyncStrongSelfProcessingQueueBlock:(id /* block */)a0;
- (void)_onProcessingQueue_setState:(id)a0;
- (void)_notifyObservers:(id)a0 stateDidChange:(id)a1;
- (void)_enqueueObserverQueueBlock:(id /* block */)a0;

@end
