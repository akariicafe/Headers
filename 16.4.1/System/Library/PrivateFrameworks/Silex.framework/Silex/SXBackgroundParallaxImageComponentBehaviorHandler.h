@class UIView;

@interface SXBackgroundParallaxImageComponentBehaviorHandler : SXComponentBehaviorHandler

@property (retain, nonatomic) UIView *windowedScrollContentView;
@property (nonatomic) double originalYCenter;
@property (retain, nonatomic) UIView *clippingView;
@property (nonatomic) unsigned long long viewHierarchyIndex;
@property (readonly, nonatomic) double amplitude;

- (void).cxx_destruct;
- (void)destroyWindowedScroll;
- (void)destroyWithBehaviorController:(id)a0;
- (id)initWithComponentView:(id)a0 withBehavior:(id)a1;
- (void)setupWindowedScroll;
- (void)setupWithBehaviorController:(id)a0;
- (void)updateWithBehaviorController:(id)a0;

@end
