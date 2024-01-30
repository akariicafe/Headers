@class NSString;
@protocol PRXPullDismissalProvider;

@interface PRXTransitioningController : NSObject <UIViewControllerTransitioningDelegate>

@property (readonly, weak, nonatomic) id<PRXPullDismissalProvider> pullDismissalProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)interactionControllerForDismissal:(id)a0;
- (void).cxx_destruct;
- (id)initWithPullDismissalProvider:(id)a0;

@end
