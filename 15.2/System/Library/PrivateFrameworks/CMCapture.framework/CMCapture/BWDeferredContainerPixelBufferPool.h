@class BWVideoFormat;

@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool

@property (readonly, nonatomic) BWVideoFormat *videoFormat;
@property (readonly, nonatomic) struct __CVPixelBufferPool { } *cvPixelBufferPool;
@property (readonly, nonatomic) struct __CFDictionary { } *cvPixelBufferPoolAuxAttributes;

+ (void)initialize;

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)setCapacity:(unsigned long long)a0;
- (void)flush;
- (void)enumerateSurfacesUsingBlock:(id /* block */)a0;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 additionalPixelBufferAttributes:(id)a3;
- (void)flushToMinimumCapacity:(unsigned long long)a0;
- (void)preallocateWithCompletionHandler:(id /* block */)a0;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 clientProvidesPool:(BOOL)a3 memoryPool:(id)a4 providesBackPressure:(BOOL)a5;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool { } *)a0 attributes:(struct __CFDictionary { } *)a1;
- (void)prefetchWithCompletionHandler:(id /* block */)a0;
- (int)preallocate;
- (struct __CVBuffer { } *)newPixelBuffer;
- (void)dealloc;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2;
- (id)initWithAttributes:(id)a0 capacity:(unsigned long long)a1 name:(id)a2;
- (id)initWithVideoFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 memoryPool:(id)a3;

@end
