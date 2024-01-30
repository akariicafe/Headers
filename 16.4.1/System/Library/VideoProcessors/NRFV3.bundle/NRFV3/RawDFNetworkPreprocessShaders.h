@protocol MTLComputePipelineState;

@interface RawDFNetworkPreprocessShaders : NSObject {
    id<MTLComputePipelineState> _estimateNoiseAndTileSL;
    id<MTLComputePipelineState> _estimateNoiseAndTileSR;
    id<MTLComputePipelineState> _estimateNoiseAndTileQSR;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
