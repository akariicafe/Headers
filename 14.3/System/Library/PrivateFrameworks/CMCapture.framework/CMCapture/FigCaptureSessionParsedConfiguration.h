@class NSArray, FigCaptureSessionParsedMicSourceConfiguration;

@interface FigCaptureSessionParsedConfiguration : NSObject

@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic, getter=isMultiCamSession) BOOL multiCamSession;
@property (readonly, nonatomic) NSArray *parsedCameraSourceConfigurations;
@property (readonly, nonatomic) FigCaptureSessionParsedMicSourceConfiguration *parsedMicSourceConfiguration;
@property (readonly, nonatomic) NSArray *metadataSourceConfigurations;
@property (readonly, nonatomic) NSArray *parsedPreviewSinkConfigurations;
@property (readonly, nonatomic) NSArray *videoThumbnailSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedStillImageSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedVideoDataSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedVisionDataSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedDepthDataSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedMetadataSinkConfigurations;
@property (readonly, nonatomic) NSArray *parsedMovieFileSinkConfigurations;
@property (readonly, nonatomic) NSArray *audioFileSinkConnectionConfigurations;
@property (readonly, nonatomic) NSArray *audioDataSinkConnectionConfigurations;
@property (readonly, nonatomic) NSArray *pointCloudDataSinkConnectionConfigurations;
@property (readonly, nonatomic) NSArray *cameraCalibrationDataSinkConnectionConfigurations;

+ (void)initialize;

- (id)initWithSessionConfiguration:(id)a0 clientSetsUserInitiatedCaptureRequestTime:(BOOL)a1;
- (void)dealloc;
- (int)_parseConfiguration:(id)a0 clientSetsUserInitiatedCaptureRequestTime:(BOOL)a1;

@end
