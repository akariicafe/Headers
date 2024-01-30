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

- (void)setView:(id)a0;
- (id)init;
- (void)dealloc;
- (id)gestureRecognizers;
- (void)setDelegate:(id)a0;
- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)viewWillDrawAtTime:(double)a0;
- (void)viewDidDrawAtTime:(double)a0;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (BOOL)wantsRedraw;
- (void)activateFreeCamera;

@end
