@protocol MTLDevice, MTLLibrary, MTLBuffer, MTLComputePipelineState;

@interface FocalPlane : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _disparityRefinementPreprocessingKernel;
    id<MTLComputePipelineState> _minMax0_kernel;
    id<MTLComputePipelineState> _minMax1_kernel;
    id<MTLComputePipelineState> _minMax2_kernel;
    id<MTLComputePipelineState> _calc_kernel;
}

@property (nonatomic) struct { float left; float top; float width; float height; float zeroShiftPercentile; } config;
@property (readonly, nonatomic) id<MTLBuffer> minMaxAtomic_buf;
@property (readonly, nonatomic) id<MTLBuffer> minMaxResult_buf;
@property (readonly, nonatomic) id<MTLBuffer> zeroShiftResult_buf;

- (int)_compileShadersWithLibrary:(id)a0;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (void)releaseResources;
- (int)allocateResources;
- (int)encodeFocalPlaneCalcOn:(id)a0 disparityTexture:(id)a1;
- (void)dealloc;
- (int)encodeMinMaxOn:(id)a0 inputTexture:(id)a1;
- (int)encodeDisparityRefinementPreprocessingOn:(id)a0 alphaTexture:(id)a1 inputDisparityTexture:(id)a2 outputDisparityTexture:(id)a3 configuration:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; unsigned int x10; })a4;
- (void).cxx_destruct;

@end
