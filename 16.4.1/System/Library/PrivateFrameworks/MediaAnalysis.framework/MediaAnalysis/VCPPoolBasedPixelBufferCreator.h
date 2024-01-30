@interface VCPPoolBasedPixelBufferCreator : NSObject {
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pool;
    long long _bufferWidth;
    long long _bufferHeight;
    unsigned int _pixelFormat;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_createPixelBufferPool:(struct __CVPixelBufferPool **)a0 withBufferWidth:(long long)a1 bufferHeight:(long long)a2 andPixelFormat:(unsigned int)a3;
- (int)createPixelBuffer:(struct __CVBuffer **)a0;
- (id)initWithBufferWidth:(long long)a0 bufferHeight:(long long)a1 andPixelFormat:(unsigned int)a2;

@end
