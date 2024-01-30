@class NSDictionary, FPDServer, FPAppRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface FPDAppMonitor : NSObject {
    NSDictionary *_defaultProviderByAppBundleID;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _didChangeProvidersToken;
    int _didChangeDefaultProviderToken;
}

@property (readonly, weak, nonatomic) FPDServer *server;
@property (getter=isMonitoring) BOOL monitoring;
@property (readonly, copy, nonatomic) FPAppRegistry *appRegistry;

- (void)_didUnregisterApps:(id)a0;
- (id)_updateDefaultProviderDomainID;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (void)_populateListOfMonitoredApps;
- (int)_registerForNotification:(id)a0 handler:(id /* block */)a1;
- (void)_didRegisterApps:(id)a0;
- (void)startMonitoring;
- (void)_didChangeLocale:(id)a0;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)_updateDefaultProviderByAppBundleID;
- (id)_appMetadataIfMonitoringIsNeeded:(id)a0;
- (id)initWithServer:(id)a0;
- (void)_didChangeListOfProviders;
- (void)dumpStateTo:(id)a0;

@end
