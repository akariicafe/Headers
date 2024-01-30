@class UIColor, NSString;

@interface PXUIViewControllerFadeThroughColorTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) UIColor *midpointColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDuration:(double)a0 midpointColor:(id)a1;

@end
