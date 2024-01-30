@class NSProgress, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRTransfersStatusManager : NSObject {
    NSOperationQueue *_operationQueue;
    NSProgress *_globalUploadProgress;
    NSProgress *_globalDownloadProgress;
    id _globalProgressSubscriber;
    unsigned long long _shouldHideGlobalDownloadProgressCount;
    NSObject<OS_dispatch_source> *_timerToDisplayGlobalProgress;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSMutableArray *transfers;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addTransfer:(id)a0;
- (void)_progressSubscription;
- (id)startObservingItemDownloadProgressAtURL:(id)a0;
- (void)stopObservingItemDownloadProgress:(id)a0;
- (void)_setupTimerToDisplayGlobalProgress;
- (void)insertTransfer:(id)a0 atIndex:(unsigned long long)a1;
- (void)showGlobalProgressIfNeeded;
- (void)_setGlobalProgress:(id)a0 forIvar:(id *)a1;
- (void)downloadAndObserveItemAtURL:(id)a0 handler:(id /* block */)a1;
- (void)removeTransfer:(id)a0;

@end
