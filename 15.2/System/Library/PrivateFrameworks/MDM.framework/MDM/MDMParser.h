@class CATOperationQueue, NSString, MDMDServer, MDMBackupManager;

@interface MDMParser : MDMAbstractTunnelParser

@property (retain, nonatomic) NSString *managingProfileIdentifier;
@property (retain, nonatomic) CATOperationQueue *operationQueue;
@property (retain, nonatomic) MDMBackupManager *backupManagerForMainPersona;
@property (retain, nonatomic) MDMBackupManager *backupManagerForEnterprisePersona;
@property (weak, nonatomic) MDMDServer *server;
@property (readonly, nonatomic) BOOL isChaperoned;
@property (nonatomic) BOOL isMDM;

+ (id)malformedRequestErrorResult;
+ (id)_MCKeysToDMFKeys;
+ (id)_DMFKeysToMCKeys;
+ (id)_stringForAppState:(unsigned long long)a0;
+ (BOOL)_dmfAction:(unsigned long long *)a0 fromMDMActionString:(id)a1;
+ (unsigned long long)_shouldUseDelayWithRequest:(id)a0;
+ (id)_errorFromDMFSoftwareUpdateError:(id)a0;
+ (id)_resolvedInstallActionStringForAction:(unsigned long long)a0;
+ (id)_statusFromError:(id)a0 action:(unsigned long long)a1;
+ (id)errorChainFromError:(id)a0;
+ (id)_updateDictionaryFromUpdate:(id)a0;
+ (id)_errorWithDomain:(id)a0 code:(long long)a1 descriptionKey:(id)a2 underlyingError:(id)a3 type:(id)a4;
+ (BOOL)_useDelayFlagAllowed;
+ (id)_MCKeysWithNoMatchingDMFKey;

