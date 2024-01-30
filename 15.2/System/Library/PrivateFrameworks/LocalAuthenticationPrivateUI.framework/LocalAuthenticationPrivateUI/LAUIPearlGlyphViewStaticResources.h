@protocol MTLDepthStencilState, MTLDevice, MTLComputePipelineState, MTLRenderPipelineState;

@interface LAUIPearlGlyphViewStaticResources : NSObject {
    id<MTLDevice> _device;
    struct renderer_shared_state { id<MTLDevice> device; id<MTLDepthStencilState> depth_stencil_state; id<MTLComputePipelineState> tesselation_factor_pipeline; id<MTLRenderPipelineState> tube_pipeline; struct array<id<MTLRenderPipelineState>, 3> { id<MTLRenderPipelineState> __elems_[3]; } begin_cap_pipelines; struct array<id<MTLRenderPipelineState>, 3> { id<MTLRenderPipelineState> __elems_[3]; } end_cap_pipelines; id<MTLComputePipelineState> horizontal_blur_pipeline; id<MTLComputePipelineState> vertical_blur_pipeline; id<MTLComputePipelineState> accumulator_pipeline; } _state;
}

- (const void *)state;
- (void).cxx_destruct;
- (id)init;
- (id)device;
- (id).cxx_construct;
- (id)initWithDevice:(id)a0 state:(const void *)a1;

@end
