@class NSArray, NSString, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIPanGestureRecognizer, UIView;
@protocol AVTransitionDriverDelegate;

@interface AVInteractiveTransitionGestureTracker : NSObject <UIGestureRecognizerDelegate, AVTransitionDriver> {
    UIPanGestureRecognizer *_activePanGestureRecognizer;
}

@property (nonatomic, getter=isPinchToDismissEnabled) BOOL pinchToDismissEnabled;
@property (nonatomic, getter=isPinchToPresentEnabled) BOOL pinchToPresentEnabled;
@property (nonatomic, getter=isPanToDismissEnabled) BOOL panToDismissEnabled;
@property (nonatomic) double previousPinchScale;
@property (nonatomic, setter=_setRotation:) double _rotation;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *indirectPanGestureRecognizer;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property (readonly, nonatomic) NSArray *recognizers;
@property (nonatomic, getter=isWaitingForTransition) BOOL waitingForTransition;
@property (nonatomic, getter=isWaitingForBoundsChange) BOOL waitingForBoundsChange;
@property (nonatomic, getter=isWaitingForLocationChangeAfterBoundsChange) BOOL waitingForLocationChangeAfterBoundsChange;
@property (nonatomic) double timestampOfTouchWithLocationChangeAfterBoundsChange;
@property (nonatomic) BOOL hasContinued;
@property (nonatomic) BOOL hasRotated;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialCoordinateSpaceBounds;
@property (nonatomic) struct CGPoint { double x; double y; } gestureLocationAfterBoundsChange;
@property (nonatomic) struct CGPoint { double x; double y; } lastReportedLocationInWindow;
@property (nonatomic) struct CGPoint { double x; double y; } anchorLocationInWindow;
@property (nonatomic) BOOL lastNonZeroVelocityWasDownward;
@property (nonatomic) long long transitionInteraction;
@property (weak, nonatomic) UIView *view;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTransitionDriverDelegate> transitionDriverDelegate;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) double rotationVelocity;
@property (readonly, nonatomic) double pinchScale;
@property (readonly, nonatomic) double pinchVelocity;
@property (weak, nonatomic) UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer;

- (void)_cancel;
- (struct CGPoint { double x0; double x1; })translationInWindow;
- (id)init;
- (void)_handlePinchGesture:(id)a0;
- (void)dealloc;
- (void)_reset;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)_locationRecognizer;
- (void)didMoveToView:(id)a0;
- (void)_updateLastNonZeroVelocityDirection;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_setHasContinuedIfNeeded;
- (BOOL)transitionDriver:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (struct CGPoint { double x0; double x1; })_untranslatedUnfilteredLocationInFixedCoordinateSpace;
- (void)_resetGesturesIfPossible;
- (struct CGPoint { double x0; double x1; })_filteredUntranslatedLocationInWindow;
- (void)willMoveToView:(id)a0;
- (void)_finish;
- (double)angleOfVelocityInWindow;
- (void)_handlePanGesture:(id)a0;
- (void)addRecognizersToView:(id)a0;
- (void)_handleRotationGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isWaitingToContinue;
- (BOOL)isTracking;
- (struct CGPoint { double x0; double x1; })locationInWindow;
- (void)_beginTracking:(long long)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGPoint { double x0; double x1; })velocityInWindow;

@end
