@class FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedDepthDataSinkConfiguration : NSObject

@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (readonly, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;

- (void)dealloc;
- (id)initWithDepthDataConnectionConfiguration:(id)a0 videoDataConnectionConfiguration:(id)a1 metadataObjectConnectionConfiguration:(id)a2;

@end