- (id)_originator;
- (void).cxx_destruct;
- (id)_profileList:(id)a0 filterFlags:(int)a1;
- (id)_installProfile:(id)a0 accessRights:(int)a1 installationType:(long long)a2;
- (id)_removeProfileWithIdentifier:(id)a0 forInstalledProfilesWithFilterFlags:(int)a1;
- (id)_restrictions:(id)a0 withProfileFilterFlags:(int)a1;
- (id)_analyticsCommandNameFromRequest:(id)a0;
- (id)_analyticsErrorFromResponse:(id)a0;
- (BOOL)_analyticsRequiresNetworkTetheringFromRequest:(id)a0;
- (id)_allCommands;
- (id)_profileList:(id)a0;
- (id)_installProfile:(id)a0 accessRights:(int)a1;
- (id)_removeProfile:(id)a0;
- (id)_restrictions:(id)a0;
- (id)_allowedDeviceQueriesForAccessRights:(int)a0;
- (void)_sendAnalyticsMDMCommandEventWithRequest:(id)a0 response:(id)a1;
- (id)_invalidRequestTypeError:(id)a0;
- (id)_unavailableCommandsWhileLocked;
- (id)_unavailableCommandsBeforeFirstUnlock;
- (id)_unavailableCommandsInLimitedAppsMode;
- (id)_invalidRequestTypeInSingleAppModeError:(id)a0;
- (id)unavailableCommandsDuringBuddy;
- (id)unavailableCommandsWhileInMDMLostMode;
- (id)_invalidRequestTypeInMDMLostModeError:(id)a0;
- (id)_notNetworkTetheredError;
- (id)_deviceInformationWithRequest:(id)a0 allowedQueries:(id)a1;
- (id)_deviceInformationWithRequest:(id)a0 accessRights:(int)a1;
- (void)_processRequest:(id)a0 accessRights:(int)a1 assertion:(id)a2 completionBlock:(id /* block */)a3;
- (id)_notAuthorizedError;
- (id)_deviceLock:(id)a0;
- (id)_restartDevice:(id)a0;
- (id)_shutDownDevice:(id)a0;
- (void)_enableLostMode:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_playLostModeSound:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_disableLostMode:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (id)_deviceLocation:(id)a0;
- (id)_clearPasscode:(id)a0;
- (id)_requestUnlockToken:(id)a0;
- (id)_eraseDevice:(id)a0;
- (id)_certificateList:(id)a0;
- (id)_provisioningProfileList:(id)a0;
- (id)_installProvisioningProfile:(id)a0;
- (id)_removeProvisioningProfile:(id)a0;
- (id)_installedApplicationList:(id)a0;
- (id)_securityInfo:(id)a0;
- (id)_settings:(id)a0 accessRights:(int)a1;
- (void)_installApplication:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (id)_validateApplications:(id)a0;
- (id)_applyRedemptionCode:(id)a0 assertion:(id)a1;
- (id)_managedApplicationList:(id)a0;
- (id)_managedApplicationConfiguration:(id)a0;
- (id)_managedApplicationAttributes:(id)a0;
- (id)_managedApplicationFeedback:(id)a0;
- (id)_removeApplication:(id)a0;
- (void)_requestMirroringRequest:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_stopMirroringRequest:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_inviteToProgramRequest:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_activationLockBypassCodeRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)_clearActivationLockBypassCodeRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)_clearRestrictionsPasswordRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)_installMedia:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_managedMediaList:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_removeMedia:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_deviceConfigured:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_scheduleOSUpdate:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_scheduleOSUpdateScan:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_availableOSUpdates:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_statusOfOSUpdates:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (id)_userList:(id)a0;
- (id)_logOutUser:(id)a0;
- (id)_deleteUser:(id)a0;
- (id)_declarativeManagement:(id)a0;
- (BOOL)_isTriggerDiagnosticsAllowed;
- (id)_triggerDiagnostics:(id)a0;
- (id)_refreshCellularPlans:(id)a0;
- (id)_deviceNotInMDMLostModeError;
- (id)_deleteAllUsersWithForceDeletion:(BOOL)a0;
- (id)_serviceSubscriptionPropertiesWithDMFKeysMappedToMCKeys:(id)a0;
- (id)_serviceSubscriptionsWithDMFKeysMappedToMCKeys:(id)a0;
- (void)_applyOverridesToDeviceInformationDictionary:(id)a0;
- (BOOL)_isProvisioningProfileUUIDManaged:(id)a0;
- (unsigned long long)_profileInstallationStyleForRequest:(id)a0;
- (id)_removeProfileWithIdentifier:(id)a0 installationType:(long long)a1;
- (BOOL)_isProfileIdentifierManaged:(id)a0;
- (id)_allSettingsItems;
- (BOOL)_isManagedAppFromManagementInformation:(id)a0;
- (BOOL)_isManagedApp:(id)a0;
- (id)_notManagedErrorAppID:(id)a0;
- (id)_handleSetAppManagementInfoRequest:(id)a0 outAdditionalResponseKeys:(id *)a1 block:(id /* block */)a2;
- (id)_malformedRequestError;
- (id)_performSetResidentUserQuotaSize:(id)a0;
- (id)_performSetResidentUsers:(id)a0;
- (id)_performSetTemporarySessionOnly:(id)a0;
- (id)_performSetSessionTimeout:(id)a0;
- (id)_setResidentUsersNumber:(id)a0;
- (id)_performSetDeviceName:(id)a0;
- (id)_performSetWallpaper:(id)a0;
- (id)_performSetDataRoaming:(id)a0;
- (id)_performSetVoiceRoaming:(id)a0;
- (id)_performSetBluetooth:(id)a0;
- (id)_performSetPersonalHotspot:(id)a0;
- (id)_performSetAppConfig:(id)a0 outAdditionalResponseKeys:(id *)a1;
- (id)_performSetAppAttributes:(id)a0 outAdditionalResponseKeys:(id *)a1;
- (id)_performSetMaximumResidentUsers:(id)a0;
- (id)_performSetUpdatePath:(id)a0;
- (id)_performSetSharedDeviceConfiguration:(id)a0;
- (id)_performSetDiagnosticSubmission:(id)a0;
- (id)_performSetAppAnalytics:(id)a0;
- (id)_performSetGracePeriod:(id)a0;
- (id)_performSetOrganizationInfo:(id)a0;
- (id)_performSetMDMOptions:(id)a0;
- (id)_performSetTimezone:(id)a0;
- (BOOL)_validateSetting:(id)a0 accessRights:(int)a1 outError:(id *)a2;
- (id)_performSetting:(id)a0 outAdditionalResponseKeys:(id *)a1 outRestartAppleTVApp:(BOOL *)a2;
- (void)_installApplicationAfterRestoreCheck:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_isCloudBackupInProgressWithCompletion:(id /* block */)a0;
- (void)_performInstallApplicationRequestWithManifestURL:(id)a0 iTunesStoreIDObj:(id)a1 bundleId:(id)a2 flagsObj:(id)a3 attributes:(id)a4 configuration:(id)a5 manageChangeStr:(id)a6 purchaseMethodValue:(int)a7 personaID:(id)a8 completionBlock:(id /* block */)a9;
- (void)_checkBackupManagers:(id)a0 withCompletion:(id /* block */)a1;
- (id)_appAlreadyInstalledErrorWithiTunesStoreID:(id)a0;
- (id)_appAlreadyInstalledErrorWithBundleID:(id)a0;
- (id)_appAlreadyQueuedErrorWithiTunesStoreID:(id)a0;
- (id)_appAlreadyQueuedErrorWithBundleID:(id)a0;
- (id)_licenseNotFoundErrorWithiTunesStoreID:(id)a0 underlyingError:(id)a1;
- (id)_licenseNotFoundErrorWithBundleID:(id)a0 underlyingError:(id)a1;
- (id)_cannotValidateAppIDErrorUnderlyingError:(id)a0;
- (id)_invalidManifestErrorWithURL:(id)a0 underlyingError:(id)a1;
- (BOOL)_identifiersIsStringArray:(id)a0;
- (id)_handleFetchAppsRequest:(id)a0 managedOnly:(BOOL)a1 deleteFeedback:(BOOL)a2 advanceTransientStates:(BOOL)a3 propertyKeys:(id)a4 block:(id /* block */)a5;
- (id)_stringForBookState:(unsigned long long)a0;
- (BOOL)_rejectSoftwareUpdateBecauseUserLoggedInCompletionBlock:(id /* block */)a0;
- (void)_dmfScheduleOSUpdate:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (void)_rejectSoftwareUpdateBecauseOfMalformedRequestCompletionBlock:(id /* block */)a0;
- (id)_softwareUpdatesNotPermittedWithLoggedInUserError;
- (id)initWithManagingProfileIdentifier:(id)a0;
- (void)processRequest:(id)a0 accessRights:(int)a1 assertion:(id)a2 completionBlock:(id /* block */)a3;
- (id)_appStoreDisabledError;
- (void)_mdmScheduleOSUpdate:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;
- (id)_responseForMalformedUpdateRequest;

@end
