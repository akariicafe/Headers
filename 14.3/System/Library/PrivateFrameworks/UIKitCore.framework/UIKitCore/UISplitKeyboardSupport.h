@class NSString, CADisplayLink, UIPanGestureRecognizer;

@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate> {
    UIPanGestureRecognizer *_singleFingerPanRecognizer;
    UIPanGestureRecognizer *_twoFingerPanRecognizer;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _splitLockState;
    struct CGPoint { double x; double y; } _targetTranslation;
    struct CGPoint { double x; double y; } _initialTranslation;
    struct CGPoint { double x; double y; } _translationVelocity;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    id /* block */ _bounceCompletionBlock;
}

@property (readonly, nonatomic) BOOL isTranslating;
@property (readonly, nonatomic) BOOL isSplitting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dock;
- (void)undock;
- (BOOL)completedPlacementFrom:(id)a0 to:(id)a1 forController:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)transitionDidFinish:(BOOL)a0;
- (void)dealloc;
- (void)updateProgress:(double)a0 startHeight:(double)a1 endHeight:(double)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)prepareForTransition;
- (void)translateToPlacement:(id)a0 animated:(BOOL)a1;
- (void)_updatedController;
- (void)_disconnectingController:(id)a0;
- (void)_connectController:(id)a0;
- (void)translateDetected:(id)a0;
- (BOOL)generateSplitNotificationForNewPlacement:(id)a0;
- (void)cancelBounceAnimation;
- (void)translateToPlacement:(id)a0 quietly:(BOOL)a1 animated:(BOOL)a2;
- (void)invalidateDisplayLink;
- (void)_updateBounceAnimation:(id)a0;
- (void)bounceAnimationDidFinish;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)cancelGestureRecognizers;
- (void)finishTransitionWithCompletion:(id /* block */)a0;
- (void)updatedControllerApplicator:(id)a0;
- (void)willPerformPlacementFrom:(id)a0 to:(id)a1 forController:(id)a2;
- (BOOL)startedPlacementFrom:(id)a0 to:(id)a1 forController:(id)a2;

@end
