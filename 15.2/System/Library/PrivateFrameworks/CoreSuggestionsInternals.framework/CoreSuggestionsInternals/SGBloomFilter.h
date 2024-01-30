@class NSObject;
@protocol OS_dispatch_queue, SGBloomFilterChunk;

@interface SGBloomFilter : NSObject {
    id<SGBloomFilterChunk> _head;
    id<SGBloomFilterChunk> _tail;
    NSObject<OS_dispatch_queue> *_queue;
}

- (BOOL)exists:(id)a0;
- (id)counts;
- (void)add:(id)a0;
- (void)_rotate;
- (void)addAsync:(id)a0;
- (id)initWithInMemoryStorageSparse;
- (void)_rotateIfNecessary;
- (id)initWithInMemoryStorage;
- (void).cxx_destruct;
- (void)forceRotate;
- (id)initWithHead:(id)a0 tail:(id)a1;
- (id)initWithDirectory:(id)a0 name:(id)a1;

@end
