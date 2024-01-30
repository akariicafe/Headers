@interface ChronoCore.WidgetSceneDelegate : UIResponder <CHUISAvocadoWindowSceneDelegate> {
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ foreground;
    void /* unknown type, empty encoding */ isEffectivelyVisible;
    void /* unknown type, empty encoding */ timelineReloadedNotificationCancellable;
    void /* unknown type, empty encoding */ evaluateStaleTimelineContentTimer;
    void /* unknown type, empty encoding */ extensionSubscriptions;
    void /* unknown type, empty encoding */ snapshotSubscription;
}

- (void)sceneDidDisconnect:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneWillEnterForeground:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;

@end
