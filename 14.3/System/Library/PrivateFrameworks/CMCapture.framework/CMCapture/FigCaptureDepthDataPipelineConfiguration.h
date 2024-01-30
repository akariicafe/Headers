@class BWPipelineStage, FigDepthDataCaptureConnectionConfiguration, NSDictionary, FigCaptureSourceVideoFormat, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureDepthDataPipelineConfiguration : NSObject

@property (retain, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic) BOOL depthConvertedUpstream;
@property (nonatomic) BOOL hardwareDepthFilteringEnabled;
@property (nonatomic) BOOL videoAndConvertedDepthDataOutputEnabled;
@property (nonatomic) int depthDataBaseRotationDegrees;
@property (retain, nonatomic) BWPipelineStage *pipelineStage;
@property (nonatomic) struct { unsigned int val[8]; } clientAuditToken;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat;

- (void)dealloc;

@end
