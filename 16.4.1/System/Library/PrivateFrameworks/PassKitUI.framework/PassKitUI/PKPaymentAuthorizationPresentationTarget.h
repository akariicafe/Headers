@class UIViewController;

@interface PKPaymentAuthorizationPresentationTarget : NSObject

@property (retain, nonatomic) UIViewController *viewControllerToPresent;
@property (nonatomic) BOOL shouldAnimatePresentation;
@property (copy, nonatomic) id /* block */ presentationCompletion;
@property (weak, nonatomic) UIViewController *presentingViewController;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)presentPendingViewControllerIfNecessary;

@end
