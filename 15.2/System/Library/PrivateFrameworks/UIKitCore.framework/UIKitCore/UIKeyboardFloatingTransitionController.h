@class UIInputWindowController, UIView, NSArray, UIKBVisualEffectView, UIViewSpringAnimationBehavior, UIKeyboardFloatingTransitionState, NSString, UIPanGestureRecognizer, _UIPopoverStandardChromeView, UIKeyboardFloatingPinchGestureRecognizer;
@protocol UIKeyboardFloatingTransitionControllerDelegate;

@interface UIKeyboardFloatingTransitionController : NSObject <UIGestureRecognizerDelegate>

@property (class, readonly, nonatomic) double magneticEdgeMargin;

@property (retain, nonatomic) UIKeyboardFloatingPinchGestureRecognizer *pinchGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) BOOL isTransitioning;
@property (weak, nonatomic) UIInputWindowController *inputWindowController;
@property (retain, nonatomic) UIKeyboardFloatingTransitionState *startState;
@property (retain, nonatomic) UIKeyboardFloatingTransitionState *endState;
@property (nonatomic) BOOL startedFromFloating;
@property (retain, nonatomic) NSArray *commonVisibleKeys;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIView *platterCornerRadiusView;
@property (retain, nonatomic) _UIPopoverStandardChromeView *platterPopoverBackgroundView;
@property (retain, nonatomic) UIKBVisualEffectView *platterVisualEffectView;
@property (retain, nonatomic) UIView *pillView;
@property (nonatomic) double progress;
@property (nonatomic) double gestureBeginTime;
@property (nonatomic) struct CGPoint { double x; double y; } lastGestureCenter;
@property (nonatomic) BOOL withinDockingRegion;
@property (nonatomic) BOOL expandedForDocking;
@property (retain) UIViewSpringAnimationBehavior *animationBehavior;
@property (weak, nonatomic) id<UIKeyboardFloatingTransitionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPointWithinDockingRegion:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dockingRegion;
+ (id)snapshotOfKeyplaneView:(id)a0;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)addGestureRecognizersToView:(id)a0;
- (void)finalizeTransition;
- (void)removeGestureRecognizers;
- (void)beginTransitionFromPanGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)beginPanGesture:(id)a0;
- (void)endPanGesture:(id)a0;
- (void)handlePanGestureRecognizerAction:(id)a0;
- (void)handlePinchGestureRecognizerAction:(id)a0;
- (void)updateHysteresisForCurrentFloatingState;
- (void)updatePanGesture:(id)a0;
- (void)beginTransitionAtPoint:(struct CGPoint { double x0; double x1; })a0 withScale:(double)a1;
- (void)beginPinchGesture:(id)a0;
- (void)updateTransitionAtPoint:(struct CGPoint { double x0; double x1; })a0 withScale:(double)a1 interactive:(BOOL)a2;
- (void)endTransitionAtPoint:(struct CGPoint { double x0; double x1; })a0 withScale:(double)a1;
- (void)updatePinchGesture:(id)a0;
- (void)endPinchGesture:(id)a0;
- (void)updateLayoutGuideForTransitionStart:(BOOL)a0;
- (void)initializeContextAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateAnimationAtScale:(double)a0;
- (void)captureStateForStart:(BOOL)a0;
- (void)constrainAccessoryViewToBottom;
- (void)updateLayoutGuideFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restoreAccessoryViewConstraints;
- (void)inputViewSnapshot:(id *)a0 withPlatterInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
