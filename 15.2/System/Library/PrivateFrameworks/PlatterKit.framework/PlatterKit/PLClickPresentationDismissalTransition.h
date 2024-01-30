@class PLClickPresentationPresentationTransition;

@interface PLClickPresentationDismissalTransition : PLClickPresentationTransition

@property (weak, nonatomic) PLClickPresentationPresentationTransition *presentationTransition;

- (void).cxx_destruct;
- (id)initWithTransitionDelegate:(id)a0 presentingViewController:(id)a1 presentedViewController:(id)a2 completion:(id /* block */)a3;
- (void)_configureTransitionContextWithFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)updateBackgroundViewForTransition;
- (id)_newAnimator;

@end
