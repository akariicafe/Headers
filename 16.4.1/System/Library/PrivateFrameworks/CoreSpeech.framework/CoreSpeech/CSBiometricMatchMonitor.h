@class NSString, BKDevice;
@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor : CSEventMonitor <BKDeviceDelegate>

@property (retain, nonatomic) BKDevice *biometricDevice;
@property (weak, nonatomic) id<CSBiometricMatchMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)startObserving;
- (id)init;
- (void).cxx_destruct;
- (void)device:(id)a0 matchEventOccurred:(id)a1;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)a0;
- (BOOL)getLastBiometricMatchEvent:(BOOL *)a0 atTime:(unsigned long long *)a1;

@end
