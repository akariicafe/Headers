@class FigVideoCaptureConnectionConfiguration, NSArray, FigAudioCaptureConnectionConfiguration, FigMetadataItemCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedMovieFileSinkConfiguration : NSObject

@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoConnectionConfiguration;
@property (readonly, nonatomic) FigAudioCaptureConnectionConfiguration *audioConnectionConfiguration;
@property (readonly, nonatomic) FigMetadataItemCaptureConnectionConfiguration *cameraDebugInfoMetadataConnectionConfiguration;
@property (readonly, nonatomic) NSArray *detectedObjectMetadataConnectionConfigurations;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;

- (id)initWithVideoConnectionConfiguration:(id)a0 audioConnectionConfiguration:(id)a1 cameraDebugInfoMetadataConnectionConfiguration:(id)a2 detectedObjectMetadataConnectionConfigurations:(id)a3 stillImageConnectionConfiguration:(id)a4 sceneClassifierConnectionConfiguration:(id)a5;
- (void)dealloc;
- (id)initWithCaptureConnectionConfigurations:(id)a0 stillImageConnectionConfiguration:(id)a1 sceneClassifierConnectionConfigurationsBySourceID:(id)a2;

@end
