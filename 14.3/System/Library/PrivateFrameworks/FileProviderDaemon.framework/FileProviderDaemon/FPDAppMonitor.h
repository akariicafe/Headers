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

- (void)startMonitoring;
- (id)initWithServer:(id)a0;
- (id)_appMetadataIfMonitoringIsNeeded:(id)a0;
- (void)_didChangeLocale:(id)a0;
- (void).cxx_destruct;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (void)_didChangeListOfProviders;
- (void)_populateListOfMonitoredApps;
- (void)_updateDefaultProviderByAppBundleID;
- (void)stopMonitoring;
- (id)_updateDefaultProviderDomainID;
- (int)_registerForNotification:(const char *)a0 handler:(id /* block */)a1;
- (void)_didUnregisterApps:(id)a0;
- (void)_didRegisterApps:(id)a0;
- (void)dumpStateTo:(id)a0;

@end
