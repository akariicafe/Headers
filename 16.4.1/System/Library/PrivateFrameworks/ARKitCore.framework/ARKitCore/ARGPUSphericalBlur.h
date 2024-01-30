@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface ARGPUSphericalBlur : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _cubemapBlurPipelineState;
    BOOL _gpuFamilyAtleast4;
}

- (id)init;
- (void).cxx_destruct;
- (id)blurCubemapTexture:(id)a0 roughness:(id)a1 rotation:(struct { void /* unknown type, empty encoding */ x0[3]; })a2;

@end
