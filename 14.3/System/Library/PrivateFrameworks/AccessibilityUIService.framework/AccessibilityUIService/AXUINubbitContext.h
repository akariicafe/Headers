@class UIAttachmentBehavior, AXDispatchTimer, UIView, UICollisionBehavior, AXAssertion, UISnapBehavior, UIDynamicAnimator, UIGravityBehavior, UIPanGestureRecognizer, UIDynamicItemBehavior;
@protocol AXUINubbitDelegate;

@interface AXUINubbitContext : NSObject

@property (retain, nonatomic) UIView *nubbit;
@property (weak, nonatomic) id<AXUINubbitDelegate> delegate;
@property (retain, nonatomic) AXAssertion *disableSystemGesturesAssertion;
@property (retain, nonatomic) AXAssertion *disableDashBoardSystemGesturesAssertion;
@property (retain, nonatomic) UIPanGestureRecognizer *moveNubbitGestureRecognizer;
@property (retain, nonatomic) AXDispatchTimer *fadeTimer;
@property (retain, nonatomic) UIDynamicAnimator *dynamicAnimator;
@property (retain, nonatomic) UIGravityBehavior *gravityBehavior;
@property (retain, nonatomic) UIAttachmentBehavior *followPanBehavior;
@property (retain, nonatomic) UISnapBehavior *snapToBoundaryBehavior;
@property (retain, nonatomic) UICollisionBehavior *collisionBehavior;
@property (retain, nonatomic) UIDynamicItemBehavior *dynamicItemBehavior;
@property (nonatomic) double originalAlpha;

- (void).cxx_destruct;

@end
