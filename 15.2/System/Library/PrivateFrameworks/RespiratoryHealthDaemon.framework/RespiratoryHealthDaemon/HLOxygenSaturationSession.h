@class NSObject;
@protocol OS_dispatch_queue, HLOxygenSaturationSessionDelegate;

@interface HLOxygenSaturationSession : NSObject

@property (weak, nonatomic) id<HLOxygenSaturationSessionDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)abort;
- (void)begin;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 onQueue:(id)a1;
- (void)unitTesting_deliverFeedback:(unsigned long long)a0;
- (void)unitTesting_endSessionWithReason:(unsigned long long)a0 saturation:(id)a1 barometricPressure:(id)a2 averageHeartRate:(id)a3 averageHeartRateUUID:(id)a4;

@end
