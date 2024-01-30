@class MPSImageGuidedFilter;
@protocol MTLCommandQueue, MTLDevice;

@interface JFXGuidedFilter : NSObject {
    MPSImageGuidedFilter *_osGuidedFilter;
    BOOL _useCPU;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    struct __CVPixelBufferPool { } *_coeffPool;
    struct __CVMetalTextureCache { } *_textureCache;
    unsigned long long _guideImageWidth;
    unsigned long long _guideImageHeight;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDiameter:(int)a0;
- (void)scaleImage:(struct __CVBuffer { } *)a0 guidanceImage:(struct __CVBuffer { } *)a1 destinationImage:(struct __CVBuffer { } *)a2;

@end
