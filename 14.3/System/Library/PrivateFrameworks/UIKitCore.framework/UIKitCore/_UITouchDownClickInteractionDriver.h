@class NSString, _UITouchDownGestureRecognizer, UIView, UIGestureRecognizer;
@protocol _UIClickInteractionDriverDelegate;

@interface _UITouchDownClickInteractionDriver : NSObject <_UIClickInteractionDriving, UIGestureRecognizerDelegate> {
    _UITouchDownGestureRecognizer *_gesture;
}

@property (class, readonly, nonatomic) BOOL requiresForceCapability;
@property (class, readonly, nonatomic) BOOL prefersCancelsTouchesInView;

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelInteraction;
- (void)_handleGestureRecognizer:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
