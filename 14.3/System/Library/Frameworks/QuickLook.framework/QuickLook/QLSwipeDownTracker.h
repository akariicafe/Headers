@class NSString;

@interface QLSwipeDownTracker : QLPHSwipeDownTracker <QLDismissGestureTracking> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialBounds;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } trackedCenter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackedBounds;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } trackedTransform;
@property (readonly, nonatomic) struct _QLDismissGestureTrackingVelocity { double x0; double x1; double x2; double x3; } trackedVelocity;
@property (readonly, nonatomic) double finalAnimationDuration;
@property (readonly, nonatomic) double finalAnimationSpringDamping;
@property (readonly, nonatomic) double dismissalProgress;
@property (readonly, nonatomic) BOOL shouldFinishDismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTrackingCenter:(struct CGPoint { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 withInitialGestureLocation:(struct CGPoint { double x0; double x1; })a3;

@end
