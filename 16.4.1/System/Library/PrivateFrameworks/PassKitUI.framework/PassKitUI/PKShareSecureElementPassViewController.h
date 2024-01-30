@class NSString, _UIAsyncInvocation, WrappedRemoteViewController, PKSecureElementPass;
@protocol PKShareSecureElementPassViewControllerDelegate;

@interface PKShareSecureElementPassViewController : UIViewController <PKClientShareSecureElementPassViewControllerDelegate> {
    PKSecureElementPass *_pass;
    unsigned long long _environment;
    BOOL _isFromPeopleScreen;
    BOOL _remoteVCConfigured;
    _UIAsyncInvocation *_remoteVCRequest;
    WrappedRemoteViewController *_remoteVC;
}

@property (weak, nonatomic) id<PKShareSecureElementPassViewControllerDelegate> delegate;
@property (nonatomic) BOOL promptToShareURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)childViewControllerForStatusBarHidden;
- (long long)modalPresentationStyle;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (long long)modalTransitionStyle;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)_addRemoteVCToView;
- (void)_remoteDidGetConfigured;
- (void)didCreateShareURL:(id)a0 activationCode:(id)a1 error:(id)a2;
- (void)didFinishShareWithDidUserShare:(BOOL)a0 error:(id)a1;
- (id)initWithSecureElementPass:(id)a0 delegate:(id)a1;
- (id)initWithSecureElementPass:(id)a0 environment:(unsigned long long)a1 isFromPeopleScreen:(BOOL)a2 delegate:(id)a3;
- (void)loadRemoteViewController;
- (void)setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldViewControllerBeAnimatedIn;

@end
