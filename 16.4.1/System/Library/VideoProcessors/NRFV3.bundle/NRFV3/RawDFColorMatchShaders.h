@protocol MTLComputePipelineState;

@interface RawDFColorMatchShaders : NSObject {
    id<MTLComputePipelineState> _kernelRawDFPickRandomSamples;
    id<MTLComputePipelineState> _kernelRawDFColorAdjustmentInplace;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
