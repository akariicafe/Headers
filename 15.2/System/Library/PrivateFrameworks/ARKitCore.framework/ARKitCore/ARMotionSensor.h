@class ARMagnetometerData, NSString, ARGyroscopeData, CMMotionManager, ARAccelerometerData;
@protocol ARSensorDelegate;

@interface ARMotionSensor : NSObject <ARSensor> {
    CMMotionManager *_motionManager;
    ARGyroscopeData *_currentGyroData;
    ARAccelerometerData *_currentAccelerometerData;
    ARMagnetometerData *_currentMagnetometerData;
}

@property (nonatomic) double interval;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (unsigned long long)providedDataTypes;
- (void)gyroscopeOutput:(const struct { struct { float x0; float x1; float x2; } x0; double x1; } *)a0;
- (void)accelerometerOutput:(const struct { struct { float x0; float x1; float x2; } x0; double x1; } *)a0;
- (void)magnetometerOutput:(const struct { struct { float x0; float x1; float x2; } x0; double x1; } *)a0;
- (double)preferredInterval;
- (id)initWithMotionManager:(id)a0;

@end
