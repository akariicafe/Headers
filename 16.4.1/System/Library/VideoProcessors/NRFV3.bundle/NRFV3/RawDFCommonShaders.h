@protocol MTLComputePipelineState;

@interface RawDFCommonShaders : NSObject {
    id<MTLComputePipelineState> _yuvCopyAndBias;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
