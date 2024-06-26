@class BWFigVideoCaptureStream, NSMutableDictionary, NSDictionary, BWPixelBufferPool, BWFigCaptureStream, BWDeferredMetadataCache, NSObject, BWStats, BWMultiStreamCameraSourceNodeConfiguration, BWFigVideoCaptureDevice, NSString, BWDetectedFacesRingBuffer, BWDetectedObjectsInfoRingBuffer, BWMotionDataPreserver, BWFigCaptureISPProcessingSession, NSArray, BWNodeOutput;
@protocol OS_dispatch_group, OS_dispatch_queue, BWDetectedFacesFilterDelegate;

@interface BWMultiStreamCameraSourceNode : BWSourceNode {
    BWFigVideoCaptureDevice *_captureDevice;
    BWFigCaptureStream *_stream;
    NSArray *_supportedFormats;
    BOOL _supportsDecouplingPrimaryScalerOnly;
    float _pixelsPerMicron;
    float _telePixelsPerMicron;
    unsigned int _bravoShiftCorrectionFlags;
    BOOL _deferMetadataCreation;
    BWDeferredMetadataCache *_deferredMetadataCache;
    NSObject<OS_dispatch_group> *_streamEventNotificationGroup;
    NSObject<OS_dispatch_queue> *_streamEventDispatchQueue;
    BOOL _isInfraredSourceNode;
    int _resolvedFormatIndex;
    struct opaqueCMFormatDescription { } *_depthOutputFormatDescription;
    NSString *_depthEnginePrimaryOutputID;
    BOOL _hardwareDepthFilteringSupported;
    struct opaqueCMFormatDescription { } *_focusPixelDataFormatDescription;
    BOOL _shareStreamingBufferPools;
    struct BWStreamOutputStorage { int type; unsigned int flags; BOOL ready; BOOL enabled; BWNodeOutput *nodeOutput; struct opaqueCMSimpleQueue *simpleQueue; NSObject<OS_dispatch_queue> *bufferServicingQueue; void /* function */ *bufferServicingQueueCallback; struct opaqueCMFormatDescription *cachedFormatDescription; int frameCount; struct { long long value; int timescale; unsigned int flags; long long epoch; } lastEmittedPTS; int retainedBufferCount; BWPixelBufferPool *internalPixelBufferPool; BOOL bufferPoolOwnedByAnotherNode; int bytesPerRowAlignmentRequirement; int planeAlignmentRequirement; unsigned int sensorInterfaceRawPixelFormat; unsigned int sashimiRawPixelFormat; struct { int width; int height; } outputDimensions; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect; BWStats *ioSurfaceCompressionRatioStats; int pixelBufferCompressionType; unsigned long long totalCompressedDataSize; unsigned long long totalUncompressedDataSize; } _outputsStorage[9];
    struct { double centerx; double centery; BOOL lensCoefficientsValid; float lensCoefficients[5]; float gravityFactor; float pixelsPerMicron; BOOL isFrontCamera; } _cameraData;
    BOOL _usePinholeCameraFocalLengthInIntrinsicMatrixCalculation;
    struct { struct { float x; float y; } lastWideSpherePos; struct { float x; float y; } lastTeleSpherePos; struct { float x; float y; } currentTeleSpherePos; struct { float x; float y; } previousTeleSpherePos; BOOL supportAverageSpherePositionKey; } _sphereShiftState;
    BWMotionDataPreserver *_motionDataPreserver;
    NSMutableDictionary *_dutyCycleMetadataCache;
    float _overscanReservedInISPZoom;
    NSString *_previewStreamOutputID;
    struct CGSize { double width; double height; } _previewOutputOverscan;
    NSString *_videoCaptureStreamOutputID;
    NSString *_stillImageStreamOutputID;
    int _firmwareStillImageOutputRetainedBufferCountOverride;
    int _currentFirmwareStillImageOutputRetainedBufferCount;
    struct CGSize { double width; double height; } _onDemandStillOverscan;
    BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
    BWFigCaptureISPProcessingSession *_bayerProcessingSession;
    struct OpaqueFigSampleBufferProcessor { } *_qrmSampleBufferProcessor;
    struct opaqueCMFormatDescription { } *_quadraStillOutputFormatDescription;
    struct opaqueCMSimpleQueue { } *_quadraYUVBufferQueue;
    BOOL _deferBayerProcessingSessionMetadataCreation;
    BWDetectedFacesRingBuffer *_detectedFacesRingBuffer;
    BWDetectedObjectsInfoRingBuffer *_detectedObjectsInfoRingBuffer;
    struct OpaqueVTPixelTransferSession { } *_stillReflectionTransferSession;
    struct opaqueCMFormatDescription { } *_stillReflectionFormatDescription;
    struct OpaqueVTPixelTransferSession { } *_stillReflectionSecondaryTransferSession;
    struct opaqueCMFormatDescription { } *_stillReflectionSecondaryFormatDescription;
    int _previousInfraredCaptureID;
    struct CGPoint { double x; double y; } _previewShift;
    float _previewScaleFactor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _previewShiftLock;
    BWStats *_ioSurfaceCompressionRatioStatsForRaw;
    unsigned long long _totalCompressedDataSizeForRaw;
    unsigned long long _totalUncompressedDataSizeForRaw;
    unsigned int _bufferHeightForRaw;
    BOOL _rawCompressionEnabled;
    struct opaqueCMFormatDescription { } *_visionDataFormatDescription;
    BOOL _discardOutputSampleBuffers;
    BOOL _streamingOutputsEnabled;
    BOOL _adjustOpticalCenterMetadataForSuperWideFullFOV;
    struct CGPoint { double x; double y; } _opticalCenterAdjustmentForSuperWideFullFOV;
}

