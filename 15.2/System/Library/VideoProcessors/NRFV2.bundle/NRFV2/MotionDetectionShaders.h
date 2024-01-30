@protocol MTLComputePipelineState;

@interface MotionDetectionShaders : NSObject {
    id<MTLComputePipelineState> _motionDetectGenClippingMapAndDownscale;
    id<MTLComputePipelineState> _motionDetectGenClippingMapAndDownscaleLinear;
    id<MTLComputePipelineState> _motionDetectGradient;
    id<MTLComputePipelineState> _motionDetectWarp;
    id<MTLComputePipelineState> _motionDetectDilate;
    id<MTLComputePipelineState> _motionDetectDiffGradient;
    id<MTLComputePipelineState> _motionDetectMaxTileAvg;
    id<MTLComputePipelineState> _motionDetectLLDownscale;
    id<MTLComputePipelineState> _motionDetectLL;
    id<MTLComputePipelineState> _motionDetectLLSumReduce;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
