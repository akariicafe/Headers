@interface VCPSceneProcessingImageManager : NSObject {
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pixelBufferPoolBGRA;
}

+ (id)imageManager;

- (void).cxx_destruct;
- (void)dealloc;
- (int)_createPixelBufferPool;
- (int)_createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (int)loadFullPixelBuffer:(struct __CVBuffer **)a0 scaledPixelBuffer:(struct __CVBuffer **)a1 fromImageURL:(id)a2 isPano:(BOOL)a3;
- (id).cxx_construct;

@end
