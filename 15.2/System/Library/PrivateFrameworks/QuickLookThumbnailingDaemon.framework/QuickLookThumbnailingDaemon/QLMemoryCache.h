@class NSObject, NSMutableDictionary, _QLCacheThread, NSMutableArray, NSLock;
@protocol OS_os_transaction;

@interface QLMemoryCache : NSObject {
    BOOL _cacheEnabled;
    NSMutableDictionary *_thumbnailData;
    NSMutableArray *_thumbnailDataToSave;
    NSLock *_memoryLock;
    NSObject<OS_os_transaction> *_pendingSavesTransaction;
}

@property unsigned long long memoryUsed;
@property (weak) _QLCacheThread *cacheThread;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithCacheThread:(id)a0;
- (BOOL)sendThumbnailDataForThumbnailRequest:(id)a0 withCacheThread:(id)a1;
- (id)thumbnailDataToSaveWithBatch:(unsigned long long)a0;
- (void)thumbnailDataBatchSaved:(id)a0;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)a0;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)a0;
- (BOOL)addThumbnailData:(id)a0;
- (unsigned long long)thumbnailToSaveCount;
- (void)_getWriteLock;
- (void)_releaseWriteLock;
- (void)_invalidateThumbnailData:(id)a0;
- (void)_getReadLock;
- (void)_releaseReadLock;
- (BOOL)hasThumbnailDataToSave;

@end
