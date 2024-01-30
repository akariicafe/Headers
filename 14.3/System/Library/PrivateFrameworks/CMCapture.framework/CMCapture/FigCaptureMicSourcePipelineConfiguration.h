@class FigCaptureSourceConfiguration, NSArray, BWZoomCommandHandler, NSString;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject

@property (retain, nonatomic) FigCaptureSourceConfiguration *micConfiguration;
@property (retain, nonatomic) NSArray *micConnectionConfigurations;
@property (retain, nonatomic) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture;
@property (retain, nonatomic) BWZoomCommandHandler *zoomCommandHandlerForStereoAudioCapture;
@property (nonatomic) BOOL flipStereoAudioCaptureChannels;
@property (retain, nonatomic) NSString *sessionPreset;
@property (nonatomic) BOOL configuresAppAudioSession;
@property (nonatomic) BOOL audioSourceNodeShouldCallEndInterruption;
@property (nonatomic) unsigned int clientVersionOfLinkedSDK;
@property (nonatomic) struct { unsigned int val[8]; } clientAuditToken;

- (void)dealloc;
- (id)micConnectionConfigurationsForMicSourcePosition:(int)a0;

@end
