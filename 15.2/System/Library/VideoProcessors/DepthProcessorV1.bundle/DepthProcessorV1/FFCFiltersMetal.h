@class FigMetalContext;
@protocol MTLDevice, MTLCommandBuffer, MTLComputePipelineState, MTLCommandQueue;

@interface FFCFiltersMetal : NSObject {
    id<MTLComputePipelineState> _FFCFiltersComputePipelinesStates[2];
    id<MTLDevice> _mtlDevice;
    id<MTLCommandQueue> _mtlCommandQueue;
    id<MTLCommandBuffer> _mtlCommandBuffer;
    FigMetalContext *_mtlContext;
}

- (id)initWithMetalContext:(id)a0;
- (int)_compileShadersWithLibrary:(id)a0;
- (void).cxx_destruct;
- (void)_newCommandBuffer;
- (void)_commitNoWait;
- (int)boxFilterFrom:(id)a0 To:(id)a1;
- (int)erosionFilterFrom:(id)a0 To:(id)a1;

@end
