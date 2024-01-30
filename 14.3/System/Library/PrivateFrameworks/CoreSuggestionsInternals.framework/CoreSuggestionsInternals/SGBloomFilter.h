@class NSObject;
@protocol OS_dispatch_queue, SGBloomFilterChunk;

@interface SGBloomFilter : NSObject {
    id<SGBloomFilterChunk> _head;
    id<SGBloomFilterChunk> _tail;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)counts;
- (void)add:(id)a0;
- (void).cxx_destruct;
- (BOOL)exists:(id)a0;
- (void)_rotate;
- (id)initWithHead:(id)a0 tail:(id)a1;
- (id)initWithInMemoryStorage;
- (id)initWithInMemoryStorageSparse;
- (id)initWithDirectory:(id)a0 name:(id)a1;
- (void)_rotateIfNecessary;
- (void)forceRotate;
- (void)addAsync:(id)a0;

@end
