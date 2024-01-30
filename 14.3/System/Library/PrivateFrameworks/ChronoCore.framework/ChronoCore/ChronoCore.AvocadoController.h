@interface ChronoCore.AvocadoController : NSObject <NSXPCListenerDelegate, WidgetKit.AvocadoControllerConnection_Host, WidgetKit.WidgetCenterConnection_Host> {
    void /* unknown type, empty encoding */ avocadoListener;
    void /* unknown type, empty encoding */ widgetListener;
    void /* unknown type, empty encoding */ timelineService;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_loadCurrentConfigurations:(id /* block */)a0;
- (void)_reloadTimelinesOfKind:(id)a0 completion:(id /* block */)a1;
- (void)_reloadAllTimelines:(id /* block */)a0;
- (void)_reloadTimelinesOfKind:(id)a0 inBundle:(id)a1 completion:(id /* block */)a2;
- (void)_reloadWidgetsFor:(id)a0 completion:(id /* block */)a1;
- (void)_reloadWidgetsInExtensionBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
