@class PXSwipeDownTracker, PUPhotoPinchGestureRecognizer, NSArray, UIViewPropertyAnimator, PUImportOneUpTransitionItem, UIPanGestureRecognizer, PXPinchTracker;
@protocol UIViewControllerContextTransitioning;

@interface PUImportOneUpModalTransition : NSObject

@property (readonly, nonatomic) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer;
@property (readonly, nonatomic) PXPinchTracker *pinchTracker;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly, nonatomic) PXSwipeDownTracker *swipeDownTracker;
@property (nonatomic) long long activeGesture;
@property (readonly, nonatomic) long long operation;
@property (retain, nonatomic) UIViewPropertyAnimator *transitionAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *floatingItemsAnimator;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> context;
@property (retain, nonatomic) NSArray *floatingItems;
@property (retain, nonatomic) PUImportOneUpTransitionItem *manipulatedFloatingItem;
@property (nonatomic) double startingAnimationProgress;

+ (double)defaultAnimationDurationForOperation:(long long)a0;
+ (id)propertyAnimatorWithInitialVelocity:(struct CGVector { double x0; double x1; })a0 forOperation:(long long)a1 inDirection:(long long)a2;
+ (struct CGSize { double x0; double x1; })scaledSizeForTargetSize:(struct CGSize { double x0; double x1; })a0 aspectFillingIntoSize:(struct CGSize { double x0; double x1; })a1;
+ (id)transitioningObjectInViewController:(id)a0;

- (void)pauseAnimation;
- (void)startTransition;
- (void).cxx_destruct;
- (struct CGVector { double x0; double x1; })unitVelocityForDisplayVelocity:(struct PXDisplayVelocity { double x0; double x1; double x2; double x3; })a0;
- (void)animateToPosition:(long long)a0;
- (long long)animatingPositionForPinchTracker:(id)a0;
- (long long)animatingPositionForSwipeDownTracker:(id)a0;
- (void)configureFloatingItemForInteractiveTracking;
- (BOOL)continuousGestureRecognizerIsActive:(id)a0;
- (double)currentProgressForFloatingItem:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1 inDirection:(long long)a2;
- (void)endInteraction;
- (void)handleTapHoldGesture:(id)a0;
- (void)handleTransitionComplete:(long long)a0;
- (id)initWithOperation:(long long)a0 transitionContext:(id)a1 pinchGestureRecognizer:(id)a2 panGestureRecognizer:(id)a3 startsInteractive:(BOOL)a4;
- (void)prepareFloatingItemsForAnimation;
- (void)updateTransitionWithPanGestureRecognizer:(id)a0;
- (void)updateTransitionWithPinchGestureRecognizer:(id)a0;

@end
