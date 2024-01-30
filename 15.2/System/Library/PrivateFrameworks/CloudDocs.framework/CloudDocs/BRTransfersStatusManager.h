@class NSString, NSProgress, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRTransfersStatusManager : NSObject {
    NSOperationQueue *_operationQueue;
    NSProgress *_globalUploadProgress;
    NSProgress *_globalDownloadProgress;
    id _globalProgressSubscriber;
    unsigned long long _shouldHideGlobalDownloadProgressCount;
    NSObject<OS_dispatch_source> *_timerToDisplayGlobalProgress;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_personaIdentifier;
}

@property (readonly, copy) NSMutableArray *transfers;

+ (void)initialize;
+ (id)defaultManager;

- (void).cxx_destruct;
- (void)removeTransfer:(id)a0;
- (void)dealloc;
- (void)_progressSubscription;
- (id)initWithPersonaIdentifier:(id)a0;
- (id)startObservingItemDownloadProgressAtURL:(id)a0;
- (void)stopObservingItemDownloadProgress:(id)a0;
- (void)addTransfer:(id)a0;
- (void)_setupTimerToDisplayGlobalProgress;
- (void)insertTransfer:(id)a0 atIndex:(unsigned long long)a1;
- (void)showGlobalProgressIfNeeded;
- (void)_setGlobalProgress:(id)a0 forIvar:(id *)a1;
- (void)downloadAndObserveItemAtURL:(id)a0 handler:(id /* block */)a1;

@end
