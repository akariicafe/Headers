@class NSString, CMMotionManager, NSOperationQueue, ARDeviceOrientationData;
@protocol ARSensorDelegate;

@interface ARDeviceOrientationSensor : NSObject <ARPassiveSensor> {
    CMMotionManager *_motionManager;
    ARDeviceOrientationData *_currentOrientationData;
    NSOperationQueue *_errorQueueDeviceMotion;
    double _previousCaptureEndingTimestamp;
}

@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (readonly, nonatomic) long long worldAlignment;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)currentData;
- (void)start;
- (unsigned long long)providedDataTypes;
- (id)initWithMotionManager:(id)a0 alignment:(long long)a1;

@end
