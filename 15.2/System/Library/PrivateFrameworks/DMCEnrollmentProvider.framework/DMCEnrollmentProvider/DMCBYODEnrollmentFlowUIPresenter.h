@class MCInstallProfileQuestionViewController, DMCEnrollmentAuthenticationController, NSString, DMCEnrollmentAuthenticationViewController, DMCEnrollmentConsentViewController;

@interface DMCBYODEnrollmentFlowUIPresenter : DMCEnrollmentFlowUIPresenterBase <ASWebAuthenticationPresentationContextProviding, DevicePINControllerDelegate, DMCEnrollmentAuthenticationViewControllerDelegate, DMCEnrollmentConsentViewControllerDelegate, MCProfileQuestionsControllerDelegate, DMCEnrollmentiCloudPromotionViewControllerDelegate, DMCEnrollmentFlowRestoreViewControllerDelegate, DMCRFInteractionClient, DMCEnrollmentFlowPresenter>

@property (retain, nonatomic) DMCEnrollmentAuthenticationViewController *usernameViewController;
@property (copy, nonatomic) id /* block */ usernameCompletionHandler;
@property (nonatomic) BOOL hasDoneAuthServices;
@property (retain, nonatomic) DMCEnrollmentAuthenticationController *authenticationController;
@property (copy, nonatomic) NSString *managedAppleID;
@property (retain, nonatomic) DMCEnrollmentConsentViewController *consentViewController;
@property (copy, nonatomic) id /* block */ consentCompletionHandler;
@property (copy, nonatomic) id /* block */ profileInstallationCompletionHandler;
@property (copy, nonatomic) id /* block */ authenticationActionHandler;
@property (retain, nonatomic) MCInstallProfileQuestionViewController *questionsController;
@property (copy, nonatomic) id /* block */ userInputCompletionHandler;
@property (copy, nonatomic) id /* block */ iCloudPromotionCompletionHandler;
@property (copy, nonatomic) id /* block */ restoreCompletionHandler;
@property (copy, nonatomic) id /* block */ authenticationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (void)doesUserWantToRestoreSnapshot:(id)a0 withConflictingApps:(id)a1 completion:(id /* block */)a2;
- (void)setCurrentQuestionsController:(id)a0;
- (void)questionsController:(id)a0 didFinishWithResponses:(id)a1;
- (BOOL)questionsControllerIsDisplayedInSheet:(id)a0;
- (void)restoreViewController:(id)a0 didReceiveUserAction:(BOOL)a1;
- (void)authenticationViewControllerDidCancel:(id)a0;
- (void)showEnrollmentCompletionScene;
- (void)showEnrollmentFailure:(id)a0;
- (void)dismissEnrollmentScene;
- (void)requestUsernameWithDefaultUsername:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAuthServicesAuthenticationWithWebAuthURL:(id)a0 callbackURLScheme:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestDevicePasscodeWithCompletionHandler:(id /* block */)a0;
- (void)requestSilentMAIDAuthenticationWithAuthenticationResults:(id)a0 personaID:(id)a1 requireAppleMAID:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)requestMAIDAuthenticationWithManagedAppleID:(id)a0 personaID:(id)a1 ephemeral:(BOOL)a2 requireAppleMAID:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)requestMAIDSignInWithAuthenticationResults:(id)a0 personaID:(id)a1 makeiTunesAccountActive:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)requestUserConsentWithProfileData:(id)a0 managedAppleID:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestiCloudSignInConfirmationWithCompletionHandler:(id /* block */)a0;
- (void)showiCloudPromotionPageWithiCloudQuotaString:(id)a0 completionHandler:(id /* block */)a1;
- (void)suggestRestoreForAccountWithUsername:(id)a0 personaID:(id)a1 completionHandler:(id /* block */)a2;
- (id)notificationNameForApplicationWillTerminate;
- (void)_makeAuthenticationActionHandlerWithEphemeral:(BOOL)a0 requireAppleMAID:(BOOL)a1 presentingViewController:(id)a2;
- (void)_presentOKAlertWithTitle:(id)a0 message:(id)a1 action:(id /* block */)a2;
- (void)_showCancelAlertForMAID:(id)a0 actionHandler:(id /* block */)a1;
- (void)authenticationViewController:(id)a0 didReceiveUsername:(id)a1;
- (void)authenticationViewController:(id)a0 didReceivePassword:(id)a1 forUsername:(id)a2;
- (void)consentViewController:(id)a0 didReceiveUserAction:(BOOL)a1;
- (void)iCloudPromotionViewController:(id)a0 didReceiveUserAction:(BOOL)a1;
- (void)requestUserInputWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)informQuestionViewControllerOfPreflightResult:(id)a0;

@end
