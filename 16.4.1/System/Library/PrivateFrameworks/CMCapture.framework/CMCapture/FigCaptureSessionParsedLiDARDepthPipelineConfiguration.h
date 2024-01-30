@class FigDepthDataCaptureConnectionConfiguration, FigCaptureSourceConfiguration;

@interface FigCaptureSessionParsedLiDARDepthPipelineConfiguration : NSObject

@property (readonly, nonatomic) FigCaptureSourceConfiguration *timeOfFlightCameraConfiguration;
@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;

- (void)dealloc;
- (id)initWithTimeOfFlightCameraConfiguration:(id)a0 depthDataConnectionConfiguration:(id)a1;

@end
