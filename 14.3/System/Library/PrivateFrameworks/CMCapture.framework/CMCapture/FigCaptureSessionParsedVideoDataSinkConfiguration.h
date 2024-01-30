@class FigMetadataObjectCaptureConnectionConfiguration, FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedVideoDataSinkConfiguration : NSObject

@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (readonly, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration;
@property (readonly, nonatomic) int sourceDeviceType;

- (void)dealloc;
- (id)initWithVideoDataConnectionConfiguration:(id)a0 metadataObjectConnectionConfiguration:(id)a1 sourceDeviceType:(int)a2;

@end
