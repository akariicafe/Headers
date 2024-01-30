@class NSString, NSDictionary, BWVideoFormat, BWMemoryPool, NSObject;
@protocol OS_dispatch_semaphore;

@interface BWPixelBufferPool : NSObject {
    BWVideoFormat *_videoFormat;
    unsigned long long _capacity;
    NSString *_name;
    BOOL _clientProvidesPool;
    NSDictionary *_additionalPixelBufferAttributes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pixelBufferPoolConfigurationLock;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    NSDictionary *_pixelBufferPoolAuxAttributes;
    int _pixelBufferPoolCreateError;
    BWMemoryPool *_memoryPool;
    BOOL _providesBackPressure;
    NSObject<OS_dispatch_semaphore> *_backPressureSemaphore;
}

@property (readonly) NSString *name;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) struct __CVPixelBufferPool { } *cvPixelBufferPool;
@property (readonly, nonatomic) struct __CFDictionary { } *cvPixelBufferPoolAuxAttributes;

+ (void)initialize;

- (struct __CVBuffer { } *)_newPixelBuffer;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool { } *)a0 attributes:(struct __CFDictionary { } *)a1;
- (void)_flush;
- (void)setCapacity:(unsigned long long)a0;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 memoryPool:(id)a3;
- (int)_ensurePool;
- (struct __CVBuffer { } *)newPixelBuffer;
- (void)dealloc;
- (void)enumerateSurfacesUsingBlock:(id /* block */)a0;
- (void)preallocateWithCompletionHandler:(id /* block */)a0;
- (int)preallocate;
- (id)description;
- (void)flush;
- (void)prefetchWithCompletionHandler:(id /* block */)a0;
- (void)flushToMinimumCapacity:(unsigned long long)a0;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 clientProvidesPool:(BOOL)a3 memoryPool:(id)a4 providesBackPressure:(BOOL)a5;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 additionalPixelBufferAttributes:(id)a3;

@end
