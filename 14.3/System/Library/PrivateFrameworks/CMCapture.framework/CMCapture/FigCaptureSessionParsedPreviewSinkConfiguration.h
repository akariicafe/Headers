@class FigCaptureSourceConfiguration, FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedPreviewSinkConfiguration : NSObject

@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoThumbnailConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *previewTimeMachineConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (readonly, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration;
@property (readonly, nonatomic) int sourceDeviceType;

- (void)dealloc;
- (id)initWithParsedCameraSourceConfiguration:(id)a0 sourceDeviceType:(int)a1;

@end
