@class SCNView, SCNNode;

@interface SCNEventHandler : NSObject {
    SCNView *_view;
    BOOL _enableFreeCamera;
    BOOL _autoSwitchToFreeCamera;
}

@property (readonly) SCNView *view;
@property BOOL enableFreeCamera;
@property BOOL autoSwitchToFreeCamera;
@property (readonly) SCNNode *freeCamera;

- (id)gestureRecognizers;
- (void)setView:(id)a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)init;
- (void)cameraDidChange;
- (void)sceneWillChange;
- (void)activateFreeCamera;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (void)viewDidDrawAtTime:(double)a0;
- (void)viewWillDrawAtTime:(double)a0;
- (BOOL)wantsRedraw;

@end
