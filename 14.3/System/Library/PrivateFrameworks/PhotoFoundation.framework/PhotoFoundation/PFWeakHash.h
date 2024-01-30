@class NSPointerArray;
@protocol PFWeakHashDelegate;

@interface PFWeakHash : PFWeakContainer {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _serializer;
    BOOL _objectHashing;
    _Atomic struct _opaque_pthread_t *_serializedThread;
    id *_objects;
    unsigned long long _capacity;
    NSPointerArray *_payload;
    unsigned long long _payloadPurgeCounter;
    unsigned long long *_inUse;
    unsigned long long _count;
    long long _nilledWeakCount;
}

@property (weak) id<PFWeakHashDelegate> delegate;

+ (void)initialize;

- (unsigned long long)capacity;
- (BOOL)_removeAllObjects;
- (void)_doEnumeration:(id /* block */)a0;
- (id)init;
- (unsigned long long)_addObject:(id)a0;
- (void).cxx_destruct;
- (void)_purgeOrphanedPayloads;
- (void)addObject:(id)a0 withPayload:(id)a1;
- (void)dealloc;
- (void)_dumpBuckets;
- (BOOL)_shouldShrink;
- (void)_rehashWithNewCapacity:(unsigned long long)a0;
- (BOOL)removeObject:(id)a0;
- (id)initWithPointerHashing;
- (id)member:(id)a0;
- (void)_setPayload:(id)a0 inBucket:(unsigned long long)a1;
- (unsigned long long)_bucketForObject:(id)a0 foundInHash:(BOOL *)a1;
- (void)weakReferenceBecameNil;
- (unsigned long long)countByVerifyingWeakObjects;
- (id)initWithObjectHashing;
- (void)postDelegateBecameEmptyNotice;
- (void)enumerateObjectsAndPayloadsWithBlock:(id /* block */)a0;
- (void)_resize;
- (void)addObject:(id)a0;
- (void)setPayload:(id)a0 forObject:(id)a1;
- (BOOL)_onSerializedThread;
- (void)removeAllObjects;
- (void)_processNilledWeakReferences;
- (id)allObjects;
- (unsigned long long)countEstimate;
- (BOOL)containsObject:(id)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (id)payloadForObject:(id)a0;
- (void)_serialize:(id /* block */)a0;
- (BOOL)_shouldGrow;

@end
