@class NSNumber, NSString, HKSPObserverSet;

@interface HDSPDevicePowerMonitor : NSObject <HDSPNotificationObserver>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (retain, nonatomic) NSNumber *isChargingOverride;
@property (retain, nonatomic) NSNumber *batteryLevelOverride;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) float batteryLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallbackScheduler:(id)a0;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
