@class UIAlertController, NSString, UIInteractionProgress;

@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property (getter=isPresentation) BOOL presentation;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) UIInteractionProgress *interactionProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)_alertControllerForContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithInteractionProgress:(id)a0;
- (void)_animateTransition:(id)a0 completionBlock:(id /* block */)a1;

@end
