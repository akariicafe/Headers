@interface ChronoCore.ApplicationDelegate : UIResponder <UIApplicationDelegate> {
    void /* unknown type, empty encoding */ environmentProvidingFactory;
    void /* unknown type, empty encoding */ widgetCenterServer;
    void /* unknown type, empty encoding */ servicesServer;
    void /* unknown type, empty encoding */ toolServicesServer;
    void /* unknown type, empty encoding */ extensionManager;
    void /* unknown type, empty encoding */ placeholderService;
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ snapshotService;
    void /* unknown type, empty encoding */ cacheByExtensionProvider;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ configurationService;
    void /* unknown type, empty encoding */ stateCaptureService;
    void /* unknown type, empty encoding */ dataProtectionMonitor;
    void /* unknown type, empty encoding */ powerlogViewService;
    void /* unknown type, empty encoding */ powerlogUpdateService;
    void /* unknown type, empty encoding */ powerlogSuggestionService;
    void /* unknown type, empty encoding */ locationService;
    void /* unknown type, empty encoding */ localeChangeCoordinator;
    void /* unknown type, empty encoding */ layerSnapshotter;
    void /* unknown type, empty encoding */ userManager;
    void /* unknown type, empty encoding */ duetWidgetConfigurationManager;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ servicesBootstrapExtension;
    void /* unknown type, empty encoding */ finishLaunchingToken;
    void /* unknown type, empty encoding */ enableGarbageCollection;
    void /* unknown type, empty encoding */ appAuthorizationMonitor;
    void /* unknown type, empty encoding */ reaperNotificationQueue;
    void /* unknown type, empty encoding */ preferences;
    void /* unknown type, empty encoding */ wakeManager;
    void /* unknown type, empty encoding */ sigtermSource;
}

- (id)application:(id)a0 configurationForConnectingSceneSession:(id)a1 options:(id)a2;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)applicationDidReceiveMemoryWarning:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
