@class NSString;

@interface ChronoCore.WidgetSceneDelegate : UIResponder <CHUISAvocadoWindowSceneDelegate, _UISceneSettingsDiffAction> {
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ foregroundScene;
    void /* unknown type, empty encoding */ hasBeenVisiblySettledForCurrentVisibilitySession;
    void /* unknown type, empty encoding */ effectiveVisibility;
    void /* unknown type, empty encoding */ timelineReloadedNotificationCancellable;
    void /* unknown type, empty encoding */ timelineServiceCanAppearInSecureEnvironmentAssertion;
    void /* unknown type, empty encoding */ evaluateStaleTimelineContentTimer;
    void /* unknown type, empty encoding */ layerSnapshotter;
    void /* unknown type, empty encoding */ snapshotGeneration;
    void /* unknown type, empty encoding */ invalidateAfterSnapshot;
    void /* unknown type, empty encoding */ liveViewPresentationContext;
    void /* unknown type, empty encoding */ sceneSettingsDiffInspector;
    void /* unknown type, empty encoding */ sceneDiffActionKey;
    void /* unknown type, empty encoding */ extensionSubscriptions;
    void /* unknown type, empty encoding */ foregroundSceneContentLimiter;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;
@property (nonatomic, readonly) NSString *description;

- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;
- (void)sceneDidDisconnect:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)applicationDidReceiveMemoryWarning;

@end
