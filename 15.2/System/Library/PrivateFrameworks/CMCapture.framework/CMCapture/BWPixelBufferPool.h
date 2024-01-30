@class NSString, NSDictionary, BWVideoFormat, NSMutableSet, BWMemoryPool, NSObject;
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
    NSMutableSet *_prefetchedSurfaceIDs;
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

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)setCapacity:(unsigned long long)a0;
- (void)flush;
- (void)enumerateSurfacesUsingBlock:(id /* block */)a0;
- (BOOL)prefetch:(int)a0 lastEmittedSurfaceID:(unsigned int)a1;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 additionalPixelBufferAttributes:(id)a3;
- (void)flushToMinimumCapacity:(unsigned long long)a0;
- (void)preallocateWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 clientProvidesPool:(BOOL)a3 memoryPool:(id)a4 providesBackPressure:(BOOL)a5;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool { } *)a0 attributes:(struct __CFDictionary { } *)a1;
- (void)prefetchWithCompletionHandler:(id /* block */)a0;
- (int)preallocate;
- (struct __CVBuffer { } *)newPixelBuffer;
- (void)dealloc;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 memoryPool:(id)a3;

@end
