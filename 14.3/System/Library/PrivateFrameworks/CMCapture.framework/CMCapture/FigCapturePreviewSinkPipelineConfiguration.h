@class FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject

@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoThumbnailConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (retain, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *previewTimeMachineConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (retain, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic) struct { unsigned short major; unsigned short minor; unsigned short patch; } sceneClassifierPipelineVersion;
@property (nonatomic) int sourceColorSpaceProperties;
@property (nonatomic) BOOL sourcePixelFormatIsFullRange;
@property (nonatomic) BOOL sourceIsBravoDevice;
@property (nonatomic) BOOL clientIsCameraOrDerivative;
@property (nonatomic) BOOL vitalityScoringEnabled;
@property (nonatomic) BOOL displayPipeRequiresPacked10BitPixelFormatForP3Input;
@property (nonatomic) BOOL deferredPrepareEnabled;
@property (nonatomic) BOOL remoteVideoPreview;
@property (nonatomic) BOOL overCaptureEnabled;
@property (nonatomic) BOOL primaryCaptureRectModificationEnabled;
@property (nonatomic) double videoStabilizationOverscan;
@property (nonatomic) BOOL ispPreviewJitterCompensationEnabled;
@property (nonatomic) BOOL focusBlurMapForDepthFiltersEnabled;
@property (nonatomic) BOOL depthFromMonocularNetworkEnabled;
@property (nonatomic) BOOL smartCameraMotionDetectionEnabled;
@property (nonatomic) BOOL generatesHistogram;

- (void)dealloc;

@end
