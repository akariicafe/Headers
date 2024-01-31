@class CPInstrumentClusterController, NSString, UITraitCollection, UIWindow, CPUIContentStyleDiffInspector, UIScreen, UIStatusBarManager, _UIContextBinder;
@protocol UICoordinateSpace, NSObject, CPTemplateApplicationInstrumentClusterSceneDelegate;

@interface CPTemplateApplicationInstrumentClusterScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace, _UISceneSettingsDiffAction, CRSUIClusterZoomActionDelegate, CRSUIInstrumentClusterSettingsObserving> {
    id<NSObject> _sceneWillConnectObserver;
    id<NSObject> _didFinishLaunchingObserver;
    BOOL _sceneWillConnect;
    _UIContextBinder *_contextBinder;
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    long long _screenRequestedOverscanCompensation;
}

@property (class, readonly, nonatomic) BOOL _hostsWindows;

@property (retain, nonatomic) CPInstrumentClusterController *instrumentClusterController;
@property (retain, nonatomic) UIWindow *instrumentClusterWindow;
@property (retain, nonatomic) CPUIContentStyleDiffInspector *mapStyleInspector;
@property (retain, nonatomic) id<CPTemplateApplicationInstrumentClusterSceneDelegate> delegate;
@property (readonly, nonatomic) long long contentStyle;
@property (readonly, nonatomic) UIScreen *_screen;
@property (readonly, nonatomic) long long _interfaceOrientation;
@property (readonly, nonatomic) id<UICoordinateSpace> _coordinateSpace;
@property (readonly, nonatomic) UITraitCollection *_traitCollection;
@property (readonly, nonatomic) UIStatusBarManager *_statusBarManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (unsigned long long)itemType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (BOOL)_permitContextCreationForBindingDescription:(struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; })a0;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (void)_detachWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (void)_invalidate;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (void)_attachWindow:(id)a0;
- (id)initWithSession:(id)a0 connectionOptions:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBounds;
- (id)_allWindowsIncludingInternalWindows:(BOOL)a0 onlyVisibleWindows:(BOOL)a1;
- (id)_definition;
- (id)_fbsSceneLayerForWindow:(id)a0;
- (void)_readySceneForConnection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsetsForInterfaceOrientation:(long long)a0;
- (void)_updateSceneTraitsAndPushTraitsToScreen:(BOOL)a0;
- (void)_updateVisibleWindowOrderWithTest:(id /* block */)a0;
- (void)_windowUpdatedProperties:(id)a0;
- (void)_windowUpdatedVisibility:(id)a0;
- (long long)_mapStyle;
- (void)_updateContentStyle;
- (void)updateSceneForNewCompassSetting;
- (id)_clusterSettings;
- (unsigned long long)compassSetting;
- (void)handleZoomInDirection:(long long)a0;
- (unsigned long long)speedLimitSetting;
- (void)updateSceneForNewItemTypeSetting;
- (void)updateSceneForNewSpeedLimitSetting;
- (id)_componentForKey:(id)a0;
- (void)_deliverControllerToDelegate;
- (void)_refreshTraitCollection;
- (id)_templateSettings;

@end
