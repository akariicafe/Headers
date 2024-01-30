@class FigMetalContext;
@protocol MTLComputePipelineState, MTLBuffer;

@interface DepthProcUtilitiesMetal : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _kernelPreprocessData;
    id<MTLComputePipelineState> _kernelPostErosion;
    id<MTLComputePipelineState> _kernelGetFarDistanceMin;
    id<MTLComputePipelineState> _kernelSetFarDistance;
    id<MTLComputePipelineState> _kernelPostFbs;
    id<MTLComputePipelineState> _kernelPrepareFbsPart1;
    id<MTLComputePipelineState> _kernelPrepareFbsPart2;
    id<MTLComputePipelineState> _kernelDisparityDataOverride;
    id<MTLComputePipelineState> _kernelmakeForegroundMask;
    id<MTLComputePipelineState> _kernelBuildFindMask;
    id<MTLBuffer> _setFarDistFurthestDisparityArray;
}

- (void)releaseResources;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)allocateResources;
- (int)preprocessData:(float)a0 inputDisparity:(id)a1 outputDisparity:(id)a2 outputConfidence:(id)a3;
- (int)postErosion:(id)a0 outputConfidence:(id)a1 outputDisparity:(id)a2;
- (int)setFarWithDistance:(struct { float x0; float x1; float x2; })a0 inputDistanceTransformMap:(id)a1 inputLandmarkProcessingDisparity:(id)a2 inputBodyProbabilityMap:(id)a3 inoutConfidenceMap:(id)a4 outputDistanceTransformDisparity:(id)a5;
- (id)prepareForFbs:(id)a0 toF32:(id)a1 confidenceInF16:(id)a2 confidenceOutF32:(id)a3;
- (int)postFbs:(id)a0 toF16:(id)a1 prepareBuffer:(id)a2;
- (int)disparityDataOverrideOnGpu:(id)a0 To:(id)a1;
- (int)makeForegroundMask:(id)a0 bodyProbabilityMap:(id)a1 validForegroundMask:(id)a2;
- (int)buildFindMask:(id)a0 value:(float)a1 outputBuffer:(id)a2;

@end
