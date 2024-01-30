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
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
