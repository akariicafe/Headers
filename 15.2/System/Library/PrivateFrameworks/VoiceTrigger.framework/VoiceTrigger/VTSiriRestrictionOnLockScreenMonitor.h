@class NSString;

@interface VTSiriRestrictionOnLockScreenMonitor : VTEventMonitor <MCProfileConnectionObserver> {
    BOOL _isRestricted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)isRestricted;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_didReceiveRestrictionChanged:(BOOL)a0;
- (void)_didReceiveRestrictionChangedInQueue:(BOOL)a0;
- (id)init;
- (void)_notifyObserver:(id)a0 withRestricted:(BOOL)a1;
- (BOOL)_checkSiriRestrictedOnLockScreen;

@end
