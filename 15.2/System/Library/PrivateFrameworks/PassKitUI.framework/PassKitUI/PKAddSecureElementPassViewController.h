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

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)canAddSecureElementPassWithConfiguration:(id)a0;

- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (long long)modalPresentationStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithCoder:(id)a0;
- (long long)modalTransitionStyle;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)didFinishWithPasses:(id)a0 error:(id)a1;
- (void)loadRemoteViewController;
- (void)setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (void)didFinishWithPass:(id)a0 error:(id)a1;

@end
