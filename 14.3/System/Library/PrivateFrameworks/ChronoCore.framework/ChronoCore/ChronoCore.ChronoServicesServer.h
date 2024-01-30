@interface ChronoCore.ChronoServicesServer : NSObject <BSServiceConnectionListenerDelegate, CHSChronoWidgetServiceServerInterface> {
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ extensionService;
    void /* unknown type, empty encoding */ configurationService;
    void /* unknown type, empty encoding */ keybagMonitor;
    void /* unknown type, empty encoding */ connectionListener;
    void /* unknown type, empty encoding */ clientConnections;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ initialExtensionDiscoveryCompleteSubscription;
}

- (id)widgetEnvironmentDataForBundleIdentifier:(id)a0;
- (void)expireLocationGracePeriods;
- (void)setConfiguredWidgetContainerDescriptors:(id)a0;
- (void)flushPowerlog;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)reloadTimelineForAvocadoWithIdentifier:(id)a0 inBundleWithIdentifier:(id)a1 error:(id *)a2;
- (void)setMetricsSpecification:(id)a0;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;
- (void)applicationWithBundleIdentifierEnteredForeground:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
