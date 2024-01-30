@class UIContextualAction, NSString, UISwipeActionPullView, UIView, NSIndexPath, UISwipeActionController;
@protocol _UISwipedView, _UISwipeViewManipulator;

@interface UISwipeOccurrence : NSObject <UISwipeActionPullViewDelegate> {
    struct { unsigned char isTransitioning : 1; unsigned char didNotifyWillFinish : 1; unsigned char didNotifyDidFinish : 1; unsigned char shouldReenableUserInteraction : 1; unsigned char isRTL : 1; unsigned char hasAmbiguousIndexPath : 1; unsigned char didReloadData : 1; } _flags;
    unsigned long long _actionExecutionCounter;
    UISwipeActionController *_controller;
    unsigned long long _style;
    unsigned long long _defaultStyle;
    double _roundedStyleCornerRadius;
    UISwipeActionPullView *_leadingPullView;
    UISwipeActionPullView *_trailingPullView;
    id<_UISwipeViewManipulator> _manipulator;
}

@property (copy, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) unsigned long long configuredDirection;
@property (nonatomic) struct { unsigned long long direction; unsigned long long targetSwipeState; BOOL animated; double xOffset; double initialSpringVelocity; double springStiffness; } currentSwipeInfo;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } extraInsets;
@property (retain, nonatomic) UIView<_UISwipedView> *swipedView;
@property (nonatomic) BOOL swipedViewMaskWasRemoved;
@property (retain, nonatomic) UIContextualAction *currentAction;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) long long direction;
@property (nonatomic) double offset;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_style;
- (void)updateLayout;
- (void)endSwipe;
- (void)_transitionToState:(long long)a0;
- (id)actionView;
- (BOOL)_didReloadData;
- (BOOL)_hasAmbiguousIndexPath;
- (id)lockActionViewForAnimation;
- (void)unlockActionViewForAnimation:(id)a0;
- (void)resetAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_forceTeardown;
- (void)beginSwipeTracking:(BOOL)a0;
- (void)updateOffsetWithSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })a0 isTracking:(BOOL)a1 completion:(id /* block */)a2;
- (void)resetForReconfiguration;
- (void)_setDidReloadData;
- (void)_setHasAmbiguousIndexPath;
- (id)initWithController:(id)a0 indexPath:(id)a1 defaultStyle:(unsigned long long)a2;
- (void)updateSwipedView;
- (struct { unsigned long long x0; BOOL x1; BOOL x2; double x3; double x4; })prepareWithSwipeDirection:(unsigned long long)a0 configuration:(id)a1;
- (BOOL)shouldDismissWithTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)performPrimaryActionWithSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })swipedViewRestingFrame;
- (id)_actionView;
- (void)_updatePullView:(id)a0;
- (void)setupManipulatorWithController:(id)a0;
- (unsigned long long)_styleForConfiguration:(id)a0;
- (id)_pullViewForSwipeDirection:(unsigned long long)a0;
- (void)_removeAndResetPullViewImmediately:(id)a0;
- (void)_updateSwipedStateOnSwipedView:(BOOL)a0;
- (void)_freezeSwipedViewInsets;
- (void)_unfreezeSwipedViewInsets;
- (void)_resetItemWithSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })a0 animated:(BOOL)a1 deletion:(BOOL)a2 completion:(id /* block */)a3;
- (void)_moveItemWithSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })a0 alongsideAnimations:(id /* block */)a1 completion:(id /* block */)a2;
- (double)_extraOffsetForOffset:(double)a0 withDirection:(unsigned long long)a1;
- (void)_updateLayoutUsingCurrentSwipeInfo:(BOOL)a0;
- (void)_performSwipeAction:(id)a0 inPullView:(id)a1 swipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })a2;
- (unsigned long long)_swipeDirectionForPullView:(id)a0;
- (void)_executeLifecycleForPerformedAction:(id)a0 sourceView:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isSwipeDirectionExposingLeadingEdgePullView:(unsigned long long)a0;
- (id)_pullViewForLeadingEdge:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForPullView:(id)a0 inSwipedItem:(id)a1 withContainer:(id)a2;
- (void)swipeActionPullView:(id)a0 tappedAction:(id)a1;
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)a0;
- (double)velocity;

@end
