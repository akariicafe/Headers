@protocol MTLComputePipelineState;

@interface GainMapShaders : NSObject {
    id<MTLComputePipelineState> _gainMapFilter;
    id<MTLComputePipelineState> _gainMapDownsampledFilter;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
