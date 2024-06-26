@class NSArray, FigCaptureSourceCompanionFormat;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat {
    NSArray *_frontEndScalerCompanionFormats;
    FigCaptureSourceCompanionFormat *_nonSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_fullBinSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_depthCompanionFormat;
    FigCaptureSourceVideoFormat *_cinematicFramingFormat;
    FigCaptureSourceVideoFormat *_geometricDistortionCorrectionFormat;
    NSArray *_supportedDepthDataFormats;
    BOOL _isStreamingDisparitySupported;
    BOOL _isStreamingDepthSupported;
    BOOL _isStillImageDisparitySupported;
    BOOL _isStillImageDepthSupported;
}

@property (readonly) int formatIndex;
@property (readonly) struct { int x0; int x1; } dimensions;
@property (readonly) struct { int x0; int x1; } sensorDimensions;
@property (readonly) struct { int x0; int x1; } previewDimensions;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float fieldOfView;
@property (readonly) float geometricDistortionCorrectedFieldOfView;
@property (readonly) struct { int x0; int x1; } geometricDistortionCorrectedNativeDimensions;
@property (readonly, getter=isBinned) BOOL binned;
@property (readonly) int stabilizationTypeForTimelapse;
@property (readonly) int stabilizationTypeOverrideForStandard;
@property (readonly) int stabilizationTypeOverrideForCinematic;
@property (readonly) float stabilizationOverscanPercentageOverrideForStandard;
@property (readonly) float stabilizationOverscanPercentageOverrideForCinematic;
@property (readonly) float cinematicStabilizationExtendedLookAheadDuration;
@property (readonly) BOOL distortionCompensationSupported;
@property (readonly, getter=isZoomSupported) BOOL zoomSupported;
@property (readonly) float maxZoomFactor;
@property (readonly) float zoomFactorUpscaleThreshold;
@property (readonly, getter=isZoomDynamicSensorCropSupported) BOOL zoomDynamicSensorCropSupported;
@property (readonly) int rawBitDepth;
@property (readonly) float minISO;
@property (readonly) float maxISO;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } minExposureDuration;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } maxExposureDuration;
@property (readonly) BOOL hasSensorHDRCompanionIndex;
@property (readonly) BOOL prefersSensorHDREnabled;
@property (readonly, getter=isSIFRSupported) BOOL SIFRSupported;
@property (readonly, getter=isLowLightVideoCaptureSupported) BOOL lowLightVideoCaptureSupported;
@property (readonly, getter=isVariableFrameRateVideoCaptureSupported) BOOL variableFrameRateVideoCaptureSupported;
@property (readonly, getter=isVisionDataDeliverySupported) BOOL visionDataDeliverySupported;
@property (readonly, getter=isCameraCalibrationDataDeliverySupported) BOOL cameraCalibrationDataDeliverySupported;
@property (readonly, getter=isSecondaryScalerUnavailable) BOOL secondaryScalerUnavailable;
@property (readonly, getter=isStudioAndContourPreviewRenderingSupported) BOOL studioAndContourPreviewRenderingSupported;
@property (readonly, getter=isStagePreviewRenderingSupported) BOOL stagePreviewRenderingSupported;
@property (readonly, getter=isWideAsStatsMasterEnabled) BOOL wideAsStatsMasterEnabled;
@property (readonly) BOOL is10bitVideoFormat;
@property (readonly) BOOL is422VideoFormat;
@property (readonly, getter=isVideoHDRFusionSupported) BOOL videoHDRFusionSupported;
@property (readonly, getter=isVideoSTFSupported) BOOL videoSTFSupported;
@property (readonly) int autoFocusSystem;
@property (readonly, getter=isPhotoFormat) BOOL photoFormat;
@property (readonly, getter=isHighResPhotoFormat) BOOL highResPhotoFormat;
@property (readonly, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (readonly, getter=isSupplementalTimeOfFlightCameraSupported) BOOL supplementalTimeOfFlightCameraSupported;
@property (readonly) BOOL configureForStillImageStabilizationSupport;
@property (readonly) BOOL configureForSpatialOverCaptureSupport;
@property (readonly) BOOL configureForDigitalFlashSupport;
@property (readonly, getter=isIrisSupported) BOOL irisSupported;
@property (readonly, getter=isIrisVideoStabilizationSupported) BOOL irisVideoStabilizationSupported;
@property (readonly, getter=isHDRSupported) BOOL hdrSupported;
@property (readonly, getter=isGNRHDRSupported) BOOL gnrHDRSupported;
@property (readonly, getter=isHDROriginalImageDeliverySupported) BOOL hdrOriginalImageDeliverySupported;
@property (readonly, getter=isHighResStillImageSupported) BOOL highResStillImageSupported;
@property (readonly, getter=isQuadraHighResStillImageSupported) BOOL quadraHighResStillImageSupported;
@property (readonly, getter=isStereoFusionSupported) BOOL stereoFusionSupported;
@property (readonly, getter=isISPMultiBandNoiseReductionSupported) BOOL ispMultiBandNoiseReductionSupported;
@property (readonly, getter=isStillImageISPMultiBandNoiseReductionSupported) BOOL stillImageISPMultiBandNoiseReductionSupported;
@property (readonly, getter=isZeroShutterLagSupported) BOOL zeroShutterLagSupported;
@property (readonly) BOOL zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
@property (readonly, getter=isRedEyeReductionSupported) BOOL redEyeReductionSupported;
@property (readonly, getter=isDigitalFlashSupported) BOOL digitalFlashSupported;
@property (readonly) NSArray *digitalFlashDetectedObjectTypes;
@property (readonly, getter=isDeepFusionSupported) BOOL deepFusionSupported;
@property (readonly, getter=isLearnedNRSupported) BOOL learnedNRSupported;
@property (readonly, getter=isResponsiveShutterSupported) BOOL responsiveShutterSupported;
@property (readonly, getter=isSemanticStyleRenderingSupported) BOOL semanticStyleRenderingSupported;
@property (readonly, getter=isHighPhotoQualitySupported) BOOL highPhotoQualitySupported;
@property (readonly) struct { int x0; int x1; } highResStillImageDimensions;
@property (readonly) struct { int x0; int x1; } stillImageGDCInDCProcessorOutputCropDimensions;
@property (readonly, getter=isWideColorSupported) BOOL wideColorSupported;
@property (readonly) NSArray *supportedColorSpaces;
@property (readonly) unsigned int supportedRawPixelFormat;
@property (readonly) unsigned int internalDemosaicedRawPixelFormat;
@property (readonly) unsigned int supportedDemosaicedRawPixelFormat;
@property (readonly) float defaultSimulatedAperture;
@property (readonly) float minSimulatedAperture;
@property (readonly) float maxSimulatedAperture;
@property (readonly) float defaultPortraitLightingEffectStrength;
@property (readonly) float minPortraitLightingEffectStrength;
@property (readonly) float maxPortraitLightingEffectStrength;
@property (readonly, getter=isSIFRStillImageCaptureWithDepthDataDisabled) BOOL sifrStillImageCaptureWithDepthDataDisabled;
@property (readonly, getter=isVideoSTFMetadataEnabled) BOOL videoSTFMetadataEnabled;
@property (readonly, getter=isHighProfileH264Supported) BOOL highProfileH264Supported;
@property (readonly) NSArray *AVCaptureSessionPresets;
@property (readonly, getter=isStreamingDisparitySupported) BOOL streamingDisparitySupported;
@property (readonly, getter=isStreamingDepthSupported) BOOL streamingDepthSupported;
@property (readonly, getter=isStillImageDisparitySupported) BOOL stillImageDisparitySupported;
@property (readonly, getter=isStillImageDepthSupported) BOOL stillImageDepthSupported;
@property (readonly) NSArray *supportedDepthDataFormats;
@property (readonly) float minZoomFactorForDepthDataDelivery;
@property (readonly) float maxZoomFactorForDepthDataDelivery;
@property (readonly, getter=isMomentCaptureMovieRecordingSupported) BOOL momentCaptureMovieRecordingSupported;
@property (readonly, getter=isSpatialOverCaptureSupported) BOOL spatialOverCaptureSupported;
@property (readonly) float spatialOverCapturePercentage;
@property (readonly, getter=isNonDestructiveCropSupported) BOOL nonDestructiveCropSupported;
@property (readonly, getter=isDeferredPhotoProcessingSupported) BOOL deferredPhotoProcessingSupported;
@property (readonly, getter=isMultiCamSupported) BOOL multiCamSupported;
@property (readonly) float hardwareCost;
@property (readonly) int baseSensorPowerConsumption;
@property (readonly) int variableSensorPowerConsumption;
@property (readonly) int ispPowerConsumption;
@property (readonly, getter=isGlobalToneMappingSupported) BOOL globalToneMappingSupported;
@property (readonly, nonatomic) BOOL intelligentDistortionCorrectionSupported;
@property (readonly, getter=isCinematicFramingSupported) BOOL cinematicFramingSupported;
@property (readonly) FigCaptureSourceVideoFormat *cinematicFramingFormat;
@property (readonly, getter=isCinematicVideoSupported) BOOL cinematicVideoSupported;
@property (readonly) FigCaptureSourceVideoFormat *geometricDistortionCorrectionFormat;
@property (readonly, getter=isBackgroundBlurSupported) BOOL backgroundBlurSupported;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (float)aeMaxGain;
- (int)deepZoomVersion;
- (struct { int x0; int x1; })sensorCropDimensions;
- (BOOL)temporalNoiseReductionBand0Disabled;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (float)depthDataMaxIntegrationTimeOverride;
- (struct { int x0; int x1; })fesInputCropDimensions;
- (BOOL)sushiRawBlackBorderingEnabled;
- (struct { int x0; int x1; })postGDCCropDimensions;
- (unsigned int)mediaType;
- (int)stillImageNoiseReductionAndStabilizationScheme;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxVisibleSensorRect;
- (BOOL)usesPacked10BitFirmwareStillImageOutputPixelFormat;
- (struct { int x0; int x1; })cinematicFramingOutputDimensions;
- (int)semanticRenderingVersion;
- (BOOL)isStillImageISPChromaNoiseReductionEnabled;
- (id)rawLensShadingCorrection;
- (BOOL)ispChromaNoiseReductionEnabled;
- (BOOL)temporalNoiseReductionRawEnabled;
- (struct CGSize { double x0; double x1; })stabilizationOverscanFromSensorForFESCropDimensions:(struct { int x0; int x1; })a0 preferSIFRFormat:(BOOL)a1 geometricDistortionCorrection:(BOOL)a2 useFESCompanionIndex:(BOOL)a3;
- (int)horizontalSensorBinningFactor;
- (float)depthDataAEMaxGain;
- (BOOL)isCompatibleWithInfraredFormat:(id)a0;
- (int)dcProcessorVersion;
- (BOOL)isValidDerivedSourceFormatForUnderlyingFormat:(id)a0;
- (float)defaultMinFrameRateForSessionPreset:(id)a0;
- (struct { int x0; int x1; })preGDCSensorCropDimensions;
- (BOOL)capturesStillsFromVideoStream;
- (id)initWithXPCEncoding:(id)a0;
- (int)semanticDevelopmentVersion;
- (BOOL)isGainMapSupported;
- (BOOL)isCaptureTimePhotoCurationSupported;
- (float)defaultMaxFrameRateForSessionPreset:(id)a0;
- (struct { int x0; int x1; })nativeDimensions;
- (struct { int x0; int x1; })cropDimensionsForFES;
- (BOOL)isStabilizationModeSupported:(int)a0;
- (int)temporalNoiseReductionMode;
- (int)verticalSensorBinningFactor;
- (id)initWithCoder:(id)a0;
- (struct opaqueCMFormatDescription { } *)formatDescription;
- (id)initWithFigCaptureStreamFormatDictionary:(id)a0;
- (int)redEyeReductionVersion;
- (float)lowLightVideoAEMaxGain;
- (int)greenGhostMitigationVersion;
- (id)nonSIFRCompanionFormat;
- (BOOL)isContentAwareAWBSupported;
- (int)sensorHDRCompanionIndex;
- (struct { int x0; int x1; })sourceCropAspectRatio;
- (int)previewImageQueueSyncStrategy;
- (id)frontEndScalerCompanionFormats;
- (void)dealloc;
- (id)fullBinSIFRCompanionFormat;
- (BOOL)stillImageGeometricDistortionCorrectionInDCProcessorSupported;
- (BOOL)isContentAwareEnhancementSupported;
- (id)depthCompanionFormat;
- (int)configureForGreenGhostMitigationVersion;
- (BOOL)sushiRawSupported;
- (BOOL)isWideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled;
- (int)maxIntegrationTimeOverride;
- (int)fesBinningFactorHorizontal;

@end
