@class NSString, ARGyroscopeData, ARAccelerometerData, NSObject;
@protocol OS_dispatch_queue, ARSensorDelegate;

@interface ARIOMotionSensor : NSObject <ARSensor> {
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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (long long)preferredSampleRate;
- (unsigned long long)providedDataTypes;
- (void)accelerometerDidOutputEvent:(struct __IOHIDEvent { } *)a0 timestamp:(double)a1;
- (void)gyroscopeDidOutputEvent:(struct __IOHIDEvent { } *)a0 timestamp:(double)a1;

@end
