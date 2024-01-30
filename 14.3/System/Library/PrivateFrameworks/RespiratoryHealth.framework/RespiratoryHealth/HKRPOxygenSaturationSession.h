@class NSString, HKHealthStore, HKTaskServerProxyProvider;
@protocol HKRPOxygenSaturationSessionDelegate;

@interface HKRPOxygenSaturationSession : NSObject <_HKXPCExportable, HKRPOxygenSaturationSessionClientInterface>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (weak, nonatomic) id<HKRPOxygenSaturationSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void)connectionInvalidated;
- (id)init;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)abortWithCompletion:(id /* block */)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)a0;
- (void)clientRemote_didSendFeedback:(unsigned long long)a0;
- (void)clientRemote_didStartWithStartTime:(double)a0 expectedDuration:(double)a1;
- (void)clientRemote_didEndWithReason:(long long)a0 saturation:(id)a1 barometricPressure:(id)a2 averageHeartRate:(id)a3 averageHeartRateUUID:(id)a4 error:(id)a5;

@end
