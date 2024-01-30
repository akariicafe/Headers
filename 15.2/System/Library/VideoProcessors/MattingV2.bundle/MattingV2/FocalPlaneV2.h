@class FigMetalContext;
@protocol MTLComputePipelineState, MTLBuffer, MTLDevice;

@interface FocalPlaneV2 : NSObject {
    id<MTLDevice> _device;
    id<MTLComputePipelineState> _disparityRefinementPreprocessingKernel;
    id<MTLComputePipelineState> _minMax0_kernel;
    id<MTLComputePipelineState> _minMax1_kernel;
    id<MTLComputePipelineState> _minMax2_kernel;
    id<MTLComputePipelineState> _calc_kernel;
    FigMetalContext *_metalContext;
}

@property (nonatomic) struct { float left; float top; float width; float height; float zeroShiftPercentile; } config;
@property (readonly, nonatomic) id<MTLBuffer> minMaxAtomic_buf;
@property (readonly, nonatomic) id<MTLBuffer> minMaxResult_buf;
@property (readonly, nonatomic) id<MTLBuffer> zeroShiftResult_buf;

- (void)releaseResources;
- (int)encodeDisparityRefinementPreprocessingOn:(id)a0 alphaTexture:(id)a1 inputDisparityTexture:(id)a2 outputDisparityTexture:(id)a3 configuration:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; unsigned int x10; float x11; })a4;
- (id)initWithMetalContext:(id)a0;
- (int)encodeFocalPlaneCalcOn:(id)a0 disparityTexture:(id)a1;
- (int)encodeMinMaxOn:(id)a0 inputTexture:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (int)allocateResources;
- (int)compileShaders;

@end
