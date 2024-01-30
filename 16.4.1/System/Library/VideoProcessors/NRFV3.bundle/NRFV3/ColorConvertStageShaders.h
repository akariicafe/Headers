@protocol MTLComputePipelineState;

@interface ColorConvertStageShaders : NSObject {
    id<MTLComputePipelineState> _convertColor;
    id<MTLComputePipelineState> _convertColorYCbCr;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
