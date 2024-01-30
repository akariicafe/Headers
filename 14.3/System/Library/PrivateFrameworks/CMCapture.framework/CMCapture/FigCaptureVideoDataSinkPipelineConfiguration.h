@class NSDictionary, FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject

@property (nonatomic) struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } sourceVideoTransform;
@property (nonatomic) BOOL sourceHasAppliedAllZoom;
@property (nonatomic) int videoStabilizationType;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) BOOL faceTrackingEnabled;
@property (nonatomic) BOOL offlineVISMotionDataEnabled;
@property (retain, nonatomic) FigCaptureSourceConfiguration *sourceConfiguration;
@property (nonatomic) int sourceDeviceType;
@property (nonatomic) struct { int width; int height; } visOutputDimensions;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic) struct { unsigned int val[8]; } clientAuditToken;
@property (retain, nonatomic) NSDictionary *colorInfo;
@property (nonatomic) BOOL P3ToBT2020ConversionEnabled;

- (void)dealloc;

@end
