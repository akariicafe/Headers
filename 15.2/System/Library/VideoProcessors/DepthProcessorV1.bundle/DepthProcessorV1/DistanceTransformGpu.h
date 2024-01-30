@class FigMetalContext;
@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;

@interface DistanceTransformGpu : NSObject {
    FigMetalContext *_metalCtx;
    id<MTLComputePipelineState> _dtInitKernel;
    id<MTLComputePipelineState> _dtVerticalKernel;
    id<MTLComputePipelineState> _dtHorizontalKernel;
    id<MTLTexture> _tempTexture;
    id<MTLTexture> _maskTexture;
    id<MTLBuffer> _dtScratchBuffers[2];
    unsigned long long _width;
    unsigned long long _height;
}

- (void)releaseResources;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)allocateResources;
- (int)createDTKernels;
- (int)computeDistanceWithTexture:(id)a0 distance:(id)a1 waitForScheduled:(BOOL)a2;
- (id)initWithParameters:(struct { unsigned long long x0; unsigned long long x1; } *)a0 metalContext:(id)a1;
- (int)computeDistanceWithBuffer:(struct __CVBuffer { } *)a0 distance:(struct __CVBuffer { } *)a1 waitForScheduled:(BOOL)a2;

@end
