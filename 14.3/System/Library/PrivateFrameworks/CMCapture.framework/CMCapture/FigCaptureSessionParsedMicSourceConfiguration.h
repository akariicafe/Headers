@class NSArray, FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject

@property (readonly, nonatomic) NSArray *micConnectionConfigurations;
@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfigurationForStereoAudioCapture;

- (void)dealloc;
- (id)initWithMicConnectionConfigurations:(id)a0 cameraConfigurationForStereoAudioCapture:(id)a1 movieFileVideoConnectionConfigurationForStereoAudioCapture:(id)a2;

@end
