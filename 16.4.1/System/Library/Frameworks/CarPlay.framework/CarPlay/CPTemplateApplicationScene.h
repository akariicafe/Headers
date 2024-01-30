@class _UIContextBinder, NSString, UITraitCollection, CPUIContentStyleDiffInspector, CPWindow, UIScreen, UIApplicationSceneSettingsDiffInspector, CPInterfaceController, UIStatusBarManager;
@protocol CPTemplateApplicationSceneDelegate, NSObject, UICoordinateSpace;

@interface CPTemplateApplicationScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace, _UISceneSettingsDiffAction, CPWindowProviding> {
    id<NSObject> _sceneWillConnectObserver;
    id<NSObject> _didFinishLaunchingObserver;
    BOOL _sceneWillConnect;
    _UIContextBinder *_contextBinder;
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    long long _screenRequestedOverscanCompensation;
}

@property (class, readonly, nonatomic) CPTemplateApplicationScene *activeTemplateScene;
@property (class, readonly, nonatomic) BOOL _hostsWindows;

@property (retain, nonatomic) CPWindow *carWindow;
@property (retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsInterfaceStyleDiffInspector;
@property (retain, nonatomic) CPUIContentStyleDiffInspector *mapStyleInspector;
@property (retain, nonatomic) id<CPTemplateApplicationSceneDelegate> delegate;
@property (readonly, nonatomic) CPInterfaceController *interfaceController;
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
@property (readonly, nonatomic) UITraitCollection *carTraitCollection;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)_attachWindow:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (void)_detachWindow:(id)a0;
- (BOOL)_permitContextCreationForBindingDescription:(struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (id)initWithSession:(id)a0 connectionOptions:(id)a1;
- (void)_invalidate;
- (void).cxx_destruct;
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
- (void)_updateContentStyle;
- (id)_componentForKey:(id)a0;
- (void)_deliverInterfaceControllerToDelegate;
- (long long)_mapStyle;
- (void)_refreshTraitCollection;
- (BOOL)_sceneWillConnect;
- (BOOL)_shouldCallAppDelegate;
- (BOOL)_shouldCreateCarWindow;
- (id)_templateSettings;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
