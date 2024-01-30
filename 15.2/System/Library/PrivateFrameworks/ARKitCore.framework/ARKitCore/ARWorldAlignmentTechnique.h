@class ARWorldAlignmentData, CMMotionManager, ARTimeKeyedList, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARWorldAlignmentTechnique : ARTechnique {
    ARTimeKeyedList *_deviceOrientationDataByTime;
    float _deviceOrientationAlignmentAngle;
    float _trackingAlignmentAngle;
    void /* unknown type, empty encoding */ _trackingAlignmentTranslation;
    BOOL _deviceOrientationReferenced;
    BOOL _trackingReferenced;
    BOOL _imageMirrored;
    long long _lastTrackingStateReason;
    double _lastMajorRelocalizationTimestamp;
    double _lastHeadingUpdateTimestamp;
    BOOL _relocalizing;
    ARWorldAlignmentData *_relocalizedAlignmentData;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
}

@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) long long cameraPosition;
@property (retain, nonatomic) CMMotionManager *motionManager;

- (id)processData:(id)a0;
- (BOOL)isBusy;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_fullDescription;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithAlignment:(long long)a0 cameraPosition:(long long)a1;
- (id)predictedResultDataAtTimestamp:(double)a0 context:(id)a1;
- (void)_handleTrackingStateChanges:(id)a0 initialized:(BOOL *)a1 relocalized:(BOOL *)a2;
- (void)_referenceDeviceOrientation:(id)a0;
- (id)_referenceTrackingAlignmentWithPoseData:(id)a0 deviceOrientation:(id)a1;
- (id)_updateHeadingAlignmentWithPoseData:(id)a0 deviceOrientation:(id)a1 timestamp:(double)a2;
- (id)_deviceOrientationPoseDataFromDeviceOrientation:(id)a0;
- (float)_trackingAlignmentAngleForPoseData:(id)a0 deviceOrientation:(id)a1;
- (id)initWithAlignment:(long long)a0;

@end