@property (nonatomic) BOOL keepISPStreamingWhenStopping;
@property (readonly) BWMultiStreamCameraSourceNodeConfiguration *configuration;
@property (copy, nonatomic) NSDictionary *videoCaptureOutputColorInfoOverride;
@property (nonatomic) BOOL videoCaptureOutputPixelBufferAttachmentModificationAllowed;
@property (readonly) BWFigVideoCaptureStream *captureStream;
@property (readonly) BWNodeOutput *previewOutput;
@property (readonly) BWNodeOutput *videoCaptureOutput;
@property (readonly) BWNodeOutput *stillImageOutput;
@property (readonly) BWNodeOutput *detectedObjectsOutput;
@property (readonly) BWNodeOutput *depthOutput;
@property (readonly) BWNodeOutput *pointCloudOutput;
@property (readonly, nonatomic) BOOL previewOutputEnabled;
@property (readonly, nonatomic) BOOL videoCaptureOutputEnabled;
@property (readonly, nonatomic) BOOL stillImageOutputEnabled;
@property (readonly, nonatomic) BOOL depthOutputEnabled;
@property (readonly, nonatomic) BOOL hardwareDepthFilteringEnabled;
@property (readonly, nonatomic) BOOL pointCloudOutputEnabled;
@property (readonly, nonatomic) BOOL detectedObjectsOutputEnabled;
@property (readonly, nonatomic) BOOL usesFirmwareStillImageOutput;
@property (readonly, nonatomic) struct { int x0; int x1; } preferredPreviewDimensions;
@property (readonly, nonatomic) float geometricDistortionCorrectionStrengthOnStreamingOutputs;
@property (readonly, nonatomic) unsigned long long infraredProjectorUptimeInUsForLowPowerSparse;
@property (readonly, nonatomic) unsigned long long infraredProjectorUptimeInUsForHighPowerSparse;
@property (readonly, nonatomic) int colorSpaceProperties;
@property (readonly, nonatomic) struct { int width; int height; } firmwareStillImageDimensionsAfterOverscanCropping;
@property (readonly, nonatomic) struct { int x0; int x1; } videoCaptureDimensionsWithoutOverscan;
@property (nonatomic) id<BWDetectedFacesFilterDelegate> detectedFacesFilterDelegate;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (int)_updateFormatIndex;
- (struct OpaqueCMClock { } *)clock;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateZoomForOutputIndex:(int)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (BOOL)start:(id *)a0;
- (BOOL)_scalerChainingEnabled;
- (int)_setupQRMSampleBufferProcessor;
- (void)_reportIOSurfaceCompressionCoreAnalyticsData:(struct BWStreamOutputStorage { int x0; unsigned int x1; BOOL x2; BOOL x3; id x4; struct opaqueCMSimpleQueue *x5; id x6; void /* function */ *x7; struct opaqueCMFormatDescription *x8; int x9; struct { long long x0; int x1; unsigned int x2; long long x3; } x10; int x11; id x12; BOOL x13; int x14; int x15; unsigned int x16; unsigned int x17; struct { int x0; int x1; } x18; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x19; id x20; int x21; unsigned long long x22; unsigned long long x23; } *)a0;
- (void)_unregisterStreamOutputHandlers;
- (id)_videoFormatRequirementsForPointCloudOutput;
- (struct CGPoint { double x0; double x1; })_bravoShiftMitigationCropOffset:(struct opaqueCMSampleBuffer { } *)a0 totalZoom:(float)a1;
- (float)_ispAppliedZoomFactorFromSampleBufferMetadataDictionary:(id)a0 outputIndex:(int)a1;
- (void)_preserveMotionDataForSoonToBeDroppedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)allocateOrReuseBufferPoolsFromSourceNode:(id)a0;
- (BOOL)stop:(id *)a0;
- (void)_reportIOSurfaceCompressionCoreAnalyticsDataForRaw;
- (void)_tallyCompressedIOSurfaceStatsForSBuf:(struct opaqueCMSampleBuffer { } *)a0 outputStorage:(struct BWStreamOutputStorage { int x0; unsigned int x1; BOOL x2; BOOL x3; id x4; struct opaqueCMSimpleQueue *x5; id x6; void /* function */ *x7; struct opaqueCMFormatDescription *x8; int x9; struct { long long x0; int x1; unsigned int x2; long long x3; } x10; int x11; id x12; BOOL x13; int x14; int x15; unsigned int x16; unsigned int x17; struct { int x0; int x1; } x18; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x19; id x20; int x21; unsigned long long x22; unsigned long long x23; } *)a1;
- (void)_unregisterFromStreamNotifications;
- (id)nodeSubType;
- (void)_updateOverscanReservedInISPZoom;
- (id)_supportedPixelFormatsForOutputID:(id)a0;
- (int)configure:(id)a0;
- (int)prepareForStillImageCaptureWithFirmwareStillImageOutputRetainedBufferCountOverride:(int)a0 clientBracketCount:(int)a1 enableSushiRawAttachmentOption:(BOOL)a2;
- (struct opaqueCMSampleBuffer { } *)_createFocusPixelDataSampleBufferFromVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (unsigned int)_sensorInterfaceRawPixelFormatForSensorPixelFormat:(unsigned int)a0 compandingEnabled:(BOOL)a1;
- (int)_verifyColorSpacePropertiesForOutputID:(id)a0 matchVideoOutputsColorInfo:(id)a1;
- (id)initWithCaptureDevice:(id)a0 captureStream:(id)a1;
- (void)_propagatePixelBufferAttachment:(struct __CVBuffer { } *)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 attachedMediaKey:(id)a2 removeAttachmentKey:(struct __CFString { } *)a3;
- (int)_verifyColorSpacePropertiesForAllOutputs;
- (id)_videoFormatRequirementsForStillImageQuadraOutputConfiguration:(id)a0 videoFormatRequirements:(id)a1;
- (void)_updateDepthSettings;
- (BOOL)_shouldEnableStreamCaptureOutputForNodeOutput:(id *)a0;
- (struct opaqueCMSampleBuffer { } *)_createDepthDataSampleBufferFromVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_setStreamOutputsEnabled:(BOOL)a0 streamingOutputs:(BOOL)a1 onDemandStillOutputs:(BOOL)a2;
- (BOOL)_preferIntermediateTapOverSecondaryScalerForPreviewOutputBasedOnBandwidth;
- (void)_markEndOfLiveOnAllOutputs;
- (void)dealloc;
- (void)_computeRetainedBufferCountForOutputStorage:(struct BWStreamOutputStorage { int x0; unsigned int x1; BOOL x2; BOOL x3; id x4; struct opaqueCMSimpleQueue *x5; id x6; void /* function */ *x7; struct opaqueCMFormatDescription *x8; int x9; struct { long long x0; int x1; unsigned int x2; long long x3; } x10; int x11; id x12; BOOL x13; int x14; int x15; unsigned int x16; unsigned int x17; struct { int x0; int x1; } x18; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x19; id x20; int x21; unsigned long long x22; unsigned long long x23; } *)a0;
- (void)_reflectStillSampleBufferOnStreamingOutputs:(struct opaqueCMSampleBuffer { } *)a0 captureType:(int)a1;
- (void)_markPrimaryStreamingOutput;
- (BOOL)_serviceZoomForPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_registerForStreamNotifications;
- (void)didSelectFormat:(id)a0 forOutput:(id)a1;
- (int)_colorSpacePropertiesForOuputID:(id)a0;
- (void)_prependPreservedMotionDataToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct { int x0; int x1; })_outputDimensionsForOutputID:(id)a0 outputConfiguration:(id)a1;
- (void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)a0;
- (id)_videoFormatRequirementsForOutputID:(id)a0 configuration:(id)a1;
- (int)_updateOutputIDs;
- (int)_stillImageColorSpaceProperties;
- (BOOL)_videoCaptureOutputRequiresScaling;
- (BOOL)_secondaryScalerIsAvailable;
- (BOOL)_secondaryScalerSupportsVideoCaptureDimensions;
- (id)_outputConfigurationForStreamingOutputID:(id)a0 nodeOutput:(id)a1;
- (int)_bringStreamUpToDate;
- (void)_applyPreviewShiftToCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)updateFormatRequirementsFromSourceNode:(id)a0;
- (int)_setupBayerProcessingSessionForQuadraStillImageCaptures;
- (int)_updateOutputRequirements;
- (BOOL)_shouldEnableStillImageOutput;
- (BOOL)_preferPrimaryScalerOverIntermediateTapForVideoOutputBasedOnBandwidth;
- (id)_streamOutputIDForOnDemandStills;
- (id)_outputConfigurationsForAllOutputs;
- (struct { int x0; int x1; })_calculateVideoCaptureDimensionsWithOverscan;
- (void)_registerStreamOutputHandlers;
- (int)_updateGDCStrengthForOutputConfigurations:(id)a0 updatedOutputConfigurations:(id *)a1;
- (void)_propagatePixelBufferAttachmentFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 attachmentKey:(struct __CFString { } *)a1 usingAttachedMediaKey:(id)a2;
- (struct CGSize { double x0; double x1; })_totalAvailableOverscan;
- (void)_attachCameraIntrinsicMatrixToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 scaledToVideoBuffer:(BOOL)a1;
- (int)_firmwareStillImageOutputRetainedBufferCountForClientBracketCount:(int)a0;
- (void)_flushOutRemainingBuffers;
- (void)_tallyCompressedIOSurfaceStatsForRawForSBuf:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateObjectDetectionMetadataRegistration;
- (void)requestedZoomFactorChanged:(float)a0;
- (id)colorInfoForOutput:(id)a0;
- (int)_updateOutputIDMappingsForStreamingOutputs;
- (BOOL)_requiresOneStreamingOutputForMetadata;
- (void)_asynchronouslyPreallocateBufferPools;
- (void)_updateColorSpaceProperties;
- (void)_updateBufferPoolSharingProperties;
- (void)_addCaptureStreamAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateStreamingOutputStorageForOutputID:(id)a0 isVideoCaptureOutput:(BOOL)a1 nodeOutput:(id)a2;
- (void)_updateVideoCaptureOutputFlags;
- (struct { int x0; int x1; })_calculatePreviewDimensionsForBravoShiftMitigation;
- (id)_outputConfigurationForStillImageOutputID:(id)a0;
- (BOOL)_primaryScalerIsAvailable;
- (id)_nodeOutputsMadeLiveByStreamOutputIndex:(int)a0;
- (struct CGSize { double x0; double x1; })_overscanWithFOVSacrifice;
- (void)makeOutputsLiveIfNeeded;
- (void)_updateMetadataConfigurations;
- (int)_updateOutputConfigurations;
- (int)_updateDepthConfiguration;
- (int)_updateGDCStrengthAndBaseZoomFactorAfterGDC;
- (struct { int x0; int x1; })_finalPreviewOutputDimensions;
- (int)_updateBaseZoomFactorAfterGDCFromOutputConfigurations:(id)a0;
- (struct { int x0; int x1; })videoCaptureDimensionsForColorspace;
- (id)_videoFormatRequirementsForDepthOutput;
- (int)_bytesPerOutputBufferForOutputConfiguration:(id)a0 outputID:(struct __CFString { } *)a1;
- (id)colorInfoForNonColorManagedDevicesForOutputID:(id)a0;
- (void)_updateValidBufferRectForOutputIndex:(int)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_retrieveCameraCharacterizationDataForCameraIntrinsicMatrixDelivery;
- (void)setPreviewShift:(struct CGPoint { double x0; double x1; })a0 previewScaleFactor:(float)a1;
- (int)_updateOutputsStorage;

@end
