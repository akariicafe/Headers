@class NSObject;
@protocol OS_dispatch_queue;

@interface BWMemoryPool : NSObject {
    unsigned long long _defaultCacheBufferSize;
    unsigned long long _writeCombineCacheBufferSize;
    NSObject<OS_dispatch_queue> *_queue;
    struct __IOSurface { } *_writeCombineCacheBuffer;
    struct __IOSurface { } *_defaultCacheBuffer;
}

+ (void)initialize;

- (void)ensureMemoryAsync;
- (void)dealloc;
- (void)discardMemory;
- (id)newMTLBufferWithLength:(unsigned long long)a0 forDevice:(id)a1;
- (void)discardMemoryWithCompletionHandler:(id /* block */)a0;
- (void)_ensureMemoryPool;
- (int)addMemoryPoolToPropertiesForCaptureDevice:(id)a0;
- (int)addMemoryPoolToPropertiesForCaptureStream:(id)a0;
- (id)initWithDefaultCacheMemoryPoolSize:(long long)a0 writeCombineCacheMemoryPoolSize:(long long)a1;
- (void)ensureMemorySync;
- (void)_discardMemory;
- (int)removeMemoryPoolFromPropertiesForCaptureDevice:(id)a0;
- (void)addMemoryPoolToPixelBufferAttributes:(id)a0;

@end
