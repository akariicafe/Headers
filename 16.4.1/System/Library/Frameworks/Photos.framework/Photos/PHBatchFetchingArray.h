@class NSString, NSArray, NSSet, NSMutableDictionary, PHPhotoLibrary, PHBatchFetchingArrayFetchedClass, NSObject, NSCache;
@protocol PHBatchFetchingArrayDataSource, OS_dispatch_queue;

@interface PHBatchFetchingArray : NSArray <NSCacheDelegate> {
    NSSet *_oidsSet;
    id<PHBatchFetchingArrayDataSource> _dataSource;
    unsigned long long _count;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NSCache *_cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lastBatchLock;
    unsigned long long _lastBatchIndex;
    NSArray *_lastBatch;
    NSObject<OS_dispatch_queue> *_uuidsQueue;
    NSMutableDictionary *_uuidsByOIDs;
    unsigned long long _batchSize;
    PHBatchFetchingArrayFetchedClass *_overridenFetchResultClass;
    unsigned long long _propertyHint;
}

@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) NSArray *oids;
@property (readonly) NSSet *oidsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)_prepareObjectsByOIDsFromOIDsToFetch:(id)a0 andUpdateUUIDsByOIDsForRestrictedObjectsUsingFetchedObjects:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)initWithOIDs:(id)a0 options:(id)a1 photoLibrary:(id)a2;
- (unsigned long long)batchSize;
- (unsigned long long)_populateObjectBuffer:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_batchForBatchNumber:(unsigned long long)a0 shouldUpdateLastBatch:(BOOL)a1;
- (unsigned long long)count;
- (void)test_evictBatchNumber:(long long)a0;
- (unsigned long long)test_lastBatchIndex;
- (void)test_invalidateUUIDCache;
- (void)dealloc;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_shouldRetrieveRestrictedAssetOIDsWithSample:(id)a0;
- (id)initWithObjects:(id)a0 options:(id)a1 photoLibrary:(id)a2;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_phObjectAtIndex:(unsigned long long)a0;
- (void)_rememberUUIDsForBatch:(id)a0;
- (void).cxx_destruct;
- (id)_fetchObjectsInBatchNumber:(unsigned long long)a0;
- (id)_phObjectsForOIDs:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)initWithOIDs:(id)a0 options:(id)a1 dataSource:(id)a2;

@end
