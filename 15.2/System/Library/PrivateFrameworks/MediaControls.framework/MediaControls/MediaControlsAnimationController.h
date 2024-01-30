@class NSString;

@interface MediaControlsAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    BOOL _presenting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initForPresenting:(BOOL)a0;

@end
