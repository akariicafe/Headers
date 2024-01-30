@class FBSceneManager, NSString, _UIKBProductivityPanGestureRecognizer, SBWorkspaceKeyboardFocusController, SBSystemGestureManager, _UIKBProductivitySingleTapGesture, _UIKBProductivityLongPressGestureRecognizer, _UIKBProductivityDoubleTapGesture, _UIKBProductivityPinchGestureRecognizer;

@interface SBProductivityGestureController : NSObject <UIGestureRecognizerDelegate> {
    FBSceneManager *_sceneManager;
    SBSystemGestureManager *_systemGestureManager;
    SBWorkspaceKeyboardFocusController *_focusController;
    _UIKBProductivitySingleTapGesture *_threeFingerSingleTap;
    _UIKBProductivityDoubleTapGesture *_threeFingerDoubleTap;
    _UIKBProductivityPanGestureRecognizer *_threeFingerSlide;
    _UIKBProductivityLongPressGestureRecognizer *_threeFingerLongPress;
    _UIKBProductivityPinchGestureRecognizer *_threeFingerPinch;
    double _initPinchableDistance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)slideDirectionWithGesture:(id)a0;
- (void)handleProductivityGesture:(id)a0;
- (long long)_orientationOfFocusedSceneForGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_setupGestureRecognizers;
- (BOOL)_enabledForCurrentAppScenes;
- (id)initWithSystemGestureManager:(id)a0 focusController:(id)a1;
- (id)_focusedSceneForAction;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
