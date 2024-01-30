@class NSString, PXFloatingCardAnimationManager, UIPanGestureRecognizer, PXFloatingCardViewController;
@protocol PXFloatingCardLayout, PXFloatingCardGestureCoordinatorDelegate;

@interface PXFloatingCardGestureCoordinator : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) PXFloatingCardViewController *cardViewController;
@property (retain, nonatomic) PXFloatingCardAnimationManager *animationManager;
@property (retain, nonatomic) UIPanGestureRecognizer *positionGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *heightGestureRecognizer;
@property (nonatomic) struct CGPoint { double x; double y; } previousPanTranslation;
@property (nonatomic) double topRubberBandRange;
@property (nonatomic) double bottomRubberBandRange;
@property (weak, nonatomic) id<PXFloatingCardGestureCoordinatorDelegate> delegate;
@property (weak, nonatomic) id<PXFloatingCardLayout> layout;
@property (nonatomic) BOOL isDragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)maximumHeight;
- (double)minimumHeight;
- (void)_removeGestureRecognizers;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)layoutDidChange;
- (void)_handlePositionGestureEnded:(struct CGPoint { double x0; double x1; })a0;
- (double)applyRubberBandToValue:(double)a0 withRange:(double)a1;
- (struct CGPoint { double x0; double x1; })centerPointForPosition:(unsigned long long)a0;
- (double)closestHeightForProjectedHeight:(double)a0;
- (unsigned long long)closestPositionToProjectedCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)dragBegan;
- (void)dragChangedWithVerticalDelta:(double)a0;
- (void)dragEndedWithAnimation:(id)a0;
- (void)handleHeightGesture:(id)a0;
- (void)handlePositionGesture:(id)a0;
- (double)heightForRubberBandHeight:(double)a0;
- (id)initWithCardViewController:(id)a0 layout:(id)a1;
- (double)projectionWithVelocity:(double)a0 decelerationRate:(double)a1;
- (double)rubberBandHeightForHeight:(double)a0;
- (void)snapToHeight:(double)a0;
- (double)unapplyRubberBandToValue:(double)a0 withRange:(double)a1;
- (void)updateCardHeightConstraintWithHeight:(double)a0;

@end
