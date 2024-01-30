@class CMISoftwareFlashRenderingFrameParamsV1, NSString, CMISoftwareFlashRenderingFlagSwapLiteV1, NSMutableDictionary, NSDictionary, CMISoftwareFlashRenderingCoreAnalyticsV1, CMISoftwareFlashRenderingThumbnailV1, CMIExternalMemoryResource, FigMetalContext, CMISoftwareFlashRenderingRegWarpControllerV1;
@protocol CMISoftwareFlashRenderingProcessorDelegate, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface CMISoftwareFlashRenderingProcessorV1 : NSObject <CMISoftwareFlashRenderingProcessor> {
    FigMetalContext *_metalContext;
    BOOL _allocatorSetupComplete;
    BOOL _enableDebuggingOutput;
    struct __CVBuffer { } *_ambientPixelBuffer;
    struct __CVBuffer { } *_flashPixelBuffer;
    struct __CVBuffer { } *_outputPixelBuffer;
    CMISoftwareFlashRenderingFrameParamsV1 *_ambientFrameParams;
    CMISoftwareFlashRenderingFrameParamsV1 *_flashFrameParams;
    struct CMISoftwareFlashRenderingProcessorV1BracketsData { struct CMISoftwareFlashRenderingProcessorV1BracketData { id<MTLTexture> lumaTexture; id<MTLTexture> chromaTexture; void /* unknown type, empty encoding */ YUVOffsets; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalCropRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sensorCropRect; NSDictionary *bracketMetadata; id<MTLTexture> lscGainsTexture; NSDictionary *lscParams; id<MTLTexture> rgbThumbnailTexture; id<MTLTexture> rgbWarpedThumbnailTexture; } brackets[2]; id<MTLTexture> outputLumaTexture; id<MTLTexture> outputChromaTexture; id<MTLTexture> castCorrectedThumbnailTexture; id<MTLTexture> ambientSensorRGBThumbnailTexture; id<MTLTexture> flashSensorRGBThumbnailTexture; id<MTLTexture> whitePointMixingMapThumbnailTexture; id<MTLTexture> whitePointMixingMapDownscaleIntermediateTexture; id<MTLTexture> whitePointMixingMapTexture; id<MTLTexture> spatialWhitePointMapTexture; id<MTLBuffer> mixingWeightsHistogramBuffer; id<MTLBuffer> globalForegroundWhitePointBuffer; id<MTLBuffer> foregroundPercentileDeltaEuvBuffer; id<MTLBuffer> backgroundPercentileDeltaEuvBuffer; id<MTLBuffer> foregroundAnalyticSampleHistogramBuffer; id<MTLBuffer> backgroundAnalyticSampleHistogramBuffer; } _processorData;
    struct CMISoftwareFlashRenderingProcessorV1TuningParameters { int SWFRThumbnailHeight; int SWFRThumbnailWidth; int spatialGridHeight; int spatialGridWidth; float downsampleSharpness; float downsampleSigmaToFilterScale; float clippedGainExponent; float spatialCorrectionStrength; void /* unknown type, empty encoding */ preferenceGainAmbientWhitePoint; void /* unknown type, empty encoding */ preferenceGainStrobeWhitePoint; float preferenceAmbientWhitePointToStrobeAdjustmentFactor; float preferenceStrobeWhitePointToAmbientAdjustmentFactor; float cropRectOverScanFudgeFactor; float cropRectOverScanFudgeFactorExtreme; float cropRectOverScanFudgeFactorExtremeThresholdWidth; float cropRectOverScanFudgeFactorExtremeThresholdHeight; float globalWhitePointForegroundPercentile; int globalWhitePointNumHistogramBins; int castStrengthMetricNumHistogramBins; float castStrengthMetricMaxDeltaEuv; float castStrengthMetricMinSampleRatio; float castStrengthMetricSummaryPercentile; } _processorTuningParameters;
    CMISoftwareFlashRenderingThumbnailV1 *_thumbnailProcessor;
    CMISoftwareFlashRenderingFlagSwapLiteV1 *_flagSwapLiteProcessor;
    CMISoftwareFlashRenderingRegWarpControllerV1 *_regWarpController;
    CMISoftwareFlashRenderingCoreAnalyticsV1 *_coreAnalyticsProcessor;
    BOOL _isSetupTuningParametersDone;
}

@property (weak, nonatomic) id<CMISoftwareFlashRenderingProcessorDelegate> delegate;
@property (retain, nonatomic) struct __CVBuffer { } *outputImagePixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *outputImageMetadata;
@property (retain, nonatomic) struct __CVBuffer { } *linearOutputImagePixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *linearOutputImageMetadata;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (int)resetState;
- (int)setup;
- (int)finishProcessing;
- (int)prepareToProcess:(unsigned int)a0;
- (void)dealloc;
- (int)purgeResources;
- (int)process;
- (void).cxx_destruct;
- (int)addFrame:(struct __CVBuffer { } *)a0 metadata:(id)a1 frameType:(unsigned int)a2 frameParams:(id)a3;
- (id)externalMemoryDescriptorForConfiguration:(id)a0;

@end
