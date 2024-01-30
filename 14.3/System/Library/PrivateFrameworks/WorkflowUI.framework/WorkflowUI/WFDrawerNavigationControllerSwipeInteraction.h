@class UINavigationController, NSString, UIView, UIPercentDrivenInteractiveTransition, UIPanGestureRecognizer;

@interface WFDrawerNavigationControllerSwipeInteraction : NSObject <UINavigationControllerDelegate, UIInteraction>

@property (readonly, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *currentTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (void)pan:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)didMoveToView:(id)a0;
- (id)initWithNavigationController:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;

@end
