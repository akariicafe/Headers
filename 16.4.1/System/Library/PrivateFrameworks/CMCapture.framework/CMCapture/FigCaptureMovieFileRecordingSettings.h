@class NSArray, NSDictionary, NSURL, NSData;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings

@property (copy, nonatomic) NSDictionary *videoSettings;
@property (copy, nonatomic) NSDictionary *audioSettings;
@property (nonatomic) BOOL videoMirrored;
@property (nonatomic) int videoOrientation;
@property (nonatomic) BOOL recordVideoOrientationAndMirroringChanges;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;
@property (copy, nonatomic) NSArray *movieLevelMetadata;
@property (nonatomic) BOOL sendPreviewIOSurface;
@property (nonatomic, getter=isIrisRecording) BOOL irisRecording;
@property (nonatomic) BOOL debugMetadataSidecarFileEnabled;
@property (nonatomic) struct { BOOL enabled; long long selectionBehavior; unsigned long long restrictedSelectionConditions; } bravoCameraSelectionConfigurationForRecording;
@property (nonatomic, getter=isIrisMovieRecording) BOOL irisMovieRecording;
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieURL;
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieLevelMetadata;
@property (nonatomic) unsigned long long movieStartTimeOverride;
@property (nonatomic) BOOL usesVirtualCaptureCard;
@property (nonatomic) BOOL personSegmentationRenderingEnabled;
@property (retain, nonatomic) NSData *personSegmentationForegroundColorCube;
@property (retain, nonatomic) NSData *personSegmentationBackgroundColorCube;
@property (nonatomic) BOOL videoSTFEnabled;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)description;

@end
