@class VideoMattingMetal, NSString, VideoRelightingMetal, CVAFilterAlphaBlend, NSDictionary, NSObject;
@protocol MTLTexture, CVAVideoPipelineProperties, OS_dispatch_queue, MTLPipelineLibrarySPI, MTLLibrary, CVAVideoPipelinePropertiesSPI, MTLCaptureScope, MTLCommandQueue, MTLDeviceSPI;

@interface CVAPortraitVideoPipeline_Impl : NSObject <CVADisparityPostprocessingVideoPipeline, CVAMattingVideoPipeline, CVAPortraitVideoPipeline> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<CVAVideoPipelinePropertiesSPI> _properties;
    BOOL _treatFixedPointDisparityAsDense;
    BOOL _useSixteenBitPrecisionForDenseStereoDisparityConversion;
    struct __CVBuffer { } *_untransformedCanonicalDisparityPixelBuffer;
    struct __CVPixelBufferPool { } *_canonicalDisparityPixelBufferPool;
    struct VideoPostprocessingParams { BOOL useFaceAsFocus; float faceSizeRatioInFocus; BOOL fillLargeHolesWithBackground; float disparityIntervalInHoleSearch; float backgroundFillMarginFromValidDisparity_px; BOOL useTemporalRejection; } _vmPostprocessingParams;
    struct VideoMattingStaticParams { unsigned int colorWidth; unsigned int colorHeight; unsigned int shiftWidth; unsigned int shiftHeight; unsigned int alphaWidth; unsigned int alphaHeight; int guidedFilterWidth; int guidedFilterHeight; unsigned int kernelSize; float referenceShift; float guidedFilterUnconfidentWeight; float guidedFilterMinDistToDeweight; float alphaMaxLaplacian; float alphaContrastExponent; float shiftFilterColorStd; float shiftFilterUpdateRate; float minimumConfidenceToKeepDisparity; float maximumSimilarityToKeepDisparity; float maxShiftFillingInconsistency; float maxShiftFillingDistFromFg; unsigned int maxDistToPushShiftEdgesFwd; unsigned int maxDistToPushShiftEdgesRev; int shiftPushingBgToFgShiftDifference; float foregroundMaskDilationRadius; float infConvolutionDownsampling; float laplacianLimitingDownsampling; float laplacianLimitingBlurSize; } _vmStaticParams;
    struct VideoMattingDynamicParams { float updateRate; float sdofDeltaCanonicalDisparity; float alphaCoeffFilterColorStd; float alphaGammaExponent; float focusCanonicalDisparity; float backgroundCanonicalDisparity; float thresholdHardness; struct array<float, 3> { float __elems_[3]; } gravity; float alphaMatteDeltaCanonicalDisparity; BOOL doDisparityHoleFilling; } _vmDynamicParams;
    struct DynamicMetaParams { float mattingCoeffUpdateRate; float mattingCoeffUpdateRateFast; float mattingCoeffColorStd; float mattingCoeffColorStdFast; } _vmDynamicMetaParams;
    struct Preferences { BOOL drawFocusMachineState; int overlayShiftOnRendering; int displayFrameTime; int noiseBits; int fNumber_tenths; BOOL bypassGPUProcessing; BOOL bypassCPUProcessing; } _preferences;
    struct unique_ptr<DisparityConversion, std::__1::default_delete<DisparityConversion> > { struct __compressed_pair<DisparityConversion *, std::__1::default_delete<DisparityConversion> > { struct DisparityConversion *__value_; } __ptr_; } _disparityConversion;
    struct unique_ptr<GeometricTransformation, std::__1::default_delete<GeometricTransformation> > { struct __compressed_pair<GeometricTransformation *, std::__1::default_delete<GeometricTransformation> > { struct GeometricTransformation *__value_; } __ptr_; } _disparityGeometricTransformation;
    struct unique_ptr<FocusStatsPostprocessing, std::__1::default_delete<FocusStatsPostprocessing> > { struct __compressed_pair<FocusStatsPostprocessing *, std::__1::default_delete<FocusStatsPostprocessing> > { struct FocusStatsPostprocessing *__value_; } __ptr_; } _focusStatsPostprocessing;
    struct unique_ptr<DisparityAutofocus, std::__1::default_delete<DisparityAutofocus> > { struct __compressed_pair<DisparityAutofocus *, std::__1::default_delete<DisparityAutofocus> > { struct DisparityAutofocus *__value_; } __ptr_; } _disparityAutofocus;
    struct unique_ptr<DisparityStatistics, std::__1::default_delete<DisparityStatistics> > { struct __compressed_pair<DisparityStatistics *, std::__1::default_delete<DisparityStatistics> > { struct DisparityStatistics *__value_; } __ptr_; } _disparityStatistics;
    struct unique_ptr<cva::FocusStateMachine, std::__1::default_delete<cva::FocusStateMachine> > { struct __compressed_pair<cva::FocusStateMachine *, std::__1::default_delete<cva::FocusStateMachine> > { struct FocusStateMachine *__value_; } __ptr_; } _focusStateMachine;
    struct unique_ptr<StageLightStateMachine, std::__1::default_delete<StageLightStateMachine> > { struct __compressed_pair<StageLightStateMachine *, std::__1::default_delete<StageLightStateMachine> > { struct StageLightStateMachine *__value_; } __ptr_; } _stageLightStateMachine;
    struct unique_ptr<SdofStateMachine, std::__1::default_delete<SdofStateMachine> > { struct __compressed_pair<SdofStateMachine *, std::__1::default_delete<SdofStateMachine> > { struct SdofStateMachine *__value_; } __ptr_; } _sdofIntensityStateMachine;
    VideoMattingMetal *_vmAccelerator;
    VideoRelightingMetal *_vrAccelerator;
    CVAFilterAlphaBlend *_filterAlphaBlend;
    struct RetainPtr<__CVBuffer *> { void *m_ptr; } _intermediateRelightSourceBuffer;
    struct RetainPtr<__CVBuffer *> { void *m_ptr; } _intermediateTransitionBufferFrom;
    struct RetainPtr<__CVBuffer *> { void *m_ptr; } _intermediateTransitionBufferTo;
    NSDictionary *_faceKitProcessOutput;
    float _portraitStyleStrength;
    struct TransitionData { BOOL _inTransition; } _transitionData;
    float _referenceLensPosition_um;
    struct CVAPhotoMetalContext { id<MTLDeviceSPI> device; id<MTLCommandQueue> commandQueue; id<MTLLibrary> library; id<MTLPipelineLibrarySPI> pipelineLibrary; id<MTLCaptureScope> captureScope; struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct CVAPerfEndTimeProfilerSet *__value_; } __ptr_; } profiler; BOOL _alreadyInCaptureScope; } _metalContext;
    int _debugGPUCaptureFrameNumber;
    BOOL _debugLogTransition;
    BOOL _debugLogTransitionPrintTrivial01;
    id<MTLTexture> _yuvSourceDownsampledAlias;
}

