@class NSString, DMCBYODEnrollmentFlowUIPresenter;

@interface DMCEnrollmentFlowManagedConfigurationHelper : NSObject <MCInteractionDelegate, DMCEnrollmentFlowMCBridge>

@property (copy, nonatomic) id /* block */ profileInstallationCompletionHandler;
@property (retain, nonatomic) NSString *devicePasscode;
@property (weak) DMCBYODEnrollmentFlowUIPresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mdmProfileInfo;
+ (id)organizationNameFromProfile:(id)a0 payload:(id)a1;
+ (id)_createProfileInvalidError;

- (void)installEnrollmentProfile:(id)a0 devicePasscode:(id)a1 personaID:(id)a2 rmAccountIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)isDeviceSharediPad;
- (id)assignedManagedAppleIDFromMDMProfile:(id)a0 error:(id *)a1;
- (void)profileConnection:(id)a0 didShowUserWarnings:(id)a1;
- (void)profileConnectionDidRequestCurrentPasscode:(id)a0;
- (void)reauthenticationComplete;
- (id)friendlyNameForMDMPayloadInProfile:(id)a0 error:(id *)a1;
- (BOOL)isMDMProfileLocked;
- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (void)profileConnection:(id)a0 didRequestManagedRestoreWithManagedAppleID:(id)a1 personaID:(id)a2;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (BOOL)isDeviceMDMEnrolled;
- (id)organizationFromMDMProfile:(id)a0 error:(id *)a1;
- (id)readEnrollmentDirtyState;
- (void)profileConnection:(id)a0 didRequestUserInput:(id)a1;
- (id)getMachineInfoForEnrollmentType:(unsigned long long)a0 enrollmentMethod:(unsigned long long)a1;
- (void)profileConnection:(id)a0 didFinishPreflightWithError:(id)a1;
- (void)_handleUserInputRequest:(id)a0;
- (void).cxx_destruct;
- (void)trackEnrollmentDirtyState:(id)a0;
- (void)stopEnrollmentFlowMonitor;
- (void)profileConnection:(id)a0 didFinishInstallationWithIdentifier:(id)a1 error:(id)a2;
- (BOOL)isDeviceSupervised;
- (BOOL)removeProfileAssociatedWithPersonaID:(id)a0;
- (BOOL)isDevicePasscodeSet;
- (void)removeProfileWithIdentifier:(id)a0 async:(BOOL)a1;
- (void)requestEnrollmentFlowMonitorWithPersonaID:(id)a0;
- (void)profileConnection:(id)a0 didRequestMAIDSignIn:(id)a1 personaID:(id)a2;
- (id)detailsFromMDMProfile:(id)a0 error:(id *)a1;
- (id)profileIdentifierFromMDMProfile:(id)a0 error:(id *)a1;

@end
