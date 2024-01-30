@interface VideosUI.BackgroundPlaybackUIInteractionManager : NSObject {
    void /* unknown type, empty encoding */ backgroundMediaController;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ overridesUserInterfaceStyleWhenPlaying;
    void /* unknown type, empty encoding */ supportsFullScreenTransition;
    void /* unknown type, empty encoding */ providesFullscreenTransitionUI;
    void /* unknown type, empty encoding */ swipeUpView;
    void /* unknown type, empty encoding */ playbackState;
    void /* unknown type, empty encoding */ fullscreenTransitionHandler;
    void /* unknown type, empty encoding */ playbackStateChangeHandler;
    void /* unknown type, empty encoding */ updateUICompletionHandler;
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ menuGestureRecognizer;
    void /* unknown type, empty encoding */ userInterfaceStyleToRestore;
    void /* unknown type, empty encoding */ playbackDidStartObserver;
    void /* unknown type, empty encoding */ playbackDidStopObserver;
    void /* unknown type, empty encoding */ firstShowcasing;
    void /* unknown type, empty encoding */ showcaseObserver;
}

- (void)onSwipeUp;
- (id)init;
- (void).cxx_destruct;

@end
