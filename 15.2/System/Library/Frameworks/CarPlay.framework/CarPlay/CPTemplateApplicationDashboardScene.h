@class UIScreen, UIWindow, UIStatusBarManager, NSString, _UIContextBinder, CPDashboardController, UITraitCollection;
@protocol CPTemplateApplicationDashboardSceneDelegate, NSObject, UICoordinateSpace;

@interface CPTemplateApplicationDashboardScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace> {
    id<NSObject> _sceneWillConnectObserver;
    id<NSObject> _didFinishLaunchingObserver;
    BOOL _sceneWillConnect;
    _UIContextBinder *_contextBinder;
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    long long _screenRequestedOverscanCompensation;
}

@property (class, readonly, nonatomic) BOOL _hostsWindows;

@property (retain, nonatomic) UIWindow *dashboardWindow;
@property (retain, nonatomic) id<CPTemplateApplicationDashboardSceneDelegate> delegate;
@property (readonly, nonatomic) CPDashboardController *dashboardController;
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

- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (id)_allWindowsIncludingInternalWindows:(BOOL)a0 onlyVisibleWindows:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsetsForInterfaceOrientation:(long long)a0;
- (void)_invalidate;
- (id)initWithSession:(id)a0 connectionOptions:(id)a1;
- (id)_definition;
- (BOOL)_permitContextCreationForBindingDescription:(struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBounds;
- (void)_detachWindow:(id)a0;
- (void)_attachWindow:(id)a0;
- (void).cxx_destruct;
- (void)_readySceneForConnection;
- (id)_fbsSceneLayerForWindow:(id)a0;
- (void)_updateVisibleWindowOrderWithTest:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (id)_componentForKey:(id)a0;
- (void)_windowUpdatedVisibility:(id)a0;
- (void)_windowUpdatedProperties:(id)a0;
- (void)_deliverDashboardControllerToDelegate;

@end
