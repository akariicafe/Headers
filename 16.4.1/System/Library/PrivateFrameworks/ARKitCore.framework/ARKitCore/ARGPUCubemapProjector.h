@protocol MTLDevice, MTLDepthStencilState, MTLCommandQueue, MTLRenderPipelineState;

@interface ARGPUCubemapProjector : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLRenderPipelineState> _cubemapPipelineStateSRGB_BGRA;
    id<MTLRenderPipelineState> _cubemapPipelineStateSRGB_RGBA;
    id<MTLRenderPipelineState> _cubemapPipelineStateHDR;
    id<MTLDepthStencilState> _cubemapDepthState;
}

+ (id)createCubemap:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)projectToCube:(id)a0 transformWorldFromCube:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 meshes:(id)a2 blend:(BOOL)a3;

@end
