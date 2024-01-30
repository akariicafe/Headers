@class NSArray, FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject

@property (readonly, nonatomic) NSArray *micConnectionConfigurations;
@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfigurationForStereoAudioCapture;

- (void)dealloc;

@end
