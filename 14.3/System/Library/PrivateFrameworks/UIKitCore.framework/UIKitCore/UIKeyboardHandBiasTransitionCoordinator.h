@class UIKeyboardHandBiasTransitionContext, UIKeyboardSquishTransition, NSString, UIPanGestureRecognizer;
@protocol UIKeyboardHandBiasTransitionCoordinatorDelegate;

@interface UIKeyboardHandBiasTransitionCoordinator : NSObject <UIGestureRecognizerDelegate> {
    BOOL _edgeSwipeDetected;
    BOOL _transitionDidBegin;
    unsigned long long _transitionStartEdge;
    long long _initialBias;
    long long _transitionTargetBias;
    double _initialEdgeTranslation;
    double _edgeSwipeProgress;
    double _edgeSwipeVelocity;
}

@property (retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) UIKeyboardSquishTransition *currentTransition;
@property (retain, nonatomic) UIKeyboardHandBiasTransitionContext *currentContext;
@property (weak, nonatomic) id<UIKeyboardHandBiasTransitionCoordinatorDelegate> delegate;
@property (nonatomic) double swipeWidthRatio;
@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uninstallGestureRecognizers;
- (void)installGestureRecognizers;
- (void)_didRecognizeSpacebarGestureOnStartEdge:(unsigned long long)a0 withDistance:(double)a1;
- (void).cxx_destruct;
- (void)beginHandBiasTransitionWithContext:(id)a0;
- (void)_handBiasPanGestureRecognizerStateDidChange:(id)a0;
- (void)finishHandBiasTransition;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
