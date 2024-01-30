@class FigVisionDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject

@property (readonly, nonatomic) FigVisionDataCaptureConnectionConfiguration *visionDataConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;

- (void)dealloc;
- (id)initWithVisionDataConnectionConfiguration:(id)a0 videoDataConnectionConfiguration:(id)a1;

@end
