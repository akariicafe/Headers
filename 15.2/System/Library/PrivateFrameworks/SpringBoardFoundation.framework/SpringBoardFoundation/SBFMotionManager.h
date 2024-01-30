@class SBFInfiniteImpulseResponseFilter, CMMotionManager;

@interface SBFMotionManager : NSObject {
    double _x;
    double _y;
    double _z;
    struct { double x; double y; double z; double w; } _attitude;
    double _roll;
    double _pitch;
    double _yaw;
    double _coefficient;
    double _threshold;
    unsigned long long _referenceFrame;
    CMMotionManager *_motionManager;
    BOOL _motionManagerPaused;
    SBFInfiniteImpulseResponseFilter *_motionFilterX;
    SBFInfiniteImpulseResponseFilter *_motionFilterY;
    SBFInfiniteImpulseResponseFilter *_motionFilterZ;
    SBFInfiniteImpulseResponseFilter *_motionFilterAX;
    SBFInfiniteImpulseResponseFilter *_motionFilterAY;
    SBFInfiniteImpulseResponseFilter *_motionFilterAZ;
    SBFInfiniteImpulseResponseFilter *_motionFilterAW;
    SBFInfiniteImpulseResponseFilter *_motionFilterRoll;
    SBFInfiniteImpulseResponseFilter *_motionFilterPitch;
    SBFInfiniteImpulseResponseFilter *_motionFilterYaw;
}

@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;
@property (readonly, nonatomic) double z;
@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; } attitude;
@property (readonly, nonatomic) SBFInfiniteImpulseResponseFilter *motionFilterX;
@property (readonly, nonatomic) SBFInfiniteImpulseResponseFilter *motionFilterY;
@property (readonly, nonatomic) SBFInfiniteImpulseResponseFilter *motionFilterZ;
@property (nonatomic) double deviceMotionUpdateInterval;
@property (nonatomic) double accelerometerUpdateInterval;

- (void)stopDeviceMotionUpdates;
- (void)_createFilters;
- (void)startDeviceMotionUpdates;
- (id)initWithCoefficient:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isDeviceMotionAvailable;
- (id)initWithCoefficient:(double)a0 threshold:(double)a1;
- (void)createMotionManager;
- (BOOL)zeroMovementSinceLastFrame;
- (void)startDeviceAccelerometerUpdates;
- (void)pauseDeviceMotionUpdates;
- (void)stopDeviceAccelerometerUpdates;

@end
