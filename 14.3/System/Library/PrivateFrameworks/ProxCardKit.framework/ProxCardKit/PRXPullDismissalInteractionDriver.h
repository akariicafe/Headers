@class PRXPurelyInteractiveTransition, NSString, PRXPullDismissalScrollView, UIViewController;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

@interface PRXPullDismissalInteractionDriver : NSObject <UIScrollViewDelegate> {
    PRXPurelyInteractiveTransition *_interactiveTransition;
}

@property (readonly, weak, nonatomic) PRXPullDismissalScrollView *scrollView;
@property (readonly, weak, nonatomic) UIViewController *presentedViewController;
@property (readonly, nonatomic) id<UIViewControllerAnimatedTransitioning> animationController;
@property (readonly, nonatomic) id<UIViewControllerInteractiveTransitioning> interactionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithPresentedViewController:(id)a0 scrollView:(id)a1;
- (void)_finishPullToDismiss;

@end
