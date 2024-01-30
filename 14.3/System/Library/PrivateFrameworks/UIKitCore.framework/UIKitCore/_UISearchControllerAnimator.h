@class NSString;

@interface _UISearchControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)didRelayoutSearchBarForController:(id)a0;
- (void)didFocusSearchBarForController:(id)a0;
- (void)didUnfocusSearchBarForController:(id)a0;
- (void)willFocusOffscreenViewForController:(id)a0 withHeading:(unsigned long long)a1;

@end
