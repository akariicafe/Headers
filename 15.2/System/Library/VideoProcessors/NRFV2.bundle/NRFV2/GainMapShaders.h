@protocol MTLComputePipelineState;

@interface GainMapShaders : NSObject {
    id<MTLComputePipelineState> _gainMapFilter;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
