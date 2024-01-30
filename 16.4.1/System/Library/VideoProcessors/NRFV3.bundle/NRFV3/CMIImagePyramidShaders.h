@protocol MTLComputePipelineState;

@interface CMIImagePyramidShaders : NSObject {
    id<MTLComputePipelineState> _downscale2x;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
