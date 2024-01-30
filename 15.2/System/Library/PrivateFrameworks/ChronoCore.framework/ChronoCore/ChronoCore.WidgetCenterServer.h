@interface ChronoCore.WidgetCenterServer : NSObject <NSXPCListenerDelegate, WidgetKit.WidgetCenterConnection_Host> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ timelineService;
}

- (void)_loadCurrentConfigurations:(id /* block */)a0;
- (void)_reloadTimelinesOfKind:(id)a0 completion:(id /* block */)a1;
- (void)_reloadTimelinesOfKind:(id)a0 inBundle:(id)a1 completion:(id /* block */)a2;
- (void)_reloadAllTimelines:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
