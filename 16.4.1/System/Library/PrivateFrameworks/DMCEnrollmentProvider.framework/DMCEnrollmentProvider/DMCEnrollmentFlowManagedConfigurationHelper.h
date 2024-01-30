@class NSData, NSString, DMCBYODEnrollmentFlowUIPresenter;

@interface DMCEnrollmentFlowManagedConfigurationHelper : NSObject <MCInteractionDelegate, DMCEnrollmentFlowMCBridge>

@property (retain, nonatomic) NSData *installingProfileData;
@property (copy, nonatomic) id /* block */ profileInstallationCompletionHandler;
@property (retain, nonatomic) NSString *devicePasscode;
@property (weak) DMCBYODEnrollmentFlowUIPresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mdmProfileInfo;
+ (id)_createProfileInvalidError;
+ (id)organizationNameFromProfile:(id)a0 payload:(id)a1;

- (void)stopEnrollmentFlowMonitor;
- (id)friendlyNameForMDMPayloadInProfile:(id)a0 error:(id *)a1;
- (void)_handleUserInputRequest:(id)a0;
- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (BOOL)isDeviceSupervised;
- (void)installEnrollmentProfile:(id)a0 devicePasscode:(id)a1 personaID:(id)a2 rmAccountIdentifier:(id)a3 managedProfileIdentifiers:(id)a4 completionHandler:(id /* block */)a5;
- (BOOL)isDeviceMDMEnrolled;
- (void)profileConnection:(id)a0 didFinishPreflightWithError:(id)a1;
- (void)trackEnrollmentDirtyState:(id)a0;
- (void)profileConnection:(id)a0 didFinishInstallationWithIdentifier:(id)a1 error:(id)a2;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (id)getMachineInfoForEnrollmentType:(unsigned long long)a0 enrollmentMethod:(unsigned long long)a1;
- (BOOL)validateESSOConfigurationProfile:(id)a0 error:(id *)a1;
- (void)installEnrollmentProfile:(id)a0 devicePasscode:(id)a1 personaID:(id)a2 rmAccountIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)profileConnection:(id)a0 didRequestMAIDSignIn:(id)a1 personaID:(id)a2;
- (void)removeApplicationWithBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isDevicePasscodeSet;
- (void)profileConnectionDidRequestCurrentPasscode:(id)a0;
- (void)reauthenticationComplete;
- (BOOL)removeProfileAssociatedWithPersonaID:(id)a0;
- (void)requestEnrollmentFlowMonitorWithPersonaID:(id)a0;
- (id)detailsFromMDMProfile:(id)a0 error:(id *)a1;
- (id)profileIdentifierFromMDMProfile:(id)a0 error:(id *)a1;
- (id)assignedManagedAppleIDFromMDMProfile:(id)a0 error:(id *)a1;
- (void)removeProfileWithIdentifier:(id)a0 async:(BOOL)a1;
- (void)manageApplicationWithBundleID:(id)a0 iTunesItemID:(id)a1 organization:(id)a2 personaID:(id)a3 associatedDomains:(id)a4 associatedDomainsEnableDirectDownloads:(id)a5 configuration:(id)a6 completionHandler:(id /* block */)a7;
- (void)profileConnection:(id)a0 didShowUserWarnings:(id)a1;
- (void)profileConnection:(id)a0 didRequestUserInput:(id)a1;
- (void)profileConnection:(id)a0 didRequestManagedRestoreWithManagedAppleID:(id)a1 personaID:(id)a2;
- (id)readEnrollmentDirtyState;
- (void).cxx_destruct;
- (id)organizationFromMDMProfile:(id)a0 error:(id *)a1;
- (BOOL)isDeviceSharediPad;
- (BOOL)isMDMProfileLocked;

@end
