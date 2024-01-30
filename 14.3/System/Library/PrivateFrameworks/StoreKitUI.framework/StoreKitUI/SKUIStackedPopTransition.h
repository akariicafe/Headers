@class NSString, SKUIStackedBar;

@interface SKUIStackedPopTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) SKUIStackedBar *fromBar;
@property (retain, nonatomic) SKUIStackedBar *toBar;
@property (nonatomic) double split;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;

@end
