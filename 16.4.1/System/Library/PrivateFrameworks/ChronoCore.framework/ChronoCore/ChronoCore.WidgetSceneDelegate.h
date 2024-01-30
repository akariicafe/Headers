@class NSString;

@interface ChronoCore.WidgetSceneDelegate : UIResponder <CHUISWidgetSceneDelegate, _UISceneSettingsDiffAction, _UISceneBSActionHandler> {
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ foregroundScene;
    void /* unknown type, empty encoding */ hasBeenVisiblySettledForCurrentVisibilitySession;
    void /* unknown type, empty encoding */ effectiveVisibility;
    void /* unknown type, empty encoding */ timelineReloadedNotificationCancellable;
    void /* unknown type, empty encoding */ evaluateStaleTimelineContentTimer;
    void /* unknown type, empty encoding */ layerSnapshotter;
    void /* unknown type, empty encoding */ snapshotGeneration;
    void /* unknown type, empty encoding */ invalidateAfterSnapshot;
    void /* unknown type, empty encoding */ sceneSettingsDiffInspector;
    void /* unknown type, empty encoding */ sceneDiffActionKey;
    void /* unknown type, empty encoding */ confirmationActionSubscribers;
    void /* unknown type, empty encoding */ foregroundSceneContentLimiter;
    void /* unknown type, empty encoding */ environmentModifiersAssertion;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;
@property (nonatomic, readonly) NSString *description;

- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)applicationDidReceiveMemoryWarning;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneDidBecomeActive:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (void)dealloc;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (id)init;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (void).cxx_destruct;
- (void)sceneDidDisconnect:(id)a0;

@end
