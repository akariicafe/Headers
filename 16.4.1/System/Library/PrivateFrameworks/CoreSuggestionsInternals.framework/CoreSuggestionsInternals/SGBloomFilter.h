@class NSObject;
@protocol OS_dispatch_queue, SGBloomFilterChunk;

@interface SGBloomFilter : NSObject {
    id<SGBloomFilterChunk> _head;
    id<SGBloomFilterChunk> _tail;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)add:(id)a0;
- (void)_rotate;
- (void).cxx_destruct;
- (id)counts;
- (BOOL)exists:(id)a0;
- (void)_rotateIfNecessary;
- (void)addAsync:(id)a0;
- (void)forceRotate;
- (id)initWithDirectory:(id)a0 name:(id)a1;
- (id)initWithHead:(id)a0 tail:(id)a1;
- (id)initWithInMemoryStorage;
- (id)initWithInMemoryStorageSparse;

@end
