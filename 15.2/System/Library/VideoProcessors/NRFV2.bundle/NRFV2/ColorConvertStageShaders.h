@protocol MTLComputePipelineState;

@interface ColorConvertStageShaders : NSObject {
    id<MTLComputePipelineState> _convertColor;
    id<MTLComputePipelineState> _convertColorYCbCr;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
