@class FigCaptureSourceConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedCameraSourceConfiguration : NSObject

@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (readonly, nonatomic) NSArray *previewDerivedConnectionConfigurations;
@property (readonly, nonatomic) NSArray *videoCaptureConnectionConfigurations;
@property (readonly, nonatomic) NSArray *videoDataConnectionConfigurations;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (readonly, nonatomic) NSArray *visionDataConnectionConfigurations;
@property (readonly, nonatomic) NSArray *metadataObjectConnectionConfigurations;
@property (readonly, nonatomic) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;
@property (readonly, nonatomic) NSArray *pointCloudDataConnectionConfigurations;
@property (readonly, nonatomic) NSArray *cameraCalibrationDataConnectionConfigurations;

- (void)dealloc;

@end
