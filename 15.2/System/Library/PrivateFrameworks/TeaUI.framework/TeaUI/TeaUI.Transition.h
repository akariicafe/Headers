@interface TeaUI.Transition : NSObject <UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ interactiveTransition;
    void /* unknown type, empty encoding */ presentationTransitionFactory;
    void /* unknown type, empty encoding */ dismissalTransitionFactory;
    void /* unknown type, empty encoding */ presentationControllerFactory;
}

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)interactionControllerForDismissal:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
