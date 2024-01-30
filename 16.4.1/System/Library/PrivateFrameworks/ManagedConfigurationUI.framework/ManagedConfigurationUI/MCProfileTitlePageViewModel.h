@class NSString, MCProfile, NSData, DMCProfileViewModel, NSObject, UIViewController;
@protocol OS_dispatch_queue, MCProfileTitlePageViewModelDelegate;

@interface MCProfileTitlePageViewModel : NSObject <DMCRFInteractionClient, MCInteractionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) int installState;
@property (retain, nonatomic) MCProfile *profile;
@property (retain, nonatomic) NSData *profileData;
@property (nonatomic) BOOL isInstallingProfile;
@property (retain, nonatomic) DMCProfileViewModel *profileViewModel;
@property (copy, nonatomic) NSString *pin;
@property (copy, nonatomic) NSString *managedAppleID;
@property (copy, nonatomic) NSString *personaID;
@property (copy, nonatomic) id /* block */ cleanupTask;
@property (copy, nonatomic) id /* block */ postRestoreTask;
@property (weak, nonatomic) UIViewController<MCProfileTitlePageViewModelDelegate> *delegate;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleUserInputRequest:(id)a0;
- (void)profileConnection:(id)a0 didFinishPreflightWithError:(id)a1;
- (void)profileConnection:(id)a0 didFinishInstallationWithIdentifier:(id)a1 error:(id)a2;
- (void)_setup;
- (void)profileConnection:(id)a0 didRequestMAIDSignIn:(id)a1 personaID:(id)a2;
- (void)dealloc;
- (void)profileConnectionDidRequestCurrentPasscode:(id)a0;
- (id)init;
- (void)profileConnection:(id)a0 didShowUserWarnings:(id)a1;
- (void)profileConnection:(id)a0 didRequestUserInput:(id)a1;
- (void)profileConnection:(id)a0 didRequestManagedRestoreWithManagedAppleID:(id)a1 personaID:(id)a2;
- (void).cxx_destruct;
- (void)_continueInstallAfterPresentingWarnings;
- (id)_createAuthenticationContext:(id)a0 presentingViewController:(id)a1;
- (void)_handleMAIDSignInRequestWithAccountID:(id)a0 personaID:(id)a1 connection:(id)a2;
- (BOOL)_installErrorIsUserCancelledError:(id)a0;
- (void)_installFinishedWithIdentifier:(id)a0 error:(id)a1;
- (void)_respondToMAIDAuthenticationRequestIfNeeded:(id)a0 successful:(BOOL)a1 error:(id)a2 isCancelled:(BOOL)a3;
- (void)_respondToUserInputRequest:(id)a0 cancelled:(BOOL)a1;
- (void)_signInMAID:(id)a0 authenticationResult:(id)a1 personaID:(id)a2 completionHandler:(id /* block */)a3;
- (void)doesUserWantToRestoreSnapshot:(id)a0 withConflictingApps:(id)a1 completion:(id /* block */)a2;
- (id)initWithProfile:(id)a0 profileData:(id)a1;
- (void)startProfileInstallationFlow;
- (void)terminateProfileInstallationFlow;
- (void)terminateProfileInstallationFlowAndDeleteProfile;

@end
