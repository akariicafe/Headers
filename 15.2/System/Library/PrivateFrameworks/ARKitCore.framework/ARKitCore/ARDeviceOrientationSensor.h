@class NSString, CMMotionManager, NSOperationQueue;
@protocol ARSensorDelegate;

@interface ARDeviceOrientationSensor : NSObject <ARSensor> {
    CMMotionManager *_motionManager;
    NSOperationQueue *_taskDeviceMotion;
    double _previousCaptureEndingTimestamp;
}

@property (nonatomic) double interval;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (readonly, nonatomic) long long worldAlignment;
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
- (double)preferredInterval;
- (id)initWithMotionManager:(id)a0 alignment:(long long)a1;
- (void)handleDeviceMotionUpdateWithMotion:(id)a0 error:(id)a1;

@end
