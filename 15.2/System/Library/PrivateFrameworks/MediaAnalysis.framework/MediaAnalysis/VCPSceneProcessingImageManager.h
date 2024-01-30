@class NSMutableDictionary;

@interface VCPSceneProcessingImageManager : NSObject {
    NSMutableDictionary *_pixelBufferPools;
}

+ (id)imageManager;

- (int)_createPixelBuffer:(struct __CVBuffer **)a0 withWidth:(unsigned long long)a1 andHeight:(unsigned long long)a2;
- (int)_createPixelBuffer:(struct __CVBuffer **)a0 withColorSpace:(struct CGColorSpace { } *)a1 fromPixelBuffer:(struct __CVBuffer { } *)a2;
- (int)loadFullPixelBuffer:(struct __CVBuffer **)a0 scaledPixelBuffer299:(struct __CVBuffer **)a1 scaledPixelBuffer360:(struct __CVBuffer **)a2 fromImageURL:(id)a3 isPano:(BOOL)a4;
- (int)_pooledPixelBuffer:(struct __CVBuffer **)a0 withDimension:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (int)_createPixelBuffer:(struct __CVBuffer **)a0 withMinorDimension:(unsigned long long)a1 fromFullPixelBuffer:(struct __CVBuffer { } *)a2;
- (void)dealloc;
- (int)scalePixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer **)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (int)fullPixelBuffer:(struct __CVBuffer { } *)a0 toScaledBuffer:(struct __CVBuffer { } *)a1;

@end
