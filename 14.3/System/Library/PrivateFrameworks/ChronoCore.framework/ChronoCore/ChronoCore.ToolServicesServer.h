@interface ChronoCore.ToolServicesServer : NSObject <BSServiceConnectionListenerDelegate, CHSChronoToolServiceServerInterface> {
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ extensionService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ stateCaptureService;
    void /* unknown type, empty encoding */ keybagMonitor;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ connectionListener;
    void /* unknown type, empty encoding */ clientConnections;
    void /* unknown type, empty encoding */ queue;
}

- (void)cacheDescriptorsForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetCaches:(id)a0 completion:(id /* block */)a1;
- (void)disableWakeBudgetWithCompletion:(id /* block */)a0;
- (void)resetWakeBudgetWithCompletion:(id /* block */)a0;
- (void)widgetsWithTimelines:(id /* block */)a0;
- (void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)wakesRemainingForExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)a0;
- (void)fetchStateForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)timelineForWidgetKey:(id)a0 completion:(id /* block */)a1;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
