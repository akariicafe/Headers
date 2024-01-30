@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BWDeferredCaptureContainerManager : BWDeferredContainerManagerBase {
    unsigned int _cacheSize;
    unsigned int _cacheResidencySeconds;
    NSObject<OS_dispatch_source> *_cacheExpiryTimer;
    NSMutableArray *_stagedContainers;
    NSMutableArray *_inflightContainers;
    NSMutableArray *_cachedContainers;
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_dispatch_queue> *_flushQueueBackground;
    unsigned long long _cachedLowDiskThresholdBytes;
    NSMutableDictionary *_pools;
}

+ (id)sharedInstance;

- (id)init;
- (struct __CVBuffer { } *)newPixelBuffer:(id)a0;
- (int)abortContainer:(id)a0 error:(int)a1;
- (int)addBufferPool:(id)a0;
- (int)addCaptureContainer:(id)a0;
- (BOOL)canDefer;
- (int)commitContainer:(id)a0;
- (id)copyRemoteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1 err:(int *)a2;
- (id)createCaptureContainerWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 err:(int *)a2;
- (int)deleteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1;
- (void)flush:(id)a0 toMinimumCapacity:(unsigned long long)a1;
- (id)lookupCaptureContainer:(id)a0;
- (id)manifestsForApplicationID:(id)a0 err:(int *)a1;
- (int)queryContainerStatusForApplicationID:(id)a0 captureRequestIdentifier:(id)a1 status:(int *)a2;
- (int)releaseRemoteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1;
- (int)removeBufferPool:(id)a0;

@end
