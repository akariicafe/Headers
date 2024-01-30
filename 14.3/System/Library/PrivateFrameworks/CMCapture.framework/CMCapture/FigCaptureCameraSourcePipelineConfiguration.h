@class FigCaptureSourceConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigPointCloudDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject

@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) int videoStabilizationType;
@property (nonatomic) int originalVideoStabilizationTypeForOfflineVIS;
@property (nonatomic) int depthType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxExposureDurationClientOverride;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxExposureDurationFrameworkOverride;
@property (nonatomic) BOOL forceCNRDisabled;
@property (nonatomic) BOOL coreMediaFaceTrackingEnabled;
@property (nonatomic) BOOL ispFaceTrackingEnabled;
@property (nonatomic) BOOL stillImageGeometricDistortionCorrectionEnabled;
@property (nonatomic) BOOL streamingGeometricDistortionCorrectionEnabled;
@property (nonatomic) BOOL offlineVISEnabled;
@property (nonatomic) BOOL zeroShutterLagEnabled;
@property (nonatomic) BOOL configureForZeroShutterLagSupport;
@property (nonatomic) BOOL configureForSIFRStillImageCaptureIfAvailable;
@property (nonatomic) BOOL enableStillImageSensorOverscanIfAvailable;
@property (nonatomic) float overCapturePercentage;
@property (nonatomic) BOOL configureForSpatialOverCaptureSupport;
@property (nonatomic) BOOL configureForDigitalFlashSupport;
@property (nonatomic) BOOL clockSynchronizationEnabled;
@property (nonatomic) BOOL depthConversionEnabled;
@property (nonatomic) int stillImageFocusPixelDataRetainedBufferCount;
@property (nonatomic) int stillImageSashimiRawRetainedBufferCount;
@property (nonatomic) int stillImageSensorInterfaceRawRetainedBufferCount;
@property (nonatomic) int stillImageOutputRetainedBufferCountOverride;
@property (nonatomic) BOOL stillImageOutputSushiRawAttachmentOptionEnabled;
@property (nonatomic) BOOL streamingForegroundSegmentationEnabled;
@property (nonatomic) BOOL RGBIRStereoFusionEnabled;
@property (nonatomic) BOOL streamingCameraCalibrationDataDeliveryEnabled;
@property (nonatomic) int autoImageControlMode;
@property (retain, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (retain, nonatomic) NSArray *previewDerivedConnectionConfigurations;
@property (retain, nonatomic) NSArray *videoCaptureConnectionConfigurations;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (retain, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (retain, nonatomic) NSArray *visionDataConnectionConfigurations;
@property (retain, nonatomic) NSArray *metadataObjectConnectionConfigurations;
@property (retain, nonatomic) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;
@property (retain, nonatomic) FigPointCloudDataCaptureConnectionConfiguration *pointCloudDataConnectionConfiguration;
@property (nonatomic) BOOL videoHDRImageStatisticsEnabled;
@property (nonatomic) float additionalVISOverscanWhenRecording;

- (void)dealloc;

@end
