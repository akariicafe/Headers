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

- (void)discardMemoryWithCompletionHandler:(id /* block */)a0;
- (void)discardMemory;
- (int)addMemoryPoolToPropertiesForCaptureDevice:(id)a0;
- (void)addMemoryPoolToPixelBufferAttributes:(id)a0;
- (void)_ensureMemoryPool;
- (id)newMTLBufferWithLength:(unsigned long long)a0 forDevice:(id)a1;
- (void)_discardMemory;
- (int)removeMemoryPoolFromPropertiesForCaptureDevice:(id)a0;
- (void)ensureMemorySync;
- (int)addMemoryPoolToPropertiesForCaptureStream:(id)a0;
- (void)dealloc;
- (void)ensureMemoryAsync;
- (id)initWithDefaultCacheMemoryPoolSize:(long long)a0 writeCombineCacheMemoryPoolSize:(long long)a1;

@end
