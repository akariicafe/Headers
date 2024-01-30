@class MPSImageStatisticsMean;
@protocol MTLCommandQueue, MTLDeviceSPI, MTLTexture;

@interface FTVTScaler : NSObject <FTScaling> {
    id<MTLDeviceSPI> _device;
    id<MTLCommandQueue> _commandQueue;
    MPSImageStatisticsMean *_meanFilter;
    id<MTLTexture> _meanTexture;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCommandQueue:(id)a0;
- (BOOL)scaleSourceBuffer:(struct __CVBuffer { } *)a0 toDestinationBuffer:(struct __CVBuffer { } *)a1 sourceROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 destinationROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)scaleSourceBuffer:(struct __CVBuffer { } *)a0 toDestinationBuffer:(struct __CVBuffer { } *)a1 sourceROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 destinationROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 mean:(void *)a4;

@end
