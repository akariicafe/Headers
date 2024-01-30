@class NSString, MCProfile, NSData, MCUIProfile, NSObject, UIViewController;
@protocol OS_dispatch_queue, MCProfileTitlePageViewModelDelegate;

@interface MCProfileTitlePageViewModel : NSObject <MCInteractionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) int installState;
@property (retain, nonatomic) MCProfile *profile;
@property (retain, nonatomic) NSData *profileData;
@property (nonatomic) BOOL isInstallingProfile;
@property (retain, nonatomic) MCUIProfile *UIProfile;
@property (copy, nonatomic) NSString *pin;
@property (copy, nonatomic) NSString *personaID;
@property (copy, nonatomic) id /* block */ cleanupTask;
@property (weak, nonatomic) UIViewController<MCProfileTitlePageViewModelDelegate> *delegate;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setup;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)profileConnection:(id)a0 didFinishInstallationWithIdentifier:(id)a1 error:(id)a2;
- (void)profileConnectionDidRequestCurrentPasscode:(id)a0;
- (void)profileConnection:(id)a0 didRequestUserInput:(id)a1;
- (void)profileConnection:(id)a0 didRequestMAIDSignIn:(id)a1 personaID:(id)a2;
- (void)profileConnection:(id)a0 didShowUserWarnings:(id)a1;
- (void)profileConnection:(id)a0 didFinishPreflightWithError:(id)a1;
- (void)_installFinishedWithIdentifier:(id)a0 error:(id)a1;
- (BOOL)_installErrorIsUserCancelledError:(id)a0;
- (void)terminateProfileInstallationFlow;
- (void)_respondToUserInputRequest:(id)a0 cancelled:(BOOL)a1;
- (id)_createAuthenticationContext:(id)a0 presentingViewController:(id)a1;
- (void)_respondToMAIDAuthenticationRequestIfNeeded:(id)a0 successful:(BOOL)a1 error:(id)a2 isCancelled:(BOOL)a3;
- (void)_signInMAID:(id)a0 authenticationResult:(id)a1 personaID:(id)a2 completionHandler:(id /* block */)a3;
- (void)_continueInstallAfterPresentingWarnings;
- (void)_handleMAIDSignInRequestWithAccountID:(id)a0 personaID:(id)a1 connection:(id)a2;
- (void)_handleUserInputRequest:(id)a0;
- (id)initWithProfile:(id)a0 profileData:(id)a1;
- (void)startProfileInstallationFlow;
- (void)terminateProfileInstallationFlowAndDeleteProfile;

@end
