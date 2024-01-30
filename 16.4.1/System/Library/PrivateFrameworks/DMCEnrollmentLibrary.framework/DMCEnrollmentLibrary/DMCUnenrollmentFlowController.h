@class NSString;
@protocol DMCUnenrollmentFlowPresenter, DMCEnrollmentFlowMCBridge;

@interface DMCUnenrollmentFlowController : DMCEnrollmentFlowControllerBase

@property (retain, nonatomic) id<DMCUnenrollmentFlowPresenter> presenter;
@property (retain, nonatomic) id<DMCEnrollmentFlowMCBridge> managedConfigurationHelper;
@property (copy, nonatomic) id /* block */ unenrollmentCompletionHandler;
@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *personaID;
@property (nonatomic) BOOL isAppleMAID;

- (void)_workerQueue_flowCompleted;
- (void)_resetToInitialSteps;
- (void)_workerQueue_performFlowStep:(unsigned long long)a0;
- (void)_askForUserConfirmationIsAppleMAID:(BOOL)a0;
- (id)_unenrollmentSteps;
- (void)_flowTerminatedWithError:(id)a0 canceled:(BOOL)a1;
- (void)_preflightUnenrollmentWithAccoutAltDSID:(id)a0;
- (void)_uninstallEnrollmentProfileWithIdentifier:(id)a0 personaID:(id)a1 altDSID:(id)a2 isAppleMAID:(BOOL)a3;
- (void)unenrollAccountWithAltDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)_nameForStep:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithPresenter:(id)a0 managedConfigurationHelper:(id)a1;
- (void)_askForPasscodeIfNeeded;

@end
