@protocol PLExpandableViewDelegate;

@interface PLExpandableView : UIView {
    id<PLExpandableViewDelegate> _delegate;
    id /* block */ _collapsingCompletionHandler;
    id /* block */ _expansionCompletionHandler;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contractedFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _expandedFrame;
    struct CGPoint { double x; double y; } _leftTouchLocation;
    struct CGPoint { double x; double y; } _rightTouchLocation;
    struct CGPoint { double x; double y; } _previousLeftLocation;
    struct CGPoint { double x; double y; } _previousRightLocation;
    unsigned long long _leftTouchIndex;
    unsigned long long _rightTouchIndex;
    double _pinchVelocity;
    double _trackingTimeInterval;
    double _expansionFraction;
    struct { unsigned char state : 3; unsigned char prevState : 3; unsigned char tracking : 1; unsigned char autorotationDisabled : 1; unsigned char animationDisabled : 1; unsigned char updateContractedFrame : 1; unsigned char updateExpandedFrame : 1; unsigned char allowsExpansion : 1; unsigned char delegateWillBeginExpanding : 1; unsigned char delegateWillCompleteExpanding : 1; unsigned char delegateDidCompleteExpanding : 1; unsigned char delegateWillCancelExpanding : 1; unsigned char delegateDidCancelExpanding : 1; unsigned char delegateDidBeginCollapsing : 1; unsigned char delegateWillCompleteCollapsing : 1; unsigned char delegateDidCompleteCollapsing : 1; unsigned char delegateWillCancelCollapsing : 1; unsigned char delegateDidCancelCollapsing : 1; unsigned char delegateExpandedFractionChanged : 1; } _expandFlags;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contractedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } expandedFrame;
@property (nonatomic) BOOL allowsExpansion;

- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (BOOL)isTracking;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (int)previousState;
- (int)state;
- (void)finishTransition;
- (id)delegate;
- (void)stateDidChangeFrom:(int)a0;
- (void)beginTrackingPinch:(id)a0;
- (float)continueTrackingPinch:(id)a0;
- (float)completeTrackingPinch:(id)a0 toState:(int)a1 duration:(double)a2;
- (void)_setAutorotationDisabled:(BOOL)a0;
- (void)_notifyDidCompleteCollapsing;
- (void)_notifyWillBeginExpanding;
- (void)_notifyWillCancelCollapsingWithDuration:(double)a0;
- (void)_notifyWillCompleteCollapsingWithDuration:(double)a0;
- (void)_notifyWillCompleteExpandingWithDuration:(double)a0;
- (void)_notifyWillCancelExpandingWithDuration:(double)a0;
- (void)_notifyDidCompleteExpanding;
- (void)_notifyWillBeginCollapsing;
- (void)_notifyDidCancelExpanding;
- (void)_notifyDidCancelCollapsing;
- (void)_transitionFromContracted:(int)a0 withDuration:(double)a1;
- (void)_transitionFromExpanding:(int)a0 withDuration:(double)a1;
- (void)_transitionFromCompleteExpand:(int)a0 withDuration:(double)a1;
- (void)_transitionFromCancelExpand:(int)a0 withDuration:(double)a1;
- (void)_transitionFromExpanded:(int)a0 withDuration:(double)a1;
- (void)_transitionFromContracting:(int)a0 withDuration:(double)a1;
- (void)_transitionFromCancelContract:(int)a0 withDuration:(double)a1;
- (void)_transitionFromCompleteContract:(int)a0 withDuration:(double)a1;
- (void)setState:(int)a0 withDuration:(double)a1;
- (void)stateWillChangeTo:(int)a0;
- (void)notifyExpansionFraction:(float)a0 force:(BOOL)a1;
- (void)startedPinch:(id)a0;
- (void)continuedPinch:(id)a0;
- (void)finishedPinch:(id)a0;
- (void)canceledPinch:(id)a0;
- (void)finishTransitionToState:(int)a0;
- (int)snapState:(BOOL)a0;
- (void)updatePinchState:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pinchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 insetTouches:(BOOL)a2;
- (void)collapseWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)expandWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)setExpansionFraction:(double)a0;
- (double)expansionFraction;
- (BOOL)_canPinch;
- (BOOL)canCollapse;

@end
