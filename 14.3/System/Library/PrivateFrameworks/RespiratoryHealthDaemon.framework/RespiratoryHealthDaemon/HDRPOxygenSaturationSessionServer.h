@class NSString, HLOxygenSaturationSession, NSObject;
@protocol OS_dispatch_queue;

@interface HDRPOxygenSaturationSessionServer : HDStandardTaskServer <HKRPOxygenSaturationSessionServerInterface, HLOxygenSaturationSessionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long sessionState;
@property (retain, nonatomic) HLOxygenSaturationSession *sensorSession;
@property (nonatomic) double startTime;
@property (nonatomic) double expectedDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)remote_startWithCompletion:(id /* block */)a0;
- (void)remote_abortWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_abortSensorSession;
- (void)_queue_startWithCompletion:(id /* block */)a0;
- (void)_queue_abortWithCompletion:(id /* block */)a0;
- (void)oxygenSaturationSession:(id)a0 didBeginWithStartTime:(double)a1 expectedDuration:(double)a2;
- (void)oxygenSaturationSession:(id)a0 didEndForReason:(unsigned long long)a1 measurement:(id)a2;
- (void)oxygenSaturationSession:(id)a0 feedbackDidChange:(unsigned long long)a1;
- (void)_queue_notifyClientDidStartWithStartTime:(double)a0 expectedDuration:(double)a1;
- (void)_queue_notifyClientDidSendFeedback:(unsigned long long)a0;
- (void)_queue_notifyClientDidEndWithReason:(long long)a0 saturation:(id)a1 barometricPressure:(id)a2 averageHeartRate:(id)a3 averageHeartRateUUID:(id)a4 error:(id)a5;

@end
