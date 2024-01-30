@class NSString;

@interface CKNoAnimationSearchFieldAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, getter=isAppearing) BOOL appearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initWithAppearing:(BOOL)a0;

@end
