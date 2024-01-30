@interface NUCrossFadeViewAnimator : NSObject

@property (nonatomic) double duration;

- (void)resetView:(id)a0;
- (id)init;
- (void)crossFadeFromView:(id)a0 toView:(id)a1 value:(id)a2 completion:(id /* block */)a3;
- (void)animateView:(id)a0 toValue:(id)a1 completion:(id /* block */)a2;
- (void)animateView:(id)a0 toEmptyStateWithCompletion:(id /* block */)a1;

@end
