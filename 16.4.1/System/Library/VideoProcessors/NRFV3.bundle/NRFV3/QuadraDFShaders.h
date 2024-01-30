@protocol MTLComputePipelineState;

@interface QuadraDFShaders : NSObject {
    id<MTLComputePipelineState> _tileAndConvertYUV420toYUV444;
    id<MTLComputePipelineState> _tileAndConvertSyntheticLongRGBtoYUV;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