@property (copy, nonatomic) id<CVAVideoPipelineProperties> videoPipelineProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)drawDisparity:(struct __CVBuffer { } *)a0 onColor:(struct __CVBuffer { } *)a1 canonical:(BOOL)a2 rawShiftInvalidThreshold:(int)a3 focusMachineState:(int)a4 offsetX:(unsigned long long)a5 offsetY:(unsigned long long)a6;
+ (int)pixelBufferPoolCreateWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 pool:(struct __CVPixelBufferPool **)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (int)renderWithRequest:(id)a0 requestTo:(id)a1 mixValue:(float)a2 destinationColorPixelBuffer:(struct __CVBuffer { } *)a3 error:(id *)a4 disparityPostprocessingCompletionHandler:(id /* block */)a5 mattingCompletionHandler:(id /* block */)a6 portraitCompletionHandler:(id /* block */)a7;
- (id).cxx_construct;
- (int)renderWithRequest:(id)a0 disparityPostprocessingCompletionHandler:(id /* block */)a1 mattingCompletionHandler:(id /* block */)a2 portraitCompletionHandler:(id /* block */)a3;
- (int)extractMatteWithRequest:(id)a0 disparityPostprocessingCompletionHandler:(id /* block */)a1 mattingCompletionHandler:(id /* block */)a2;
- (int)postprocessDisparityWithRequest:(id)a0;
- (int)postprocessDisparityWithRequest:(id)a0 disparityPostprocessingCompletionHandler:(id /* block */)a1;
- (id)initWithProperties:(id)a0 error:(id *)a1;
- (BOOL)validateSegmentationPixelBuffer:(struct __CVBuffer { } *)a0 matchFormat:(id)a1 error:(id *)a2;
- (BOOL)validateDisparityPostprocessingRequest:(id)a0 error:(id *)a1;
- (BOOL)validateMattingRequest:(id)a0 error:(id *)a1;
- (BOOL)validatePortraitRequest:(id)a0 error:(id *)a1;
- (id)internal_postprocessDisparityWithRequest:(id)a0 disparityPostprocessingCompletionHandler:(id /* block */)a1 isFinalStage:(BOOL)a2 status:(int *)a3;
- (int)internal_fixFocusPositionWithDisparityPostprocessingRequest:(id)a0;
- (id)internal_extractMatteWithRequest:(id)a0 disparityPostprocessingResult:(id)a1 usePostprocessedDisparity:(BOOL)a2 dilateForegroundMask:(BOOL)a3 gravity:(struct CVAVector { double x0; double x1; double x2; })a4 transitionData:(const struct TransitionData { BOOL x0; } *)a5 mattingCompletionHandler:(id /* block */)a6 isFinalStage:(BOOL)a7 status:(int *)a8;
- (void)internal_renderWithRequest:(id)a0 dstBuffer:(struct __CVBuffer { } *)a1 mattingResult:(id)a2 portraitCompletionHandler:(id /* block */)a3 status:(int *)a4 timestamp:(long long)a5;
- (void)internal_renderStageLightWithRequest:(id)a0 mattingResult:(id)a1 portraitCompletionHandler:(id /* block */)a2 status:(int *)a3;
- (void)internal_relightWithRequest:(id)a0 intermediateSourceBuffer:(struct __CVBuffer { } *)a1 faceKitProcessOutput:(id)a2 portraitStyleStrength:(float)a3 mattingResult:(id)a4 singleCubeData:(id)a5 portraitCompletionHandler:(id /* block */)a6 timestamp:(long long)a7 status:(int *)a8;
- (int)extractMatteWithRequest:(id)a0;
- (int)renderWithRequest:(id)a0;
- (int)renderSingleEffectWithRequest:(id)a0 destinationColorPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2 disparityPostprocessingCompletionHandler:(id /* block */)a3 mattingCompletionHandler:(id /* block */)a4 portraitCompletionHandler:(id /* block */)a5 requestFrom:(id)a6 requestTo:(id)a7;

@end
