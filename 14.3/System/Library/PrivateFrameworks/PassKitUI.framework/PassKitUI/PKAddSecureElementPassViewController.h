@class NSString, _UIAsyncInvocation, PKAddSecureElementPassConfiguration, PKRemoteAddSecureElementPassViewController;
@protocol PKAddSecureElementPassViewControllerDelegate;

@interface PKAddSecureElementPassViewController : UIViewController <PKRemoteAddSecureElementPassViewControllerProtocol> {
    PKAddSecureElementPassConfiguration *_configuration;
    _Atomic BOOL _finished;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteAddSecureElementPassViewController *_remoteVC;
}

@property (weak, nonatomic) id<PKAddSecureElementPassViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAddSecureElementPassWithConfiguration:(id)a0;
+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)modalTransitionStyle;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (id)initWithCoder:(id)a0;
- (void)didFinishWithPasses:(id)a0 error:(id)a1;
- (void)loadRemoteViewController;
- (void)setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (void)didFinishWithPass:(id)a0 error:(id)a1;
- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end
