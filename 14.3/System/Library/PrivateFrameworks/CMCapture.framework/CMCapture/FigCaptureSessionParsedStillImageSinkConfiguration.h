@class FigPointCloudDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject

@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration;
@property (readonly, nonatomic) FigPointCloudDataCaptureConnectionConfiguration *pointCloudDataConnectionConfiguration;

- (void)dealloc;
- (id)initWithStillImageConnectionConfiguration:(id)a0 movieFileVideoConnectionConfiguration:(id)a1 pointCloudDataConnectionConfiguration:(id)a2;

@end
