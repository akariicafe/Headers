@class NSString, BKDevice;
@protocol VTBiometricMatchMonitorDelegate;

@interface VTBiometricMatchMonitor : VTEventMonitor <BKDeviceDelegate>

@property (retain, nonatomic) BKDevice *biometricDevice;
@property (weak, nonatomic) id<VTBiometricMatchMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)startObserving;
- (BOOL)getLastBiometricMatchEvent:(BOOL *)a0 atTime:(unsigned long long *)a1;
- (void)device:(id)a0 matchEventOccurred:(id)a1;

@end
