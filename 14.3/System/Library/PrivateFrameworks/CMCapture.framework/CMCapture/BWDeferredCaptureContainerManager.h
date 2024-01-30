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
- (void)_reportCoreAnalyticsDataWithError:(int)a0 container:(id)a1;
- (BOOL)_removeCachedContainerForCaptureRequestIdentifier:(id)a0;
- (void)_rescheduleCacheExpiryTimer;
- (int)_flushContainer:(id)a0 container:(id)a1;
- (id)_stagedContainerForCaptureRequestIdentifier:(id)a0;
- (BOOL)_removeStagedContainerForCaptureRequestIdentifier:(id)a0;
- (void)_updateCacheEntryForContainer:(id)a0 release:(BOOL)a1;
- (id)_inflightContainerForCaptureRequestIdentifier:(id)a0;
- (int)_enumerateManifestsForApplicationID:(id)a0 manifestArray:(id)a1 deleteInvalidContainers:(BOOL)a2;
- (id)_cachedContainerForCaptureRequestIdentifier:(id)a0;
- (id)createCaptureContainerWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 err:(int *)a2;
- (int)addCaptureContainer:(id)a0;
- (id)lookupCaptureContainer:(id)a0;
- (int)commitContainer:(id)a0;
- (int)abortContainer:(id)a0 error:(int)a1;
- (int)queryContainerStatusForApplicationID:(id)a0 captureRequestIdentifier:(id)a1 status:(int *)a2;
- (id)copyRemoteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1 err:(int *)a2;
- (int)releaseRemoteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1;
- (int)addBufferPool:(id)a0;
- (struct __CVBuffer { } *)newPixelBuffer:(id)a0;
- (int)removeBufferPool:(id)a0;
- (void)flush:(id)a0 toMinimumCapacity:(unsigned long long)a1;
- (BOOL)canDefer;
- (id)manifestsForApplicationID:(id)a0 err:(int *)a1;
- (int)deleteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1;
- (int)_queryLowDiskThresholds:(unsigned long long *)a0 veryLowDiskThresholdBytes:(unsigned long long *)a1;
- (id)_containerForCaptureRequestIdentifier:(id)a0 array:(id)a1 index:(unsigned long long *)a2;
- (BOOL)_removeContainerForCaptureRequestIdentifier:(id)a0 array:(id)a1;
- (BOOL)_removeInflightContainerForCaptureRequestIdentifier:(id)a0;
- (int)_handleExpiryTimer;

@end
