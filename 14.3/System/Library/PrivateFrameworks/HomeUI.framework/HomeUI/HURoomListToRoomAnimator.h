@class NSString;

@interface HURoomListToRoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;

@end
