@class BWPixelBufferPool, NSObject;
@protocol OS_dispatch_semaphore;

@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject {
    BWPixelBufferPool *_pool;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)flushToMinimumCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)signal;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2;

@end
