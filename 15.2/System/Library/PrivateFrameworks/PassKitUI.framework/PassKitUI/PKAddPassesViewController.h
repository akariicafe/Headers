@class _UIAsyncInvocation, NSArray, PKRemoteAddPassesViewController, PKAssertion, PKPassesXPCContainer;
@protocol PKAddPassesViewControllerDelegate;

@interface PKAddPassesViewController : UIViewController {
    BOOL _viewHasAppeared;
    BOOL _succeeded;
    _UIAsyncInvocation *_viewServiceCancelRequest;
    PKRemoteAddPassesViewController *_remoteViewController;
    PKAssertion *_contactlessInterfaceAssertion;
    id<PKAddPassesViewControllerDelegate> _delegate;
    unsigned long long _presentationSource;
    NSArray *_passes;
    PKPassesXPCContainer *_passesContainer;
}

@property (weak, nonatomic) id<PKAddPassesViewControllerDelegate> delegate;

+ (BOOL)canAddPasses;
+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)applicationWillResignActive:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (long long)modalPresentationStyle;
- (long long)preferredStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)applicationDidBecomeActive:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)succeeded;
- (id)initWithPass:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)modalTransitionStyle;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (void)_requestRemoteViewController;
- (id)initWithPasses:(id)a0 fromPresentationSource:(unsigned long long)a1;
- (id)initWithPasses:(id)a0;
- (id)_initWithPasses:(id)a0 orPassesContainer:(id)a1 fromPresentationSource:(unsigned long long)a2;
- (void)_applyRemoteViewController:(id)a0;
- (void)_ingestionDidFinishWithResult:(unsigned long long)a0;
- (id)initWithPassesContainer:(id)a0 fromPresentationSource:(unsigned long long)a1;

@end
