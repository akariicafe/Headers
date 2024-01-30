@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface CMISoftwareFlashRenderingFlagSwapLiteV1 : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _convertRGBtoNormSensorSpacePipelineState;
    id<MTLComputePipelineState> _createWhitePointMixingMapPipelineState;
    id<MTLComputePipelineState> _downsampleWhitePointMixingMapHorizontalPipelineState;
    id<MTLComputePipelineState> _downsampleWhitePointMixingMapVerticalPipelineState;
    id<MTLComputePipelineState> _calculateFlagSwapLitePipelineState;
    id<MTLComputePipelineState> _zeroOutputTexturePipelineState;
    id<MTLComputePipelineState> _applyFlagSwapLitePipelineState;
    id<MTLComputePipelineState> _calculateMixingWeightsHistogramPipelineState;
    id<MTLComputePipelineState> _calculateGlobalForegroundWhitePointPipelineState;
}

- (int)purgeResources;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)encodeDownsampleWhitePointMixingMap:(id)a0 whitePointMixingMapTexture:(id)a1 whitePointMixingMapDownscaleIntermediateTexture:(id)a2 sharpness:(float)a3 sigmaToFilterScale:(float)a4 outputWhitePointMixingMapTexture:(id)a5;
- (int)encodeFlagSwapLiteApply:(id)a0 flashLumaTexture:(SEL)a1 flashChromaTexture:(id)a2 flashYUVOffsets:(id)a3 spatialWhitePointMapTexture:(id)a4 flashWhitePoint:(id)a5 clippedGainScale:(float)a6 clippedGainExponent:(float)a7 spatialCorrectionStrength:(float)a8 outputLumaTexture:(id)a9 outputChromaTexture:(id)a10 cropRect:(struct CMISoftwareFlashRenderingCropRect { int x0; int x1; int x2; int x3; })a11;
- (int)encodeFlagSwapLiteCalculate:(id)a0 whitePointMixingMapTexture:(SEL)a1 ambientWhitePoint:(id)a2 strobeWhitePoint:(id)a3 outputSpatialWhitePointMapTexture:(id)a4;
- (int)encodeFlagSwapLiteTo:(id)a0 flashLumaTexture:(SEL)a1 flashChromaTexture:(id)a2 flashYUVOffsets:(id)a3 ambientRGBThumbnail:(id)a4 flashRGBThumbnail:(id)a5 ambientLSCGains:(id)a6 flashLSCGains:(id)a7 ambientLSCMaxGain:(id)a8 flashLSCMaxGain:(float)a9 ambientWhitePoint:(float)a10 flashWhitePoint:(float)a11 strobeWhitePoint:(float)a12 ambientWhitePointTuned:(float)a13 strobeWhitePointTuned:(float)a14 ambientIntegrationTime:(float)a15 flashIntegrationTime:(float)a16 downsampleSharpness:(id)a17 downsampleSigmaToFilterScale:(id)a18 clippedGainExponent:(id)a19 spatialCorrectionStrength:(id)a20 ambientSensorRGBThumbnailTexture:(id)a21 flashSensorRGBThumbnailTexture:(id)a22 whitePointMixingMapThumbnailTexture:(id)a23 whitePointMixingMapDownscaleIntermediateTexture:(id)a24 whitePointMixingMapTexture:(struct CMISoftwareFlashRenderingCropRect { int x0; int x1; int x2; int x3; })a25 spatialWhitePointMapTexture:(struct CMISoftwareFlashRenderingLSCCropRect { struct CMISoftwareFlashRenderingCropRect { int x0; int x1; int x2; int x3; } x0; BOOL x1; })a26 outputLumaTexture:(void /* unknown type, empty encoding */)a27 outputChromaTexture:(void /* unknown type, empty encoding */)a28 cropRect:(void /* unknown type, empty encoding */)a29 LSCCropRect:(void /* unknown type, empty encoding */)a30 fullSizeDimensions:(void /* unknown type, empty encoding */)a31;
- (int)encodeGlobalForegroundWhitePointCalculate:(id)a0 foregroundPercentile:(SEL)a1 ambientWhitePoint:(id)a2 flashWhitePoint:(float)a3 strobeWhitePoint:(float)a4 spatialCorrectionStrength:(id)a5 whitePointMixingMapTexture:(unsigned int)a6 numHistogramBins:(id)a7 mixingWeightsHistogramBuffer:(id)a8 outputGlobalForegroundWhitePointBuffer:(void /* unknown type, empty encoding */)a9;
- (int)encodeGlobalForegroundWhitePointTo:(id)a0 foregroundPercentile:(SEL)a1 ambientWhitePoint:(id)a2 flashWhitePoint:(float)a3 strobeWhitePoint:(float)a4 spatialCorrectionStrength:(id)a5 whitePointMixingMapTexture:(unsigned int)a6 numHistogramBins:(id)a7 mixingWeightsHistogramBuffer:(id)a8 outputGlobalForegroundWhitePointBuffer:(void /* unknown type, empty encoding */)a9;
- (int)encodeMixingWeightsHistogramCalculate:(id)a0 whitePointMixingMapTexture:(id)a1 numHistogramBins:(unsigned int)a2 outputMixingWeightsHistogramBuffer:(id)a3;
- (int)encodeRGBtoNormSensorSpaceConvert:(id)a0 inputRGBTexture:(SEL)a1 appliedWhitePoint:(id)a2 integrationTimeScale:(id)a3 lscGains:(float)a4 lscMaxGain:(id)a5 outputSensorRGBTexture:(float)a6 LSCCropRect:(id)a7 fullSizeDimensions:(struct CMISoftwareFlashRenderingLSCCropRect { struct CMISoftwareFlashRenderingCropRect { int x0; int x1; int x2; int x3; } x0; BOOL x1; })a8;
- (int)encodeWhitePointMixingMapCreate:(id)a0 ambientSensorRGBThumbnailTexture:(SEL)a1 flashSensorRGBThumbnailTexture:(id)a2 ambientWhitePoint:(id)a3 strobeWhitePoint:(id)a4 outputWhitePointMixingMapTexture:(id)a5;
- (int)encodeZeroOutputTexture:(id)a0 outputLumaTexture:(id)a1 outputChromaTexture:(id)a2;

@end
