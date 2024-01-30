@class ARCircularArray, ARLocationData, ARGeoTrackingConsensusAndAverageFilter, ARGeoTrackingGradualCorrectionFilter, VLLocalizer, ARDeviceOrientationData, NSMutableArray;

@interface ARGeoTrackingTechniqueState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _enuFromVIOLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _vioPoseBufferLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceMotionBufferLock;
}

@property (retain, nonatomic) VLLocalizer *VLHandle;
@property (retain) ARDeviceOrientationData *lastCMDeviceMotion;
@property (retain) ARLocationData *lastCLLocation;
@property double lastVLExecutionTimestamp;
@property long long trackingState;
@property long long trackingAccuracy;
@property long long failureReasons;
@property (retain, nonatomic) ARGeoTrackingConsensusAndAverageFilter *consensusAverageFilter;
@property (retain, nonatomic) ARGeoTrackingGradualCorrectionFilter *gradualCorrectionFilter;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } enuFromVIO;
@property (retain) ARLocationData *enuOrigin;
@property (nonatomic) long long resetCount;
@property (retain, nonatomic) NSMutableArray *resultDatas;
@property (nonatomic) int poseOkCount;
@property (nonatomic) double firstVLExecutionAttemptTimestamp;
@property (nonatomic) double lastVLExecutionAttemptTimestamp;
@property (nonatomic) BOOL hasStartedAvailabilityCheck;
@property (nonatomic) BOOL hasReturnedAvailabilityCheck;
@property (nonatomic) BOOL hasStartedLocalization;
@property (nonatomic) BOOL hasReturnedLocalization;
@property (nonatomic) double lastGradualCorrectionTime;
@property (nonatomic) long long lastLoggedFailureReasons;
@property (nonatomic) long long failureLogCount;
@property (nonatomic) double lastPoseOriginTimestamp;
@property (nonatomic) double firstRequestResultTimestamp;
@property (nonatomic) void /* unknown type, empty encoding */ lastLoggedVioPosition;
@property (nonatomic) double lastLoggedVioTimestamp;
@property (retain, nonatomic) ARCircularArray *vioPoseCircularBuffer;
@property (retain, nonatomic) ARCircularArray *deviceMotionCircularBuffer;
@property (retain, nonatomic) ARLocationData *lastLocationProcessedForFusion;

+ (id)_findClosestDataToTimestamp:(double)a0 inBuffer:(id)a1;

- (void).cxx_destruct;
- (void)addVioPoseData:(id)a0;
- (BOOL)VLHasExecuted;
- (void)addDeviceMotionData:(id)a0;
- (void)addFailureReason:(long long)a0;
- (id)findClosestDeviceMotionDataToTimestamp:(double)a0;
- (id)findClosestVioPoseToTimestamp:(double)a0;
- (id)initWithResetCount:(long long)a0;
- (void)removeFailureReason:(long long)a0;
- (void)setEnuFromVIORotation:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setEnuFromVIOTranslation:(SEL)a0;

@end
