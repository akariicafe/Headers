@class BWPixelBufferPool, NSMutableDictionary;

@interface BWPhotoDecompressor : NSObject {
    int _poolSize;
    unsigned int _outputPixelFormat;
    BWPixelBufferPool *_outputPixelBufferPool;
    int _outputLargestDimension;
    BOOL _decompressionSetupIsComplete;
    struct __CVBuffer { } *_decompressionPixelBufferPool;
    struct CMPhotoSurfacePool { } *_decompressionSurfacePool;
    struct CMPhotoDecompressionSession { } *_decompressionSession;
    NSMutableDictionary *_decompressionOptions;
    struct opaqueCMFormatDescription { } *_uncompressedFormatDescription;
    BOOL _forceAllocationsFromFigSurfacePool;
}

@property (readonly) BWPixelBufferPool *outputPixelBufferPool;

- (void)flush;
- (void)dealloc;
- (id)initWithOutputPixelBufferPool:(id)a0;
- (id)initWithPoolSize:(int)a0 outputPixelFormat:(unsigned int)a1 outputLargestDimension:(int)a2;
- (struct __CVBuffer { } *)newUncompressedPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)newUncompressedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
