@class PipelineStatePromise;
@protocol MTLComputePipelineState, MTLDevice, MTLSamplerState, MTLLibrary, MTLCommandQueue, MTLFunction;

@interface MetalFAST9BRIEF : NSObject {
    id<MTLLibrary> _library;
    id<MTLFunction> _response4MapKernel;
    id<MTLFunction> _suppress4MapKernel;
    id<MTLFunction> _compute4HistogramKernel;
    id<MTLFunction> _responseMapKernel;
    id<MTLFunction> _suppressMapKernel;
    id<MTLFunction> _computeHistogramKernel;
    id<MTLFunction> _histogramThresholdKernel;
    id<MTLFunction> _cumulativeSumSimpleKernel;
    id<MTLFunction> _compactMPSBuffersKernel;
    id<MTLComputePipelineState> _histogramThresholdPipelineState;
    id<MTLComputePipelineState> _cumulativeSumSimplePipelineState;
    id<MTLComputePipelineState> _compactMPSBuffersPipelineState;
    id<MTLFunction> _listKeypointsSimpleKernel;
    id<MTLFunction> _listKeypointsKernel;
    id<MTLFunction> _listKeypoints2Kernel;
    id<MTLFunction> _listKeypoints3Kernel;
    id<MTLComputePipelineState> _listKeypointsSimplePipelineState;
    id<MTLComputePipelineState> _listKeypointsPipelineState;
    id<MTLComputePipelineState> _listKeypoints2PipelineState;
    id<MTLComputePipelineState> _listKeypoints3PipelineState;
    id<MTLFunction> _refineKeypointKernel;
    id<MTLFunction> _extractORBKernel;
    id<MTLFunction> _boxBlurKernel;
    id<MTLFunction> _boxBlurKernel_R8;
    id<MTLComputePipelineState> _refineKeypointPipelineState;
    id<MTLComputePipelineState> _extractORBPipelineState;
    id<MTLComputePipelineState> _boxBlurPipelineState;
    id<MTLComputePipelineState> _boxBlurR8PipelineState;
    id<MTLFunction> _gaussianishBlurKernel;
    id<MTLSamplerState> _clampedLinearNonNormSamplerState;
    PipelineStatePromise *_pipelineStates;
    struct __CVMetalTextureCache { } *_textureCache;
}

@property (readonly, retain) id<MTLDevice> device;
@property (readonly, retain) id<MTLCommandQueue> queue;

+ (id)_createMTLBufferFromRects:(id)a0 device:(id)a1 storageMode:(unsigned long long)a2 maxRectWidth:(unsigned long long *)a3 maxRectHeight:(unsigned long long *)a4;
+ (id)_createMTLBufferFromRectRegionsDesiredKeypoints:(id)a0 device:(id)a1 storageMode:(unsigned long long)a2 maxAllowedDescriptors:(unsigned long long *)a3;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_computeResponseMap_metal:(id)a0 inputTexture:(id)a1 outputTexture:(id)a2 garbagePixelCount:(unsigned int)a3;
- (void)_suppressResponseMap_metal:(id)a0 unsuppressedTexture:(id)a1 suppressedTexture:(id)a2 garbagePixelCount:(unsigned int)a3;
- (void)_generateHistograms_metal:(id)a0 suppressedTexture:(id)a1 tileBuffer:(id)a2 desiredKeypointCountsBuffer:(id)a3 thresholdsBuffer:(id)a4 histogramBuffer:(id)a5 thresholdRangeBuffer:(id)a6 keypointsAtChosenThresholdBuffer:(id)a7 truncatedRegionsBuffer:(id)a8 tileCount:(unsigned long long)a9 maxTileHeight:(unsigned long long)a10;
- (void)_cumulativeSum_metal:(id)a0 expectedPointsBuffer:(id)a1 cumulativePointsBuffer:(id)a2 regionCountBuffer:(id)a3 keypointCountBuffer:(id)a4 regionCount:(unsigned long long)a5;
- (void)_listKeypoints2_metal:(id)a0 suppressedResponseMapTexture:(id)a1 tileBuffer:(id)a2 tileCountBuffer:(id)a3 tileCount:(unsigned long long)a4 thresholdsBuffer:(id)a5 cumulativePointsBuffer:(id)a6 keypointLocationsBuffer:(id)a7 keypointResponsesBuffer:(id)a8 maxRegionHeight:(double)a9;
- (void)_refineKeypoints_metal:(id)a0 inputImageTexture:(id)a1 keypointLocationsBuffer:(id)a2 refinedLocationsBuffer:(id)a3 keypointCountBuffer:(id)a4 keypointCount:(unsigned long long)a5 debugIntermediatesBuffer:(id)a6 cumulativePointsBuffer:(id)a7 tileCountBuffer:(id)a8;
- (void)_boxBlur_metal:(id)a0 inputImageTexture:(id)a1 boxBlurredTexture:(id)a2;
- (void)_extractORB_metal:(id)a0 boxBlurredTexture:(id)a1 keypointLocationsBuffer:(id)a2 outputORBDescriptorBuffer:(id)a3 keypointCountBuffer:(id)a4 keypointCount:(unsigned long long)a5;
- (id)_textureFromPixelBuffer:(struct __CVBuffer { } *)a0 forcedMetalPixelFormat:(unsigned long long)a1 forcedWidthDivisior:(int)a2;
- (void)_gaussianishBlur_metal:(id)a0 inputTexture:(id)a1 outputTexture:(id)a2 offset:(struct CGPoint { double x0; double x1; })a3;
- (void)_ORBDescriptorsFromTextures_part1_metal:(id)a0 inputTexture_RGBA8Uint:(id)a1 inputTexture_R8Unorm:(id)a2 responseBuffer:(id)a3 cumulativeKeypointsPerRegionBuffer:(id)a4 intermediateBuffers:(id)a5;
- (void)_ORBDescriptorsFromTextures_part2_metal:(id)a0 inputTexture_RGBA8Uint:(id)a1 inputTexture_R8Unorm:(id)a2 descriptorBuffer:(id)a3 refinedKeypointsBuffer:(id)a4 cumulativeKeypointsPerRegionBuffer:(id)a5 intermediateBuffers:(id)a6 keypointCount:(int)a7;
- (struct __CVMetalTextureCache { } *)textureCache;
- (BOOL)didFinishInitializationWithTimeout:(double)a0;
- (void)_listKeypointsSimple_metal:(id)a0 suppressedResponseMapTexture:(id)a1 tileBuffer:(id)a2 tileCountBuffer:(id)a3 tileCount:(unsigned long long)a4 thresholdsBuffer:(id)a5 cumulativePointsBuffer:(id)a6 keypointLocationsBuffer:(id)a7 keypointResponsesBuffer:(id)a8 desiredKeypointsBuffer:(id)a9 indexBuffer:(id)a10;
- (void)_listKeypoints3_metal:(id)a0 suppressedResponseMapTexture:(id)a1 tileBuffer:(id)a2 tileCountBuffer:(id)a3 tileCount:(unsigned long long)a4 thresholdsBuffer:(id)a5 cumulativePointsBuffer:(id)a6 keypointLocationsBuffer:(id)a7 keypointResponsesBuffer:(id)a8 maxRegionHeight:(double)a9 maxRegionWidth:(double)a10;
- (void)ORBDescriptorsFromPixelBuffer_metal:(id)a0 inputBuffer:(struct __CVBuffer { } *)a1 descriptorBuffer:(id)a2 refinedKeypointsBuffer:(id)a3 responseBuffer:(id)a4 cumulativeKeypointsPerRegionBuffer:(id)a5 intermediateBuffers:(id)a6;

@end
