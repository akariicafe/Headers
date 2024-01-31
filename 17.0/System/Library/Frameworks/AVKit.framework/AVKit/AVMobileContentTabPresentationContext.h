@class UIViewController, AVMobileContentTabTransitionContext;

@interface AVMobileContentTabPresentationContext : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) UIViewController *customInfoViewController;
@property (readonly, nonatomic) double presentationHeight;
@property (readonly, nonatomic) AVMobileContentTabTransitionContext *transitionContext;

- (void)setTransitionContext:(id)a0;
- (void)setState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setCustomInfoViewController:(id)a0;
- (void)setPresentationHeight:(double)a0;

@end
