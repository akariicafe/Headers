@class NSArray, _UIAsyncInvocation, PKRemoteAddPassesViewController, PKAssertion;
@protocol PKAddPassesViewControllerDelegate;

@interface PKAddPassesViewController : UIViewController {
    BOOL _viewHasAppeared;
    BOOL _succeeded;
    unsigned long long _presentationSource;
    NSArray *_passDataArray;
    _UIAsyncInvocation *_viewServiceCancelRequest;
    PKRemoteAddPassesViewController *_remoteViewController;
    PKAssertion *_contactlessInterfaceAssertion;
    id<PKAddPassesViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<PKAddPassesViewControllerDelegate> delegate;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)canAddPasses;

- (long long)preferredStatusBarStyle;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)modalTransitionStyle;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldAutorotate;
- (id)initWithPasses:(id)a0;
- (void)_applyRemoteViewController:(id)a0;
- (void)_ingestionDidFinishWithResult:(unsigned long long)a0;
- (long long)modalPresentationStyle;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)succeeded;
- (void)_requestRemoteViewController;
- (id)initWithPasses:(id)a0 presentationSource:(unsigned long long)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithPass:(id)a0;
- (void)viewWillLayoutSubviews;

@end
