@class NSString, NPKObserverManager;

@interface NPKLowPowerModeRemoteDeviceMonitor : NSObject <NPKLowPowerModeMonitor> {
    NPKObserverManager *_observersManager;
}

@property (readonly, nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_currentDeviceDomainAccessor;
- (void)_sendLowPowerModeEnabled:(BOOL)a0 toObserver:(id)a1;
- (void)_sendLowPowerModeEnabledStateToObservers;

@end
