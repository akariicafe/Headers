@class BWPixelBufferPool, NSMutableDictionary;

@interface BWPhotoDecompressor : NSObject {
    int _poolSize;
    unsigned int _outputPixelFormat;
    BWPixelBufferPool *_outputPixelBufferPool;
    BOOL _decompressionSetupIsComplete;
    struct __CVBuffer { } *_decompressionPixelBufferPool;
    struct FigPhotoSurfacePool { } *_decompressionSurfacePool;
    struct FigPhotoDecompressionSession { } *_decompressionSession;
    NSMutableDictionary *_decompressionOptions;
    struct opaqueCMFormatDescription { } *_uncompressedFormatDescription;
    BOOL _forceAllocationsFromFigSurfacePool;
}

@property (readonly) BWPixelBufferPool *outputPixelBufferPool;

- (void)_releaseResources;
- (id)initWithPoolSize:(int)a0 outputPixelFormat:(unsigned int)a1;
- (struct __CVBuffer { } *)newUncompressedPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (id)_initWithPoolSize:(int)a0 outputPixelFormat:(unsigned int)a1 outputPixelBufferPool:(id)a2;
- (struct __CVBuffer { } *)_newUncompressedPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 pixelBufferTrackingTag:(id)a1;
- (int)_setupResources;
- (void)_setCVColorProperties:(struct __CVBuffer { } *)a0 fromSourceBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (struct opaqueCMSampleBuffer { } *)_newUncompressedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 pixelBufferTrackingTag:(id)a1;
- (int)_setupDecompressionSurfacePool;
- (int)_setupDecompressionSession;
- (int)_setupDecompressionOptions;
- (id)initWithOutputPixelBufferPool:(id)a0;
- (struct opaqueCMSampleBuffer { } *)newUncompressedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
