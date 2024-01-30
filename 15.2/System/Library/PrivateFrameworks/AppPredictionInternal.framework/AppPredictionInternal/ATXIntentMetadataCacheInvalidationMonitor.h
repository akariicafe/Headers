@class NSUserDefaults, _ATXInternalUninstallNotification, ATXInternalAppRegistrationNotification;
@protocol ATXIntentMetadataCacheInvalidationDelegate;

@interface ATXIntentMetadataCacheInvalidationMonitor : NSObject {
    id<ATXIntentMetadataCacheInvalidationDelegate> _delegate;
    ATXInternalAppRegistrationNotification *_appRegistrationListener;
    _ATXInternalUninstallNotification *_appUninstallListener;
    NSUserDefaults *_userDefaults;
}

- (void)_notifyDelegateApplicationsDidUninstall:(id)a0;
- (void)setDelegateAndStartMonitoring:(id)a0 userDefaults:(id)a1;
- (void)setDelegateAndStartMonitoring:(id)a0;
- (id)_getCurrentBuild;
- (void).cxx_destruct;
- (void)_notifyDelegateApplicationsDidUpdate:(id)a0;
- (void)_notifyDelegateSystemDidUpdate;
- (void)_listenForAppRegistrationAndUninstall;
- (void)_checkForOSUpdate;

@end
