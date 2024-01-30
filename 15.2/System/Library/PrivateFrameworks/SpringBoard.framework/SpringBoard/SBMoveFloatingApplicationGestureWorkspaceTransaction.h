@class SBApplicationSceneUpdateTransaction, NSMutableDictionary;

@interface SBMoveFloatingApplicationGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    BOOL _tryPreemptiveFloatingApplicationActivation;
    BOOL _didAddActivateFloatingApplicationTransaction;
    SBApplicationSceneUpdateTransaction *_activateFloatingApplicationTransaction;
    NSMutableDictionary *_statusBarAssertions;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFloatingApplicationFrame;
}

- (void)_begin;
- (void)_didComplete;
- (void).cxx_destruct;
- (long long)_gestureType;
- (void)_beginWithGesture:(id)a0;
- (void)_updateWithGesture:(id)a0;
- (void)_finishWithGesture:(id)a0;
- (void)_acquireStatusBarAssertions;
- (void)_startSuppressingKeyboardForFloatingApplication;
- (void)_invalidateStatusBarAssertions;
- (void)_stopSuppressingKeyboard;
- (void)_tryPreemptiveFloatingApplicationActivationIfNecessaryWithGesture:(id)a0;
- (void)_updateStatusBarAssertionsForGesture;
- (void)_performBlockWithLiveContentOverlayUpdatesSuspended:(id /* block */)a0;
- (void)_updateStatusBarAssertionsForLayoutState;
- (id)_transitionRequestForPreemptiveFloatingApplicationActivation;

@end
