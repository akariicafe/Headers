@protocol MTLComputePipelineState;

@interface RawDFDownsampleShaders : NSObject {
    id<MTLComputePipelineState> _kernelRawDFDownsample;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
