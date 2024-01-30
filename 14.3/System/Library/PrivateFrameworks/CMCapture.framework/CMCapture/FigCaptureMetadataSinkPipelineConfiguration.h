@class FigVideoCaptureConnectionConfiguration, NSArray, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject

@property (retain, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (retain, nonatomic) NSArray *detectedObjectMovieFileOutputMetadataConnectionConfigurations;
@property (nonatomic) BOOL mrcLowPowerModeEnabled;
@property (nonatomic) BOOL useSceneClassifierToGateMRCDetection;
@property (nonatomic) struct { unsigned short major; unsigned short minor; unsigned short patch; } smartCameraPipelineVersion;
@property (nonatomic) BOOL deferredPrepareEnabled;
@property (nonatomic) BOOL previewEnabled;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) BOOL boxedMetadataEnabled;

- (void)dealloc;

@end
