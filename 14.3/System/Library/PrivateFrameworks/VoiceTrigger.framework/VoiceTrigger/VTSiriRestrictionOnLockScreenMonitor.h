@class NSString;

@interface VTSiriRestrictionOnLockScreenMonitor : VTEventMonitor <MCProfileConnectionObserver> {
    BOOL _isRestricted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isRestricted;
- (void)_didReceiveRestrictionChangedInQueue:(BOOL)a0;
- (id)init;
- (void)_stopMonitoring;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)_notifyObserver:(id)a0 withRestricted:(BOOL)a1;
- (BOOL)_checkSiriRestrictedOnLockScreen;
- (void)_didReceiveRestrictionChanged:(BOOL)a0;
- (void)_startMonitoringWithQueue:(id)a0;

@end
