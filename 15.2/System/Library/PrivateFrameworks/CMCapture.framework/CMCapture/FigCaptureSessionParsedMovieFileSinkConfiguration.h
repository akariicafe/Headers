@class FigVideoCaptureConnectionConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, FigMetadataItemCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedMovieFileSinkConfiguration : NSObject

@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoConnectionConfiguration;
@property (readonly, nonatomic) FigAudioCaptureConnectionConfiguration *audioConnectionConfiguration;
@property (readonly, nonatomic) FigMetadataItemCaptureConnectionConfiguration *cameraDebugInfoMetadataConnectionConfiguration;
@property (readonly, nonatomic) NSArray *detectedObjectMetadataConnectionConfigurations;
@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;

- (void)dealloc;

@end
