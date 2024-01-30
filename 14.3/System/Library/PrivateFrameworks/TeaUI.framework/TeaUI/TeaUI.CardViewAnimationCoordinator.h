@interface TeaUI.CardViewAnimationCoordinator : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ layoutOptions;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ parentDelegate;
    void /* unknown type, empty encoding */ behavior;
    void /* unknown type, empty encoding */ presentationState;
    void /* unknown type, empty encoding */ coordinatingCoordinators;
    void /* unknown type, empty encoding */ initialCoordinatingPresentationState;
    void /* unknown type, empty encoding */ dimmingAlpha;
    void /* unknown type, empty encoding */ animatingPresentationState;
    void /* unknown type, empty encoding */ coordinatingPresentationState;
    void /* unknown type, empty encoding */ rootView;
    void /* unknown type, empty encoding */ panView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ dimmingView;
    void /* unknown type, empty encoding */ panGestureRecoginzer;
    void /* unknown type, empty encoding */ panLockState;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ session;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)handleWithRecognizer:(id)a0;

@end
