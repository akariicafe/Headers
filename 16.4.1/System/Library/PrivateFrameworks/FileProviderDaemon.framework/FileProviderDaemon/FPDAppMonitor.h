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

- (id)initWithServer:(id)a0;
- (int)_registerForNotification:(id)a0 handler:(id /* block */)a1;
- (void)dumpStateTo:(id)a0;
- (void)_didChangeLocale:(id)a0;
- (id)listOfPlaceholderApps;
- (void)_didRegisterApps:(id)a0;
- (void)startMonitoring;
- (void)_populateListOfMonitoredApps;
- (void)_didChangeListOfProviders;
- (id)_appMetadataIfMonitoringIsNeeded:(id)a0;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (id)_updateDefaultProviderDomainID;
- (void)_didUnregisterApps:(id)a0;
- (void)_updateDefaultProviderByAppBundleID;
- (void).cxx_destruct;
- (void)stopMonitoring;

@end
