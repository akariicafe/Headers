@class NSString;

@interface CKNoAnimationSearchFieldAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, getter=isAppearing) BOOL appearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (id)initWithAppearing:(BOOL)a0;

@end
