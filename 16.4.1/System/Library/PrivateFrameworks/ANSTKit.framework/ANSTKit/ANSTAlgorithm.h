@interface ANSTAlgorithm : NSObject

+ (id)new;

- (id)_init;
- (id)init;
- (BOOL)prepareWithError:(id *)a0;
- (struct __CVBuffer { } *)createPixelBuffer:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (struct __CVPixelBufferPool { } *)pixelBufferPoolCreateWithMinCapacity:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelFormat:(unsigned int)a3;

@end
