@class UIWindow, NSString, NSXPCListener, BKSTouchStream, PSPointerClientController, EDWindow, NSMutableArray;
@protocol BSInvalidatable;

@interface EDAppDelegate : UIResponder <EDLensViewDelegate, FBSSceneDelegate, NSXPCListenerDelegate, EDWindowTrackingDelegate, UIApplicationDelegate> {
    NSXPCListener *_serviceListener;
    EDWindow *_window;
    NSMutableArray *_liveConnections;
    int _notifyTokenLocked;
    BKSTouchStream *_touchStream;
    id<BSInvalidatable> _mousePointerServiceAssertion;
    BOOL _isFloating;
    struct CGPoint { double x; double y; } _lastPresentationLocation;
    double _lastDismissedTime;
    PSPointerClientController *_pointerClientController;
    id<BSInvalidatable> _hidePointerAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (void)scene:(id)a0 didUpdateWithDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)lensView;
- (void)lockStateChanged;
- (void)cancelShowingEyeDropper;
- (void)beginShowingEyeDropper;
- (void)floatEyeDropper;
- (void)hideSystemPointer:(BOOL)a0;
- (void)_enumerateRemoteClientsUsingBlock:(id /* block */)a0;
- (void)lensView:(id)a0 didSelectColor:(id)a1;
- (void)lensViewDidDismiss:(id)a0;
- (void)trackedTouchesBegan:(id)a0;
- (void)trackedTouchesMoved:(id)a0;
- (void)trackedTouchesCancelled:(id)a0;
- (void)trackedTouchesEnded:(id)a0;

@end
