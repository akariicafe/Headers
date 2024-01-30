@protocol MTLDepthStencilState, MTLDevice, MTLComputePipelineState, MTLRenderPipelineState;

@interface LAUIPearlGlyphViewStaticResources : NSObject {
    id<MTLDevice> _device;
    struct renderer_shared_state { id<MTLDevice> device; id<MTLDepthStencilState> depth_stencil_state; id<MTLComputePipelineState> tesselation_factor_pipeline; id<MTLRenderPipelineState> tube_pipeline; struct array<id<MTLRenderPipelineState>, 3> { id<MTLRenderPipelineState> __elems_[3]; } begin_cap_pipelines; struct array<id<MTLRenderPipelineState>, 3> { id<MTLRenderPipelineState> __elems_[3]; } end_cap_pipelines; id<MTLComputePipelineState> horizontal_blur_pipeline; id<MTLComputePipelineState> vertical_blur_pipeline; id<MTLComputePipelineState> accumulator_pipeline; } _state;
}

- (id)init;
- (void).cxx_destruct;
- (id)device;
- (id).cxx_construct;
- (struct renderer_shared_state { id x0; id x1; id x2; id x3; struct array<id<MTLRenderPipelineState>, 3> { id x0[3]; } x4; struct array<id<MTLRenderPipelineState>, 3> { id x0[3]; } x5; id x6; id x7; id x8; } *)state;
- (id)initWithDevice:(id)a0 state:(struct renderer_shared_state { id x0; id x1; id x2; id x3; struct array<id<MTLRenderPipelineState>, 3> { id x0[3]; } x4; struct array<id<MTLRenderPipelineState>, 3> { id x0[3]; } x5; id x6; id x7; id x8; })a1;

@end
