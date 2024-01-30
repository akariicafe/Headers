@class NSString, BKSTouchStream, UIWindow, EDLensView, NSMutableDictionary, NSMutableArray, NSXPCListener, PSPointerClientController;
@protocol BSInvalidatable;

@interface EDAppDelegate : UIResponder <FBSSceneDelegate, NSXPCListenerDelegate, EDLensViewDelegate, UIApplicationDelegate> {
    NSXPCListener *_serviceListener;
    NSMutableArray *_liveConnections;
    int _notifyTokenLocked;
    BKSTouchStream *_touchStream;
    BOOL _isFloating;
    BOOL _selectedColor;
    double _lastDismissedTime;
    PSPointerClientController *_pointerClientController;
    id<BSInvalidatable> _hidePointerAssertion;
    NSMutableDictionary *_sceneDelegateByDisplayIdentifier;
    NSMutableDictionary *_mousePointerServiceAssertionByDisplayIdentifier;
    NSMutableDictionary *_lastDisplayLocationByDisplayIdentifier;
    EDLensView *_activeLensView;
}

@property (readonly, nonatomic) EDLensView *activeLensView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)_sceneWillConnect:(id)a0;
- (void)_sceneDidDisconnect:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)scene:(id)a0 didUpdateWithDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)floatEyeDropper;
- (void)_enumerateRemoteClientsUsingBlock:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })_lastDisplayLocationForLensView:(id)a0;
- (struct CGPoint { double x0; double x1; })_startingPointForWindow:(id)a0;
- (void)_updateLastDisplayLocation:(struct CGPoint { double x0; double x1; })a0 forLensView:(id)a1;
- (void)beginShowingEyeDropper:(id)a0;
- (void)cancelShowingEyeDropper;
- (void)dismissEyedropper;
- (void)hideSystemPointer:(BOOL)a0;
- (void)lensView:(id)a0 didSelectColor:(id)a1;
- (void)lensViewDidActivate:(id)a0;
- (void)lockStateChanged;
- (id)mainScreenLensView;
- (id)mainScreenWindow;
- (void)performOnAllWindows:(id /* block */)a0;

@end
