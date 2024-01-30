@class BWPixelBufferPool, BWVideoFormat;

@interface FigCapturePixelConverter : NSObject {
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    BOOL _alwaysUseHardwareForConversion;
    BWPixelBufferPool *_pool;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolCapacity;
    BOOL _prefetchPool;
}

@property (readonly, nonatomic) BWVideoFormat *outputFormat;

+ (void)initialize;

- (int)updateOutputPixelFormat:(unsigned int)a0 dimensions:(struct { int x0; int x1; })a1 poolCapacity:(int)a2 colorSpaceProperties:(int)a3 alwaysUseHardwareForConversion:(BOOL)a4;
- (int)convertSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSampleBuffer:(struct opaqueCMSampleBuffer **)a2;
- (id)init;
- (int)convertPixelBuffer:(struct __CVBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 allocateOutputFromBufferPool:(BOOL)a2 outputPixelBuffer:(struct __CVBuffer **)a3;
- (id)initWithPrefetchPool:(BOOL)a0;
- (void)dealloc;

@end
