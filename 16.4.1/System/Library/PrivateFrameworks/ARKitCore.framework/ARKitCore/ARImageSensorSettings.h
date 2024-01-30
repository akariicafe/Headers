@class NSString, NSDictionary, ARVideoFormat;

@interface ARImageSensorSettings : NSObject <NSCopying>

@property (retain, nonatomic) ARVideoFormat *videoFormat;
@property (nonatomic) BOOL autoFocusEnabled;
@property (nonatomic) BOOL mirrorVideoOutput;
@property (nonatomic) BOOL visionDataOutputEnabled;
@property (nonatomic) BOOL calibrationDataOutputEnabled;
@property (nonatomic) float maxGainOverride;
@property (nonatomic) BOOL videoHDRAllowed;
@property (nonatomic) BOOL dropsInitialFramesOutsideExposureTargetOffsetThreshold;
@property (nonatomic) float negativeExposureTargetOffsetThreshold;
@property (nonatomic) float positiveExposureTargetOffsetThreshold;
@property (nonatomic) unsigned long long maximumNumberOfInitialFramesDropped;
@property (nonatomic) BOOL backFacingCameraGeometricDistortionCorrectionEnabled;
@property (copy, nonatomic) NSString *metaData;
@property (retain, nonatomic) NSDictionary *visionDataOutputParameters;
@property (nonatomic) unsigned long long maximumNumberOfTrackedFaces;
@property (nonatomic) BOOL supportsCapturingHighResolutionFrames;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVideoFormat:(id)a0;

@end
