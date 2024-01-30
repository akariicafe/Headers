@class _UIResilientRemoteViewContainerViewController, NSString, SURedeemCameraViewController, SKCloudServiceSetupConfiguration, SKCloudServiceSetupReloadContext, SFSafariViewController;
@protocol SKCloudServiceSetupViewControllerDelegate;

@interface SKCloudServiceSetupViewController : UIViewController <SFSafariViewControllerDelegate, SKCloudServiceSetupRemoteViewControllerDelegate> {
    SURedeemCameraViewController *_presentedRedeemCameraViewController;
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
    BOOL _isRemoteViewControllerReady;
    BOOL _isUnableToLoadRemoteViewController;
    BOOL _hasInitializedServiceViewController;
    BOOL _isFullyAppeared;
    SKCloudServiceSetupReloadContext *_activeCloudServiceSetupReloadContext;
    id /* block */ _loadCompletionHandler;
    SFSafariViewController *_safariViewController;
}

@property (readonly, copy, nonatomic) SKCloudServiceSetupConfiguration *configuration;
@property (weak, nonatomic) id<SKCloudServiceSetupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isModalInPresentation;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setModalInPresentation:(BOOL)a0;
- (void)_requestRemoteViewController;
- (void)safariViewControllerDidFinish:(id)a0;
- (void)safariViewController:(id)a0 didCompleteInitialLoad:(BOOL)a1;
- (void)overrideCreditCardPresentationWithCompletion:(id /* block */)a0;
- (void)overrideRedeemCameraPerformAction:(long long)a0 withObject:(id)a1;
- (void)cloudServiceSetupRemoteViewController:(id)a0 didFinishLoadingWithSuccess:(BOOL)a1 error:(id)a2;
- (void)cloudServiceSetupRemoteViewController:(id)a0 requestsDismissalWithAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (void)cloudServiceSetupRemoteViewController:(id)a0 requestsDismissingSafariViewControllerAnimated:(BOOL)a1 completion:(id /* block */)a2;
- (void)cloudServiceSetupRemoteViewController:(id)a0 requestsPresentingSafariViewControllerWithURL:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)handleSafariScriptURL:(id)a0;
- (void)reloadWithContext:(id)a0;
- (void)_dismissCloudServiceSetupViewControllerWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (id)_errorWithCode:(long long)a0 errorDescriptionLocalizationKey:(id)a1;
- (void)_reportErrorForMissingSystemMusicApplication;
- (void)_reloadWithActiveCloudServiceSetupReloadContext;
- (void)_remoteViewControllerExtensionWasInterrupted;
- (void)_didReceiveRemoteViewController:(id)a0;

@end
