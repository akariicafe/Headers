@class FigCaptureSourceConfiguration, FigMetadataItemCaptureConnectionConfiguration, NSArray, NSString, FigAudioCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject

@property (retain, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoConnectionConfiguration;
@property (retain, nonatomic) FigAudioCaptureConnectionConfiguration *audioConnectionConfiguration;
@property (retain, nonatomic) FigMetadataItemCaptureConnectionConfiguration *cameraDebugInfoMetadataConnectionConfiguration;
@property (retain, nonatomic) NSArray *detectedObjectMetadataConnectionConfigurations;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (nonatomic) struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } videoSourceCaptureTransform;
@property (nonatomic) struct { int width; int height; } visOutputDimensions;
@property (nonatomic) int videoStabilizationType;
@property (nonatomic) BOOL boxedMetadataPostVISEnabled;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) struct { unsigned short major; unsigned short minor; unsigned short patch; } smartCameraPipelineVersion;
@property (nonatomic) BOOL offlineVISEnabled;
@property (nonatomic) BOOL vitalityScoringEnabled;
@property (nonatomic) BOOL captureDeviceHasOverCaptureEnabled;
@property (nonatomic) BOOL overCaptureEnabled;
@property (nonatomic) float videoStabilizationOverscanOverride;
@property (retain, nonatomic) NSString *clientApplicationID;
@property (nonatomic) BOOL P3ToBT2020ConversionEnabled;

- (void)dealloc;

@end
