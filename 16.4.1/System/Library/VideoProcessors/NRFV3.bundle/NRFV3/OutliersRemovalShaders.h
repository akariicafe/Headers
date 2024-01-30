@protocol MTLComputePipelineState;

@interface OutliersRemovalShaders : NSObject {
    id<MTLComputePipelineState> _outiersRemovalFilter;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
