@class NSDictionary;

@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) float maxFrameRate;
@property (nonatomic) float maxBurstFrameRate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxBurstDuration;
@property (nonatomic) unsigned int gaussianPyramidOctavesCount;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) unsigned int maxKeypointsCount;
@property (nonatomic) float keypointDetectionThreshold;
@property (nonatomic) BOOL featureBinningEnabled;
@property (nonatomic) BOOL featureOrientationAssignmentEnabled;
@property (readonly, nonatomic) NSDictionary *embeddedCaptureDeviceConfiguration;

- (int)sinkType;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
