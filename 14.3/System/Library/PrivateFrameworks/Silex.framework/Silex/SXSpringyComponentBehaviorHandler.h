@class UIAttachmentBehavior, UIDynamicAnimator;

@interface SXSpringyComponentBehaviorHandler : SXComponentBehaviorHandler

@property (nonatomic) double lastYOffset;
@property (retain, nonatomic) UIAttachmentBehavior *dynamicBehavior;
@property (retain, nonatomic) UIDynamicAnimator *dynamicAnimator;
@property (nonatomic) struct CGPoint { double x; double y; } originalCenter;
@property (readonly, nonatomic) double frequency;
@property (readonly, nonatomic) double damping;
@property (readonly, nonatomic) double delta;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithComponentView:(id)a0 withBehavior:(id)a1;
- (void)setupWithBehaviorController:(id)a0;
- (void)updateWithBehaviorController:(id)a0;
- (void)destroyWithBehaviorController:(id)a0;

@end
