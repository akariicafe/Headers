@class NSArray, FigCaptureSessionParsedMicSourceConfiguration;

@interface FigCaptureSessionParsedConfiguration : NSObject

@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic, getter=isMultiCamSession) BOOL multiCamSession;
@property (readonly, nonatomic) BOOL continuityCameraIsWired;
@property (readonly, nonatomic) BOOL useOfflineVISPipeline;
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
@property (readonly, nonatomic) NSArray *parsedCinematographyConfigurations;
@property (readonly, nonatomic) NSArray *parsedLiDARDepthPipelineConfigurations;

+ (void)initialize;

- (id)initWithSessionConfiguration:(id)a0 clientSetsUserInitiatedCaptureRequestTime:(BOOL)a1 restrictions:(id)a2;
- (void)dealloc;

@end
