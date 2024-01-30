@class NSMutableDictionary, FBSDisplayIdentity, DBFocusController, FBSDisplayConfiguration, UIScreen, DBInstrumentClusterWorkspaceOwner, UIView, DBInstrumentClusterRootViewController, CARScreenInfo, DBEnvironmentConfiguration, NSHashTable, CHSWidgetHost, NSString, DBWorkspace, UIWindow;
@protocol CRSIconLayoutVehicleDataProviding, BSInvalidatable;

@interface DBInstrumentCluster : NSObject <CARSessionCommandObserving, DBEnvironmentConfigurationObserving, DBNavigationStateObserving, DBEnvironment>

@property (retain, nonatomic) UIScreen *screen;
@property (retain, nonatomic) CARScreenInfo *screenInfo;
@property (retain, nonatomic) NSHashTable *sceneObservers;
@property (retain, nonatomic) NSMutableDictionary *identifierToAppScenesMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToForegroundAppScenesMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToAppInfoMap;
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;
@property (retain, nonatomic) DBWorkspace *workspace;
@property (retain, nonatomic) DBInstrumentClusterWorkspaceOwner *workspaceOwner;
@property (retain, nonatomic) UIWindow *clusterWindow;
@property (retain, nonatomic) DBInstrumentClusterRootViewController *viewController;
@property (retain, nonatomic) UIWindow *cornerRadiusWindow;
@property (retain, nonatomic) UIView *cornerRadiusView;
@property (nonatomic) double currentCornerRadius;
@property (retain, nonatomic) UIWindow *interestingWindow;
@property (retain, nonatomic) UIView *interestingView;
@property (retain, nonatomic) id<BSInvalidatable> dispatchingFocusAssertion;
@property (retain, nonatomic) id<BSInvalidatable> dispatchingSystemAssertion;
@property (retain, nonatomic) DBFocusController *focusController;
@property (retain, nonatomic) CHSWidgetHost *widgetHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) id<CRSIconLayoutVehicleDataProviding> iconLayoutDataProvider;

+ (id)_directionStringForDirection:(long long)a0;

- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 scene:(id)a1 didReceiveActions:(id)a2;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (void)sceneManager:(id)a0 willDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 appliedWithContext:(id)a2;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 preparedWithContext:(id)a2;
- (void)addObserver:(id)a0;
- (void)handleEvent:(id)a0;
- (id)focusWindow;
- (void)sceneManager:(id)a0 scene:(id)a1 didUpdateClientSettingsWithDiff:(id)a2 oldClientSettings:(id)a3 transitionContext:(id)a4;
- (void)removeObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 completedWithContext:(id)a2 error:(id)a3;
- (id)systemGestureWindow;
- (void)session:(id)a0 receivedUnhandledRemoteEvent:(id)a1 withPayload:(id)a2;
- (id)_clusterScene;
- (void)_drawCorners;
- (id)_foregroundActiveScene;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_rootViewControllerInsets;
- (id)applicationInfoForScene:(id)a0;
- (void)environmentConfiguration:(id)a0 appearanceStyleDidChange:(long long)a1;
- (void)environmentConfiguration:(id)a0 mapsAppearanceStyleDidChange:(long long)a1;
- (void)environmentConfiguration:(id)a0 nightModeDidChange:(BOOL)a1;
- (void)environmentConfiguration:(id)a0 receivedShowUIWithURL:(id)a1;
- (void)environmentConfiguration:(id)a0 viewAreaDidChangeFromViewAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 toViewAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 duration:(double)a5 transitionControlType:(unsigned long long)a6;
- (id)initWithWindowScene:(id)a0 environmentConfiguration:(id)a1;
- (void)navigationStateProvider:(id)a0 frontmostIdentifierDidChange:(id)a1;
- (void)navigationStateProvider:(id)a0 navigatingIdentifiersDidChange:(id)a1;
- (BOOL)preflightRequiredForApplicationInfo:(id)a0;
- (void)processMonitor:(id)a0 didHandleDeathOfBundleIdentifier:(id)a1;
- (void)processMonitor:(id)a0 shouldHandleDeathOfBundleIdentifier:(id)a1 isCrash:(BOOL)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForAppInfo:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForAppInfo:(id)a0 proxyAppInfo:(id)a1;
- (id)sceneForAppInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sceneFrameForAppInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sceneFrameForAppInfo:(id)a0 proxyAppInfo:(id)a1;
- (id)sceneIdentifierForAppInfo:(id)a0;
- (void)setupFocusRulesForDisplayWithConfiguration:(id)a0;
- (void)setupSystemRulesForDisplayWithConfiguration:(id)a0;
- (void)stopUIReceivedForEnvironmentConfiguration:(id)a0;

@end
