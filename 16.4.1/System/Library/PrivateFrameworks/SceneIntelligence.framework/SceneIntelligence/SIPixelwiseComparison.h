@class NSString;
@protocol MTLComputePipelineState;

@interface SIPixelwiseComparison : NSObject {
    id<MTLComputePipelineState> _computePipeline;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _threadGroupSize;
    NSString *_comparisonLabel;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 value:(float)a2 destinationTexture:(id)a3;
- (id)initWithFactory:(id)a0 comparisonOperator:(long long)a1;

@end
