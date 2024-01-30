@class ARCircularArray, ARLocationData, ARGeoTrackingConsensusAndAverageFilter, ARGeoTrackingGradualCorrectionFilter, VLLocalizer, ARDeviceOrientationData, NSMutableArray;

@interface ARGeoTrackingTechniqueState : NSObject

@property (retain, nonatomic) VLLocalizer *VLHandle;
@property (retain) ARDeviceOrientationData *lastCMDeviceMotion;
@property (retain) ARLocationData *lastCLLocation;
@property double last6DofPoseUpdateTimestamp;
@property long long trackingState;
@property long long trackingAccuracy;
@property long long failureReasons;
@property (retain, nonatomic) ARGeoTrackingConsensusAndAverageFilter *consensusAverageFilter;
@property (retain, nonatomic) ARGeoTrackingGradualCorrectionFilter *gradualCorrectionFilter;
@property struct { void /* unknown type, empty encoding */ columns[4]; } enuFromVIO;
@property (retain) ARLocationData *enuOrigin;
@property (nonatomic) long long resetCount;
@property (retain, nonatomic) NSMutableArray *resultDatas;
@property (nonatomic) int poseOkCount;
@property (nonatomic) double VLFirstPoseEstimationTimestamp;
@property (nonatomic) double first6DofPoseUpdateAttemptTimestamp;
@property (nonatomic) double last6DofPoseUpdateAttemptTimestamp;
@property (nonatomic) BOOL hasStartedAvailabilityCheck;
@property (nonatomic) double lastGradualCorrectionTime;
@property (nonatomic) long long lastLoggedFailureReasons;
@property (nonatomic) long long failureLogCount;
@property (nonatomic) double lastPoseOriginTimestamp;
@property (retain, nonatomic) ARCircularArray *deviceMotionCircularBuffer;
@property (nonatomic) double timeDiffVioLastCL;

- (void).cxx_destruct;
- (id)initWithResetCount:(long long)a0 useCLCMFusion:(BOOL)a1;
- (void)removeFailureReason:(long long)a0;
- (void)addFailureReason:(long long)a0;

@end
