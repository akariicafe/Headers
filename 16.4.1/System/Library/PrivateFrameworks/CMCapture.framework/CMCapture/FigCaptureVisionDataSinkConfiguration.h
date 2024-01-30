@class NSData, NSDictionary;

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
@property (nonatomic, getter=isDynamicThresholdingEnabled) BOOL dynamicThresholdingEnabled;
@property (nonatomic) unsigned int keypointDetectionFlowType;
@property (nonatomic) unsigned long long subPixelThreshold;
@property (nonatomic, getter=isFeatureMatchingEnabled) BOOL featureMatchingEnabled;
@property (nonatomic) int featureMatchingDescriptorSize;
@property (nonatomic) float orientationDistanceThreshold;
@property (nonatomic) float sigmaDistanceThreshold;
@property (nonatomic) float squareDistanceDisparityFraction;
@property (nonatomic) unsigned long long hammingDistanceThreshold;
@property (retain, nonatomic) NSData *laccConfigAndMetadata;
@property (readonly, nonatomic) NSDictionary *embeddedCaptureDeviceConfiguration;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (int)sinkType;
- (id)description;

@end
