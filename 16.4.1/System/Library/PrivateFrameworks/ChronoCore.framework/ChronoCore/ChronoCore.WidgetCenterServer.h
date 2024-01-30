@interface ChronoCore.WidgetCenterServer : NSObject <NSXPCListenerDelegate, WidgetKit.WidgetCenterConnection_Host> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ extensionManager;
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ descriptorService;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_loadCurrentConfigurations:(id /* block */)a0;
- (void)_reloadAllTimelines:(id /* block */)a0;
- (void)_reloadTimelinesOfKind:(id)a0 completion:(id /* block */)a1;
- (void)_reloadTimelinesOfKind:(id)a0 inBundle:(id)a1 completion:(id /* block */)a2;
- (void)invalidateConfigurationRecommendationsWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
