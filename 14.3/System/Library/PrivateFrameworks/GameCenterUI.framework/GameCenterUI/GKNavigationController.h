@class NSString, NSMutableArray;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration, UINavigationBarDelegate>

@property (retain, nonatomic) NSMutableArray *deferredTransitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;
+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)init;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (void)willShowViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)setupGKNavigationController;
- (BOOL)hasEmbeddedPopoverNavigationStack;
- (id)popEmbeddedPopoverViewControllers;
- (void)_gkRestorePopoverWithViewControllers:(id)a0 completion:(id /* block */)a1;
- (id)targetViewControllerForAction:(SEL)a0;
- (void)_performDeferredTransition;
- (void)_deferTransitionOfType:(int)a0 withViewController:(id)a1 animated:(BOOL)a2;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)a0;
- (id)_gkViewControllersForRestoringPopover;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithRootViewController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;

@end
