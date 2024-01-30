@protocol MTLComputePipelineState;

@interface RawDFZoomShaders : NSObject {
    id<MTLComputePipelineState> _applyMirrorKernel;
    id<MTLComputePipelineState> _applyZoomKernel;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
