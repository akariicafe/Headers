@class NSString, _UITouchDurationObservingGestureRecognizer, UIView, UIGestureRecognizer;
@protocol _UIClickInteractionDriverDelegate;

@interface _UILongPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving> {
    unsigned long long _currentState;
    struct { BOOL didUpdateHighlightProgress; BOOL shouldDelayGesture; } _delegateImplements;
    unsigned long long _behavior;
}

@property (class, readonly, nonatomic) BOOL requiresForceCapability;
@property (class, readonly, nonatomic) BOOL prefersCancelsTouchesInView;

@property (retain, nonatomic) _UITouchDurationObservingGestureRecognizer *gestureRecognizer;
@property (nonatomic) double clickDownDuration;
@property (nonatomic) double forceMultiplier;
@property (nonatomic) BOOL reachedClickDownThreshold;
@property (readonly, nonatomic) double clickTimeoutDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIClickInteractionDriverDelegate> delegate;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) double allowableMovement;
@property (nonatomic) BOOL cancelsTouchesInView;
@property (readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property (readonly, nonatomic) double touchDuration;
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement;
@property (readonly, nonatomic) BOOL isCurrentlyAcceleratedByForce;
@property (readonly, nonatomic) BOOL clicksUpAutomaticallyAfterTimeout;
@property (readonly, nonatomic) double maximumEffectProgress;
@property (readonly, nonatomic) unsigned long long inputPrecision;
@property (nonatomic) unsigned long long behavior;

- (void)cancelInteraction;
- (void)_gestureRecognizerFailed:(id)a0;
- (void)_handleGestureRecognizer:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_notifyDelegateOfUpdatedClickDownProgress:(double)a0 forceAdjustedClickDownDuration:(double)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateForActiveGestureRecognizer;
- (void)_asyncGestureBegan;

@end
