@class VUIAlertController, UIView, VUIDownloadButtonViewModel, UIViewController;

@interface VUIDownloadButtonActionHandler : NSObject

@property (retain, nonatomic) VUIAlertController *deleteConfirmationAlertController;
@property (readonly, nonatomic) VUIDownloadButtonViewModel *viewModel;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) UIView *parentView;
@property (copy, nonatomic) id /* block */ acknowledgementDownloadDeleted;
@property (copy, nonatomic) id /* block */ acknowledgementDownloadCancelled;

- (id)initWithViewModel:(id)a0;
- (void)_handleAppDidEnterBackgroundNotification:(id)a0;
- (void).cxx_destruct;
- (void)_askUserAndDeleteIfNeeded;
- (void)_checkForAccountSignInWithCompletionHandler:(id /* block */)a0;
- (void)_dismissConfirmationAlertController;
- (id)_localize:(id)a0 token:(id)a1 value:(id)a2;
- (id)_renewalAlertAction;
- (BOOL)_shouldShowRenewalOption;
- (void)_showDownloadingInfoDialog;
- (void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(BOOL)a0;
- (BOOL)ignoreDownloadActionIfInRetailDemoMode;
- (void)performAction:(BOOL)a0 confirmBeforeStopDownloading:(BOOL)a1;
- (id)topPresentedViewController;

@end
