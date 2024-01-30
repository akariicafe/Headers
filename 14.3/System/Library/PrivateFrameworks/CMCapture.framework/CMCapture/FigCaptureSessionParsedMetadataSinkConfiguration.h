@class FigVideoCaptureConnectionConfiguration, NSArray, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedMetadataSinkConfiguration : NSObject

@property (readonly, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration;
@property (readonly, nonatomic) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;

- (void)dealloc;
- (id)initWithMetadataObjectConnectionConfiguration:(id)a0 sceneClassifierConnectionConfiguration:(id)a1 videoDataConnectionConfiguration:(id)a2 videoPreviewSinkConnectionConfiguration:(id)a3 movieFileVideoConnectionConfiguration:(id)a4 movieFileDetectedObjectMetadataConnectionConfigurations:(id)a5;

@end
