@class NSDictionary;

@interface MIOPixelBufferPool : NSObject

@property (nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (retain, nonatomic) NSDictionary *poolAttributes;

+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2;
+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 exactBytesPerRow:(unsigned long long)a3 minBufferCount:(unsigned long long)a4;
+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 exactBytesPerRows:(id)a3 minBufferCount:(unsigned long long)a4;
+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 extendedPixelsPerRow:(unsigned long long)a3 minBufferCount:(unsigned long long)a4;
+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 minBufferCount:(unsigned long long)a3;
+ (id)createNewL008MIOPixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { } *)a0 minBufferCount:(unsigned long long)a1;
+ (id)createNewL010MIOPixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { } *)a0 minBufferCount:(unsigned long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)getPixelBuffer;
- (unsigned long long)getAllocationThreshold;
- (double)getMaximumBufferAge;
- (unsigned long long)getMinimumBufferCount;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 bufferAttributes:(struct __CFDictionary { } *)a1 poolAttributes:(struct __CFDictionary { } *)a2 error:(id *)a3;

@end
