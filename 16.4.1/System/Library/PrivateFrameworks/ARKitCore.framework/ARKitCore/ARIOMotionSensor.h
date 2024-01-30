@class NSString, ARGyroscopeData, ARAccelerometerData, NSObject;
@protocol OS_dispatch_queue, ARSensorDelegate;

@interface ARIOMotionSensor : NSObject <ARSensor> {
    NSString *_location;
    struct __IOHIDEventSystemClient { } *_accelerometerSystemClient;
    struct __IOHIDServiceClient { } *_accelerometerService;
    struct __IOHIDEventSystemClient { } *_gyroSystemClient;
    struct __IOHIDServiceClient { } *_gyroService;
    NSObject<OS_dispatch_queue> *_imuDataQueue;
    ARGyroscopeData *_currentGyroData;
    ARAccelerometerData *_currentAccelerometerData;
}

@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (long long)preferredSampleRate;
- (void)accelerometerDidOutputEvent:(struct __IOHIDEvent { } *)a0 timestamp:(double)a1;
- (void)gyroscopeDidOutputEvent:(struct __IOHIDEvent { } *)a0 timestamp:(double)a1;
- (unsigned long long)providedDataTypes;
- (void)waitForOutstandingCallbacks;

@end
