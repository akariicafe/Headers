@protocol AVPlayerViewControllerAnimationCoordinator;

@interface AVMobileContentTabTransitionContext : NSObject

@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) id<AVPlayerViewControllerAnimationCoordinator> animationCoordinator;

- (void)setDirection:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setAnimationCoordinator:(id)a0;

@end
