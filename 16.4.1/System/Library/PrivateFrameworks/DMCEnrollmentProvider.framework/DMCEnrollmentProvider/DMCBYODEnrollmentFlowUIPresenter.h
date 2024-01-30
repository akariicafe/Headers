@class DMCEnrollmentAuthenticationController, NSString, DMCEnrollmentAuthenticationViewController, DMCEnrollmentConsentViewController, DMCInstallProfileQuestionViewController;

@interface DMCBYODEnrollmentFlowUIPresenter : DMCEnrollmentFlowUIPresenterBase <DevicePINControllerDelegate, DMCEnrollmentAuthenticationViewControllerDelegate, DMCEnrollmentConsentViewControllerDelegate, DMCEnrollmentiCloudPromotionViewControllerDelegate, DMCEnrollmentFlowRestoreViewControllerDelegate, DMCRFInteractionClient, DMCEnrollmentESSOApplicationDisclosureViewControllerDelegate, DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate, DMCEnrollmentManagementDetailsOverviewViewControllerDelegate, ASWebAuthenticationPresentationContextProviding, DMCProfileQuestionsControllerDelegate, DMCEnrollmentFlowPresenter>

@property (retain, nonatomic) DMCEnrollmentAuthenticationViewController *usernameViewController;
@property (copy, nonatomic) id /* block */ usernameCompletionHandler;
@property (copy, nonatomic) id /* block */ ESSOApplicationInstallationCompletionHandler;
@property (nonatomic) BOOL hasDoneAuthServices;
@property (retain, nonatomic) DMCEnrollmentAuthenticationController *authenticationController;
@property (copy, nonatomic) NSString *managedAppleID;
@property (retain, nonatomic) DMCEnrollmentConsentViewController *consentViewController;
@property (copy, nonatomic) id /* block */ consentCompletionHandler;
@property (copy, nonatomic) id /* block */ profileInstallationCompletionHandler;
@property (copy, nonatomic) id /* block */ authenticationActionHandler;
@property (retain, nonatomic) DMCInstallProfileQuestionViewController *questionsController;
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
- (void)questionsController:(id)a0 didFinishWithResponses:(id)a1;
- (BOOL)questionsControllerIsDisplayedInSheet:(id)a0;
- (void)restoreViewController:(id)a0 didReceiveUserAction:(BOOL)a1;
- (void)setCurrentQuestionsController:(id)a0;
- (void)ESSOApplicationDisclosurViewController:(id)a0 didReceiveUserAction:(BOOL)a1 error:(id)a2;
- (void)showiCloudPromotionPageWithiCloudQuotaString:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleApplicationInstallationViewControllerDelegate:(id)a0 didReceiveUserAction:(BOOL)a1 error:(id)a2;
- (void)_makeAuthenticationActionHandlerWithEphemeral:(BOOL)a0 requireAppleMAID:(BOOL)a1 presentingViewController:(id)a2;
- (void)_presentOKAlertWithTitle:(id)a0 message:(id)a1 action:(id /* block */)a2;
- (void)_showCancelAlertForMAID:(id)a0 actionHandler:(id /* block */)a1;
- (void)authenticationViewController:(id)a0 didReceivePassword:(id)a1 forUsername:(id)a2;
- (void)authenticationViewController:(id)a0 didReceiveUsername:(id)a1;
- (void)authenticationViewControllerDidCancel:(id)a0;
- (void)consentViewController:(id)a0 didReceiveUserAction:(BOOL)a1;
- (void)debuggingApplicationInstallationViewController:(id)a0 didReceiveUserAction:(BOOL)a1;
- (void)dismissEnrollmentScene;
- (void)displayManagementDetailsOverviewWithProfileData:(id)a0 managedAppleID:(id)a1 completionHandler:(id /* block */)a2;
- (void)iCloudPromotionViewController:(id)a0 didReceiveUserAction:(BOOL)a1;
- (void)informQuestionViewControllerOfPreflightResult:(id)a0;
- (void)managementDetailsOverviewViewController:(id)a0 didReceiveUserAction:(BOOL)a1;
- (id)notificationNameForApplicationWillTerminate;
- (void)requestDebuggingApplicationsInstallation:(id)a0 requiredEntitlements:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestDevicePasscodeWithCompletionHandler:(id /* block */)a0;
- (void)requestESSOApplicationInstallationWithITunesItemID:(id)a0 requiredEntitlements:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestMAIDAuthenticationWithManagedAppleID:(id)a0 personaID:(id)a1 ephemeral:(BOOL)a2 requireAppleMAID:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)requestMAIDSignInWithAuthenticationResults:(id)a0 personaID:(id)a1 makeiTunesAccountActive:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)requestSilentMAIDAuthenticationWithAuthenticationResults:(id)a0 personaID:(id)a1 requireAppleMAID:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)requestUserConsentWithProfileData:(id)a0 managedAppleID:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestUserInputWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestUsernameWithDefaultUsername:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestWebAuthenticationWithWebAuthURL:(id)a0 authenticator:(id)a1 authParams:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestiCloudSignInConfirmationWithCompletionHandler:(id /* block */)a0;
- (void)showEnrollmentCompletionScene;
- (void)showEnrollmentFailure:(id)a0;
- (void)suggestRestoreForAccountWithUsername:(id)a0 personaID:(id)a1 completionHandler:(id /* block */)a2;

@end
