@protocol MTLComputePipelineState;

@interface SIAbs : NSObject {
    id<MTLComputePipelineState> _computeAbs;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _threadGroupSize;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (id)initWithFactory:(id)a0;
- (void)encodeInPlaceToCommandBuffer:(id)a0 texture:(id)a1;

@end
