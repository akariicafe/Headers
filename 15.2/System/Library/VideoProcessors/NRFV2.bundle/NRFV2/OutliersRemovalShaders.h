@protocol MTLComputePipelineState;

@interface OutliersRemovalShaders : NSObject {
    id<MTLComputePipelineState> _outiersRemovalFilter;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
