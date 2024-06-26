@class CoreTelephonyClientMux;

@interface CoreTelephonyClient : NSObject {
    id fDelegateAddr;
}

@property (nonatomic) struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } userQueue;
@property (retain, nonatomic) CoreTelephonyClientMux *mux;
@property (weak, nonatomic) id delegate;

+ (id)sharedMultiplexer;

- (void)ping:(id /* block */)a0;
- (id)getPreferredDataServiceDescriptorSync:(id *)a0;
- (void)sendDeadPeerDetection:(id /* block */)a0;
- (void)getLocalPolicies:(id)a0 completion:(id /* block */)a1;
- (void)getDataStatus:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEmergencyNumber:(id)a0 number:(id)a1 error:(id *)a2;
- (id)listPersonalWallets:(id *)a0;
- (void)deleteTransferPlansForImei:(id)a0 completion:(id /* block */)a1;
- (id)getRadioPersonality:(id)a0 error:(id *)a1;
- (void)getSweetgumPlans:(id)a0 completion:(id /* block */)a1;
- (void)saveCallBarringValue:(id)a0 facility:(int)a1 callClass:(int)a2 enabled:(BOOL)a3 password:(id)a4 completion:(id /* block */)a5;
- (id)initWithQueue:(struct dispatch_queue_s { } *)a0;
- (void)fetchCallingLineIdRestrictionValue:(id)a0 completion:(id /* block */)a1;
- (id)getWiFiCallingSettingPreferences:(id)a0 key:(id)a1 error:(id *)a2;
- (void)setRatSelection:(id)a0 selection:(id)a1 preferred:(id)a2 completion:(id /* block */)a3;
- (void)automaticallySelectNetwork:(id)a0 completion:(id /* block */)a1;
- (void)context:(id)a0 getSystemCapabilitiesWithCompletion:(id /* block */)a1;
- (void)refreshSweetgumPlans:(id)a0 completion:(id /* block */)a1;
- (void)copyNetworkSelectionMode:(id)a0 completion:(id /* block */)a1;
- (void)copyBandInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)getInternationalDataAccessStatusSync:(id *)a0;
- (void)copyRegistrationAgentStatus:(id)a0 completion:(id /* block */)a1;
- (void)context:(id)a0 getCapability:(id)a1 completion:(id /* block */)a2;
- (id)copyCarrierBundleValueWithDefault:(id)a0 keyHierarchy:(id)a1 bundleType:(id)a2 error:(id *)a3;
- (id)getRemoteDeviceOfType:(unsigned long long)a0 withEID:(id)a1 error:(id *)a2;
- (id)transferPersonalWallet:(id)a0 to:(id)a1;
- (void)changePIN:(id)a0 oldPin:(id)a1 newPin:(id)a2 completion:(id /* block */)a3;
- (void)installPendingPlanList:(id)a0 completion:(id /* block */)a1;
- (void)terminateProcess:(id /* block */)a0;
- (id)bootstrapPlanTransferForEndpoint:(unsigned long long)a0 usingMessageSession:(id)a1;
- (void)transferRemotePlan:(id)a0 fromDevice:(id)a1 completion:(id /* block */)a2;
- (id)getSmsReadyState:(id)a0 error:(id *)a1;
- (void)fetchPhonebook:(id)a0 completion:(id /* block */)a1;
- (void)copyRegistrationDisplayStatus:(id)a0 completion:(id /* block */)a1;
- (void)getSweetgumCapabilities:(id)a0 completion:(id /* block */)a1;
- (id)endPlanTransferForEndPoint:(unsigned long long)a0;
- (BOOL)context:(id)a0 isMandatoryDisabledVoLTE:(id *)a1;
- (void)changePIN:(id)a0 oldPin:(id)a1 newPin:(id)a2 error:(id *)a3;
- (id)proxyWithErrorHandler:(id /* block */)a0;
- (void)addPlanWith:(id)a0 completionHandler:(id /* block */)a1;
- (void)getMobileSubscriberHomeCountryList:(id)a0 completion:(id /* block */)a1;
- (void)setLabel:(id)a0 label:(id)a1 completion:(id /* block */)a2;
- (void)getPhoneServicesDeviceInfoWithCompletion:(id /* block */)a0;
- (id)setSaveDataMode:(id)a0 enable:(BOOL)a1;
- (id)getSignalStrengthMeasurements:(id)a0 error:(id *)a1;
- (void)submitSimSetupUsage:(id)a0 completion:(id /* block */)a1;
- (void)setUserEntered:(id)a0 monthlyBudget:(id)a1 error:(id *)a2;
- (id)setSupportDynamicDataSimSwitchOnBBCall:(BOOL)a0;
- (void)installPendingPlan:(id)a0 completion:(id /* block */)a1;
- (void)dataUsageForLastPeriods:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)getPNRContext:(id)a0 completion:(id /* block */)a1;
- (void)copyCellInfo:(id)a0 completion:(id /* block */)a1;
- (void)getInternationalDataAccess:(id)a0 completion:(id /* block */)a1;
- (void)saveSIMLockValue:(id)a0 enabled:(BOOL)a1 pin:(id)a2 error:(id *)a3;
- (id)getCurrentDataSubscriptionContextSync:(id *)a0;
- (void)getSweetgumUserConsentInfo:(id)a0 completion:(id /* block */)a1;
- (void)copyLastKnownMobileSubscriberCountryCode:(id)a0 completion:(id /* block */)a1;
- (void)refreshSweetgumAll:(id)a0 completion:(id /* block */)a1;
- (id)isVinylTapeSupportedWithError:(id *)a0;
- (id)shouldAllowSimLockFor:(id)a0;
- (id)getSupports5GStandalone:(id)a0 error:(id *)a1;
- (id)getConnectionAvailability:(id)a0 connectionType:(int)a1 error:(id *)a2;
- (void)getPrefForKey:(id)a0 heirarchy:(id)a1 storage:(id)a2 completion:(id /* block */)a3;
- (id)copyCarrierBundleValue:(id)a0 key:(id)a1 bundleType:(id)a2 error:(id *)a3;
- (id)setMaxDataRate:(id)a0 rate:(long long)a1;
- (void)refreshSweetgumUsage:(id)a0 completion:(id /* block */)a1;
- (id)getPhoneServicesDeviceList:(id *)a0;
- (void)setVoLTEAudioCodec:(id)a0 codecInfo:(id)a1 completion:(id /* block */)a2;
- (void)getWiFiCallingSettingPreferences:(id)a0 key:(id)a1 completion:(id /* block */)a2;
- (void)getInternetDataStatus:(id /* block */)a0;
- (BOOL)isTetheringEditingSupported:(id)a0 error:(id *)a1;
- (BOOL)context:(id)a0 isProtectedIdentitySupported:(id)a1 error:(id *)a2;
- (BOOL)smartDataMode:(id)a0 error:(id *)a1;
- (id)getCountryBundleLocationForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)getSimLabel:(id)a0 error:(id *)a1;
- (id)getUserDefaultVoiceSubscriptionContext:(id *)a0;
- (id)copyServingPlmn:(id)a0 error:(id *)a1;
- (void)fetchCallWaitingValue:(id)a0 callClass:(int)a1 completion:(id /* block */)a2;
- (void)setPrefForKey:(id)a0 heirarchy:(id)a1 value:(id)a2 storage:(id)a3 completion:(id /* block */)a4;
- (void)fetchCallForwardingValue:(id)a0 reason:(int)a1 callClass:(int)a2 completion:(id /* block */)a3;
- (id)setInternetActive:(BOOL)a0;
- (id)copyMobileCountryCode:(id)a0 error:(id *)a1;
- (id)fetchSIMLockValue:(id)a0 error:(id *)a1;
- (void)copyAbbreviatedOperatorName:(id)a0 completion:(id /* block */)a1;
- (id)getSIMToolkitMenu:(id)a0 menu:(id *)a1;
- (id)context:(id)a0 getAttachApnSettings:(id *)a1;
- (id)getMobileEquipmentInfo:(id *)a0;
- (id)bootstrapPlanTransferForEndpoint:(unsigned long long)a0;
- (void)getVoicemailInfo:(id)a0 completion:(id /* block */)a1;
- (void)registerBlockForInvalidationNotification:(struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; } *)a0 callback:(id /* block */)a1;
- (void)getSubscriptionInfo:(id /* block */)a0;
- (void)hiddenTransferPlans:(id /* block */)a0;
- (void)isNetworkReselectionNeeded:(id)a0 completion:(id /* block */)a1;
- (id)getPhonebookEntry:(id)a0 atIndex:(int)a1 error:(id *)a2;
- (void)addPlanWith:(id)a0 request:(id)a1 appName:(id)a2 completionHandler:(id /* block */)a3;
- (id)getActiveContexts:(id *)a0;
- (id)getInternetDataStatusSync:(id *)a0;
- (id)setPacketContextActiveByServiceType:(id)a0 connectionType:(int)a1 active:(BOOL)a2;
- (id)getShortLabel:(id)a0 error:(id *)a1;
- (void)SIMUnlockProcedureDidComplete;
- (void)getRemainingPUKAttemptCount:(id)a0 completion:(id /* block */)a1;
- (void)isAnyPlanOfTransferCapability:(unsigned long long)a0 availableForThisDeviceWithCompletion:(id /* block */)a1;
- (id)isNetworkSelectionMenuAvailable:(id)a0 error:(id *)a1;
- (id)private_getConnectionAvailability:(id)a0 connectionType:(int)a1 error:(id *)a2;
- (void)copySIMIdentity:(id)a0 completion:(id /* block */)a1;
- (void)isVinylTestModeEnabledWithCompletion:(id /* block */)a0;
- (void)copyIsDataAttached:(id)a0 completion:(id /* block */)a1;
- (id)wifiCallingCTFollowUpComplete:(id)a0;
- (id)getSIMToolkitUSSDString:(id)a0 ussdString:(id *)a1 needRsp:(BOOL *)a2;
- (void)context:(id)a0 isProtectedIdentitySupported:(id)a1 completion:(id /* block */)a2;
- (id)getNRDisableStatus:(id)a0 error:(id *)a1;
- (id)copyIsInHomeCountry:(id)a0 error:(id *)a1;
- (void)getMaxDataRate:(id)a0 completion:(id /* block */)a1;
- (id)getSubscriptionInfoWithError:(id *)a0;
- (void)setUserEntered:(id)a0 monthlyBudget:(id)a1 completion:(id /* block */)a2;
- (id)getRemoteDevicesForTransferOrError:(id *)a0;
- (void)resetAPNSettings:(id /* block */)a0;
- (void)getTetheringStatus:(id /* block */)a0;
- (BOOL)restoreToSystemBundles:(id *)a0;
- (id)getPreferredDataSubscriptionContextSync:(id *)a0;
- (void)getSupportDynamicDataSimSwitchOnBBCall:(id /* block */)a0;
- (void)cacheValue:(id)a0 forSelector:(SEL)a1;
- (id)supportsHydraWithError:(id *)a0;
- (void)setUserEntered:(id)a0 monthlyRoamingBudget:(id)a1 error:(id *)a2;
- (void)selectPhonebook:(id)a0 forPhonebookName:(int)a1 withPassword:(id)a2 completion:(id /* block */)a3;
- (long long)isEsimFor:(id)a0 error:(id *)a1;
- (id)getActivationPolicyState:(id *)a0;
- (id)sendSIMToolkitDisplayReady:(id)a0;
- (void)createEncryptedIdentity:(id)a0 identity:(id)a1 completion:(id /* block */)a2;
- (void)purchaseSweetgumPlan:(id)a0 completion:(id /* block */)a1;
- (id)getListOfPresentDedicatedBearers;
- (void)getRemotePlanManageAccountInfoFor:(id)a0 completion:(id /* block */)a1;
- (void)getSupportedDataRates:(id)a0 completion:(id /* block */)a1;
- (id)copyLabel:(id)a0 error:(id *)a1;
- (unsigned int)getNATTKeepAliveOverCell:(id)a0 error:(id *)a1;
- (id)renamePersonalWallet:(id)a0 to:(id)a1;
- (void)transferCellularPlan:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)getConnectionAvailability:(id)a0 connectionType:(int)a1 completion:(id /* block */)a2;
- (struct { BOOL x0; BOOL x1; })getPrivacyProxyState:(id)a0 error:(id *)a1;
- (id)userEnteredMonthlyRoamingBudget:(id)a0 error:(id *)a1;
- (void)refreshSweetgumApps:(id)a0 completion:(id /* block */)a1;
- (void)copyGid1:(id)a0 completion:(id /* block */)a1;
- (void)deletePersonalWallet:(id)a0 completion:(id /* block */)a1;
- (id)getPhoneNumber:(id)a0 error:(id *)a1;
- (void)clearUserEnteredBillingEndDayOfMonth:(id)a0 completion:(id /* block */)a1;
- (void)isUnconditionalCallForwardingActive:(id)a0 completion:(id /* block */)a1;
- (void)getOperatorMultiPartyCallCountMaximum:(id)a0 completion:(id /* block */)a1;
- (void)getPhonebookEntryCountWithCompletion:(id)a0 completion:(id /* block */)a1;
- (void)clearUserEnteredBillingEndDayOfMonth:(id)a0 error:(id *)a1;
- (id)sendSIMToolkitUSSDResponse:(id)a0 response:(id)a1;
- (void)setTetheringActive:(BOOL)a0 completion:(id /* block */)a1;
- (id)copyBundleIdentifier:(id)a0 bundleType:(id)a1 error:(id *)a2;
- (BOOL)isAttachApnSettingAllowed:(id)a0 error:(id *)a1;
- (id)context:(id)a0 addPhoneServicesDevice:(id)a1;
- (id)getIMSRegistrationStatus:(id)a0 error:(id *)a1;
- (id)context:(id)a0 evaluateMobileSubscriberIdentity:(id)a1;
- (unsigned int)getNATTKeepAliveOverCellForPreferredDataContext:(id *)a0;
- (void)setDefaultVoice:(id)a0 error:(id *)a1;
- (void)copyGid2:(id)a0 completion:(id /* block */)a1;
- (id)context:(id)a0 getCarrierBundleValue:(id)a1 error:(id *)a2;
- (BOOL)interfaceCostExpensive:(id)a0 error:(id *)a1;
- (unsigned int)getPublicNrFrequencyRangeSync:(id *)a0;
- (void)copyCellId:(id)a0 completion:(id /* block */)a1;
- (id)context:(id)a0 getEncryptedIdentity:(id)a1 error:(id *)a2;
- (id)copyMobileSubscriberIsoSubregionCode:(id)a0 MNC:(id)a1 error:(id *)a2;
- (void)isPNRSupported:(id)a0 completion:(id /* block */)a1;
- (void)copyEmergencyMode:(id /* block */)a0;
- (id)setSupports5GStandalone:(id)a0 enabled:(BOOL)a1;
- (void)setDefaultVoice:(id)a0 completion:(id /* block */)a1;
- (long long)getMaxDataRate:(id)a0 error:(id *)a1;
- (id)private_getDataStatus:(id)a0 error:(id *)a1;
- (void)setLabel:(id)a0 label:(id)a1 error:(id *)a2;
- (void)unlockPUK:(id)a0 puk:(id)a1 newPin:(id)a2 completion:(id /* block */)a3;
- (void)getSimLabel:(id)a0 completion:(id /* block */)a1;
- (id)fetchCallingLineIdRestrictionValue:(id)a0;
- (void)setInternationalDataAccessStatus:(BOOL)a0 completion:(id /* block */)a1;
- (void)getInternetConnectionState:(id /* block */)a0;
- (void)copyPriVersion:(id)a0 completion:(id /* block */)a1;
- (void)getPhonebookEntryWithCompletion:(id)a0 atIndex:(int)a1 completion:(id /* block */)a2;
- (void)setUserEnteredBillingEnd:(id)a0 dayOfMonth:(id)a1 error:(id *)a2;
- (void)refreshCellMonitor:(id)a0 completion:(id /* block */)a1;
- (int)getPublicDataBearerSync:(id *)a0;
- (id)getSIMStatus:(id)a0 error:(id *)a1;
- (void)copyMobileEquipmentInfo:(id /* block */)a0;
- (void)getEmergencyTextNumbers:(id)a0 completion:(id /* block */)a1;
- (id)getBandInfo:(id)a0 error:(id *)a1;
- (id)fetchCallBarringValue:(id)a0 facility:(int)a1 callClass:(int)a2 password:(id)a3;
- (id)getActiveConnections:(id)a0 error:(id *)a1;
- (id)copyMobileSubscriberCountryCode:(id)a0 error:(id *)a1;
- (id)getPacketContextCount:(unsigned int *)a0;
- (void)getSweetgumDataPlanMetrics:(id)a0 completion:(id /* block */)a1;
- (id)setWiFiCallingSettingPreferences:(id)a0 key:(id)a1 value:(id)a2;
- (void)getSweetgumUsage:(id)a0 completion:(id /* block */)a1;
- (id)copyMobileSubscriberNetworkCode:(id)a0 error:(id *)a1;
- (void)fetchSIMLockValue:(id)a0 completion:(id /* block */)a1;
- (id)getSimHardwareInfo:(id)a0 error:(id *)a1;
- (void)convertPhysicalToeSIMWithCompletionHandler:(id /* block */)a0;
- (id)copyPublicCellId:(id)a0 error:(id *)a1;
- (void)getDeviceInfo:(id /* block */)a0;
- (long long)context:(id)a0 supportedIdentityProtectionFor:(id)a1 error:(id *)a2;
- (void)copyNetworkList:(id)a0 completion:(id /* block */)a1;
- (void)setVinylTestMode:(BOOL)a0 completion:(id /* block */)a1;
- (void)issuePNRRequest:(id)a0 pnrReqType:(id)a1 completion:(id /* block */)a2;
- (void)bootstrapPlanTransferForEndpoint:(unsigned long long)a0 usingMessageSession:(id)a1 completion:(id /* block */)a2;
- (id)selectSIMToolkitMenuItem:(id)a0 index:(id)a1;
- (BOOL)hasCellularAndValidContext:(id)a0 error:(id *)a1;
- (id)getSubscriptionUserFacingName:(id)a0 error:(id *)a1;
- (id)getTetheringStatusSync:(id *)a0;
- (void)context:(id)a0 getPhoneNumberSignatureWithCompletion:(id /* block */)a1;
- (const void *)createAssertionForConnectionType:(int)a0 allocator:(const struct __CFAllocator { } *)a1 error:(id *)a2 onReAssertError:(id /* block */)a3;
- (void)copyRegistrationStatus:(id)a0 completion:(id /* block */)a1;
- (void)getSupportDynamicDataSimSwitch:(id /* block */)a0;
- (id)resetAPNSettings;
- (id)getDescriptorsForDomain:(long long)a0 error:(id *)a1;
- (void)hideTransferCellularPlan:(id)a0 fromDevice:(id)a1 completion:(id /* block */)a2;
- (id)getLocalPolicies:(id)a0 error:(id *)a1;
- (id)copyMobileNetworkCode:(id)a0 error:(id *)a1;
- (void)copyNetworkSelectionInfo:(id)a0 completion:(id /* block */)a1;
- (id)copyMobileSubscriberIsoCountryCode:(id)a0 error:(id *)a1;
- (BOOL)hasDedicatedBearerSupport;
- (void)context:(id)a0 modifyAttachApnSettings:(id)a1 completion:(id /* block */)a2;
- (void)promptForSIMUnlock:(id)a0 completion:(id /* block */)a1;
- (id)copyCarrierBundleLocation:(id)a0 error:(id *)a1;
- (id)copyBundleVersion:(id)a0 bundleType:(id)a1 error:(id *)a2;
- (void)getPreferredDataSubscriptionContext:(id /* block */)a0;
- (id)getUIConfiguredApns:(id)a0 error:(id *)a1;
- (void)getSIMStatus:(id)a0 completion:(id /* block */)a1;
- (id)private_getActiveConnections:(id)a0 error:(id *)a1;
- (void)getShortLabel:(id)a0 completion:(id /* block */)a1;
- (BOOL)isAnyPlanTransferableFromThisDeviceOrError:(id *)a0;
- (void)setActiveBandInfo:(id)a0 bands:(id)a1 error:(id *)a2;
- (id)setInterfaceCost:(id)a0 expensive:(BOOL)a1;
- (id)getPublicSignalStrength:(id)a0 error:(id *)a1;
- (id)getCurrentRat:(id)a0 error:(id *)a1;
- (BOOL)isSmartDataModeSupported:(id *)a0;
- (id)sendSIMToolkitResponse:(id)a0 session:(id)a1 response:(id)a2;
- (id)getDataMode:(id)a0 error:(id *)a1;
- (void)copyBundleIdentifier:(id)a0 bundleType:(id)a1 completion:(id /* block */)a2;
- (void)copyCarrierBookmarks:(id)a0 completion:(id /* block */)a1;
- (id)getQoSLinkCharacteristics:(id *)a0;
- (id)getLastKnownSimDeactivationInfoFor:(id)a0 error:(id *)a1;
- (void)copyCarrierBundleVersion:(id)a0 completion:(id /* block */)a1;
- (void)unlockPIN:(id)a0 pin:(id)a1 error:(id *)a2;
- (id)initWithQueue:(struct dispatch_queue_s { } *)a0 multiplexer:(id)a1;
- (id)removeAllDedicatedBearers;
- (id)getRemainingPINAttemptCount:(id)a0 error:(id *)a1;
- (id)copyRegistrationStatus:(id)a0 error:(id *)a1;
- (void)copyCarrierBundleValue:(id)a0 keyHierarchy:(id)a1 bundleType:(id)a2 completion:(id /* block */)a3;
- (id)getEnglishCarrierNameFor:(id)a0 error:(id *)a1;
- (void)dataUsageForLastPeriodsOnActivePairedDevice:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)getMobileEquipmentInfoFor:(id)a0 error:(id *)a1;
- (void)context:(id)a0 addPhoneServicesDevice:(id)a1 withCompletion:(id /* block */)a2;
- (id)fetchCallingLinePresentationValue:(id)a0;
- (unsigned int)getNATTKeepAliveOverCell:(id *)a0;
- (id)getSupportedDataRates:(id)a0 error:(id *)a1;
- (id)getCallCapabilities:(id)a0 error:(id *)a1;
- (id)userEnteredMonthlyBudget:(id)a0 error:(id *)a1;
- (void)dispatchBlockToClientAsync:(id /* block */)a0;
- (BOOL)getSupportDynamicDataSimSwitchSync:(id *)a0;
- (void)userEnteredBillingEndDayOfMont:(id)a0 completion:(id /* block */)a1;
- (void)getTransferPlansWithCompletion:(id /* block */)a0;
- (id)setInternationalDataAccessSync:(id)a0 status:(BOOL)a1;
- (BOOL)isEmergencyNumberWithWhitelistIncluded:(id)a0 number:(id)a1 error:(id *)a2;
- (id)saveCallBarringValue:(id)a0 facility:(int)a1 callClass:(int)a2 enabled:(BOOL)a3 password:(id)a4;
- (BOOL)getInternationalDataAccessSync:(id)a0 error:(id *)a1;
- (id)requestQoSLinkCharacteristics;
- (id)getSIMTrayStatusOrError:(id *)a0;
- (id)enterLoopBackMode;
- (void)copyMobileNetworkCode:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addPlanWith:(id)a0 appName:(id)a1 appType:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)copyMobileSubscriberNetworkCode:(id)a0 completion:(id /* block */)a1;
- (void)saveSIMLockValue:(id)a0 enabled:(BOOL)a1 pin:(id)a2 completion:(id /* block */)a3;
- (id)copyCarrierBundleValueWithCountryBundleLookup:(id)a0 keyHierarchy:(id)a1 matchingInfo:(id)a2 error:(id *)a3;
- (void)getRemotePolicies:(id)a0 completion:(id /* block */)a1;
- (id)getCountryBundleIdentifierForCountryCode:(id)a0 error:(id *)a1;
- (void)copyCarrierBundleValue:(id)a0 key:(id)a1 bundleType:(id)a2 completion:(id /* block */)a3;
- (void)context:(id)a0 getCarrierBundleValue:(id)a1 completion:(id /* block */)a2;
- (BOOL)isDedicatedBearerPresent:(id)a0 error:(id *)a1;
- (id)getRejectCauseCode:(id)a0 error:(id *)a1;
- (id)getOperatorMultiPartyCallCountMaximum:(id)a0 error:(id *)a1;
- (id)synchronousProxyWithErrorHandler:(id /* block */)a0;
- (void)copyNetworkSelection:(id)a0 completion:(id /* block */)a1;
- (void)generateAuthenticationInfoUsingSim:(id)a0 authParams:(id)a1 completion:(id /* block */)a2;
- (id)getTypeAllocationCode:(id)a0 error:(id *)a1;
- (void)copyIsInHomeCountry:(id)a0 completion:(id /* block */)a1;
- (id)getConfiguredApns:(id)a0 error:(id *)a1;
- (id)copyRegistrationDisplayStatus:(id)a0 error:(id *)a1;
- (void)plansPendingInstallWithCompletion:(id /* block */)a0;
- (id)getConnectionState:(id)a0 connectionType:(int)a1 error:(id *)a2;
- (void)saveCallingLineIdRestrictionValue:(id)a0 restrictionValue:(int)a1 completion:(id /* block */)a2;
- (void)getRemainingPINAttemptCount:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)getRemoteDevicesOfType:(unsigned long long)a0 error:(id *)a1;
- (void)getRemoteDevices:(id /* block */)a0;
- (id)private_getConnectionState:(id)a0 connectionType:(int)a1 error:(id *)a2;
- (BOOL)isPNRSupported:(id)a0 outError:(id *)a1;
- (id)getRemoteDeviceForTransferWithEID:(id)a0 error:(id *)a1;
- (void)getPublicNrFrequencyRange:(id /* block */)a0;
- (id)cancelPlanTransfer:(id)a0 fromDevice:(id)a1;
- (void)getPhoneNumberWithCompletion:(id)a0 completion:(id /* block */)a1;
- (void)context:(id)a0 removePhoneServicesDevice:(id)a1 withCompletion:(id /* block */)a2;
- (id)sendSIMToolkitUserActivity:(id)a0;
- (BOOL)saveDataMode:(id)a0 error:(id *)a1;
- (void)context:(id)a0 getPseudoIdentityFor:(id)a1 completion:(id /* block */)a2;
- (void)copyMobileCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)saveCallingLineIdRestrictionValue:(id)a0 restrictionValue:(int)a1;
- (void)setBandInfo:(id)a0 bands:(id)a1 completion:(id /* block */)a2;
- (id)context:(id)a0 setCapability:(id)a1 enabled:(BOOL)a2 with:(id)a3;
- (void)setUserEntered:(id)a0 monthlyRoamingBudget:(id)a1 completion:(id /* block */)a2;
- (void)getCameraScanInfoForCardData:(id)a0 completionHandler:(id /* block */)a1;
- (struct { BOOL x0; BOOL x1; })reliableNetworkFallback:(id)a0 error:(id *)a1;
- (void)getCurrentDataServiceDescriptor:(id /* block */)a0;
- (void)copyRejectCauseCode:(id)a0 completion:(id /* block */)a1;
- (void)setSweetgumUserConsent:(id)a0 userConsent:(BOOL)a1 completion:(id /* block */)a2;
- (void)copyRegistrationIMSTransportInfo:(id)a0 completion:(id /* block */)a1;
- (void)getIMSRegistrationStatus:(id)a0 completion:(id /* block */)a1;
- (id)setLocalPolicies:(id)a0;
- (id)context:(id)a0 recheckPhoneServicesAccountStatus:(id)a1;
- (int)getPhonebookEntryCount:(id)a0 error:(id *)a1;
- (void)transferPlan:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)setSupportDynamicDataSimSwitch:(BOOL)a0;
- (void)getActiveConnections:(id)a0 completion:(id /* block */)a1;
- (void)copyCarrierBundleValueWithDefault:(id)a0 key:(id)a1 bundleType:(id)a2 completion:(id /* block */)a3;
- (void)copyLabel:(id)a0 completion:(id /* block */)a1;
- (void)setSupportDynamicDataSimSwitch:(BOOL)a0 completion:(id /* block */)a1;
- (void)copyFirmwareUpdateInfo:(id)a0 completion:(id /* block */)a1;
- (id)setInternationalDataAccessStatus:(BOOL)a0;
- (void)setMaxDataRate:(id)a0 rate:(long long)a1 completion:(id /* block */)a2;
- (id)copyLastKnownMobileCountryCode:(id)a0 error:(id *)a1;
- (BOOL)isPhoneNumberCredentialValid:(id)a0 outError:(id *)a1;
- (void)authenticate:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (id)getLocalizedOperatorName:(id)a0 error:(id *)a1;
- (void)copyCarrierBundleLocation:(id)a0 completion:(id /* block */)a1;
- (id)fetchConnectedLineIdRestrictionValue:(id)a0;
- (void)getTransferPlanListWithCompletion:(id /* block */)a0;
- (void)isAttachApnSettingAllowed:(id)a0 completion:(id /* block */)a1;
- (void)getPhoneServicesDeviceListWithCompletion:(id /* block */)a0;
- (void)getSweetgumApps:(id)a0 completion:(id /* block */)a1;
- (id)copyRadioAccessTechnology:(id)a0 error:(id *)a1;
- (id)context:(id)a0 modifyAttachApnSettings:(id)a1;
- (id)context:(id)a0 mandatoryDisableVoLTE:(BOOL)a1;
- (void)fetchCallingLinePresentationValue:(id)a0 completion:(id /* block */)a1;
- (void)setWiFiCallingSettingPreferences:(id)a0 key:(id)a1 value:(id)a2 completion:(id /* block */)a3;
- (id)terminateProcess;
- (void)isEmergencyNumberWithWhitelistIncluded:(id)a0 number:(id)a1 completion:(id /* block */)a2;
- (void)getCurrentDataSubscriptionContext:(id /* block */)a0;
- (void)getCallCapabilities:(id)a0 completion:(id /* block */)a1;
- (id)getCurrentDataServiceDescriptorSync:(id *)a0;
- (BOOL)supportsCellular;
- (id)cancelCellularPlanTransfer:(id)a0 fromDevice:(id)a1;
- (void)fetchConnectedLinePresentationValue:(id)a0 completion:(id /* block */)a1;
- (id)setPrefForKey:(id)a0 heirarchy:(id)a1 value:(id)a2 storage:(id)a3;
- (id)removeDedicatedBearer:(id)a0;
- (void)clearUserEnteredMonthlyBudget:(id)a0 completion:(id /* block */)a1;
- (void)purchaseAddOnPlan:(id)a0 completion:(id /* block */)a1;
- (id)loadGSMASettings:(id)a0 state:(BOOL)a1;
- (BOOL)lowDataMode:(id)a0 error:(id *)a1;
- (id)context:(id)a0 getCapability:(id)a1 status:(BOOL *)a2 with:(id *)a3;
- (id)fetchConnectedLinePresentationValue:(id)a0;
- (void)context:(id)a0 supportedIdentityProtectionFor:(id)a1 completion:(id /* block */)a2;
- (void)getSignalStrengthMeasurements:(id)a0 completion:(id /* block */)a1;
- (void)getInternetConnectionAvailability:(id /* block */)a0;
- (void)getActiveContextsWithCallback:(id /* block */)a0;
- (id)copyNetworkSelectionInfo:(id)a0 error:(id *)a1;
- (id)getPrefForKey:(id)a0 heirarchy:(id)a1 storage:(id)a2 error:(id *)a3;
- (void)getTetheringStatus:(id /* block */)a0 connectionType:(int)a1;
- (void)copyLastKnownMobileCountryCode:(id)a0 completion:(id /* block */)a1;
- (void)context:(id)a0 setCapability:(id)a1 enabled:(BOOL)a2 with:(id)a3 completion:(id /* block */)a4;
- (id)getMobileSubscriberHomeCountryList:(id)a0 error:(id *)a1;
- (id)fetchCallWaitingValue:(id)a0 callClass:(int)a1;
- (void)copyServingPlmn:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)getGSMAUIControlSetting:(id)a0 error:(id *)a1;
- (void)userEnteredMonthlyBudget:(id)a0 completion:(id /* block */)a1;
- (id)copyCarrierBundleValue:(id)a0 keyHierarchy:(id)a1 bundleType:(id)a2 error:(id *)a3;
- (BOOL)shouldShowUserWarningWhenDialingCallOnContext:(id)a0 error:(id *)a1;
- (void)unhideTransferPlan:(id)a0 completion:(id /* block */)a1;
- (id)getPNRContext:(id)a0 outError:(id *)a1;
- (id)saveCallForwardingValue:(id)a0 value:(id)a1;
- (void)copyWirelessTechnology:(id)a0 completion:(id /* block */)a1;
- (void)copyRadioAccessTechnology:(id)a0 completion:(id /* block */)a1;
- (void)unlockPIN:(id)a0 pin:(id)a1 completion:(id /* block */)a2;
- (void)copyCarrierBundleValueWithDefault:(id)a0 keyHierarchy:(id)a1 bundleType:(id)a2 completion:(id /* block */)a3;
- (void)getConfiguredApns:(id)a0 completion:(id /* block */)a1;
- (void)setActiveUserDataSelection:(id)a0 error:(id *)a1;
- (void)getNATTKeepAliveOverCell:(id)a0 completion:(id /* block */)a1;
- (id)setReliableNetworkFallback:(id)a0 enable:(BOOL)a1;
- (void)setSupportDynamicDataSimSwitchOnBBCall:(BOOL)a0 completion:(id /* block */)a1;
- (id)sendSIMToolkitBooleanResponse:(id)a0 session:(id)a1 response:(id)a2 yesNo:(BOOL)a3;
- (void)copyMobileSubscriberIdentity:(id)a0 completion:(id /* block */)a1;
- (void)unlockPUK:(id)a0 puk:(id)a1 newPin:(id)a2 error:(id *)a3;
- (id)billingCycleEndDatesForLastPeriods:(unsigned long long)a0 error:(id *)a1;
- (id)userEnteredBillingEndDayOfMont:(id)a0 error:(id *)a1;
- (void)fetchNetworkList:(id)a0 completion:(id /* block */)a1;
- (void)isEmergencyNumber:(id)a0 number:(id)a1 completion:(id /* block */)a2;
- (void)getSubscriptionUserFacingName:(id)a0 completion:(id /* block */)a1;
- (long long)getDualSimCapability:(id *)a0;
- (void)clearUserEnteredMonthlyBudget:(id)a0 error:(id *)a1;
- (void)copyLocationAreaCode:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsPlanProvisioning:(id)a0 carrierDescriptors:(id)a1 smdpUrl:(id)a2 iccidPrefix:(id)a3;
- (id)selectSIMToolkitListItem:(id)a0 session:(id)a1 response:(id)a2 index:(id)a3;
- (void)removePoliciesFromLocalDevice:(id)a0 completion:(id /* block */)a1;
- (void)hideTransferPlan:(id)a0 fromDevice:(id)a1 completion:(id /* block */)a2;
- (id)private_setPacketContextActiveByServiceType:(id)a0 connectionType:(int)a1 active:(BOOL)a2;
- (void)dealloc;
- (void)getSignalStrengthInfo:(id)a0 completion:(id /* block */)a1;
- (id)copyCarrierBundleVersion:(id)a0 error:(id *)a1;
- (void)getConnectionState:(id)a0 connectionType:(int)a1 completion:(id /* block */)a2;
- (void)userEnteredMonthlyRoamingBudget:(id)a0 completion:(id /* block */)a1;
- (id)context:(id)a0 canSetCapability:(id)a1 allowed:(BOOL *)a2 with:(id *)a3;
- (void)getRadioPersonality:(id)a0 completion:(id /* block */)a1;
- (id)getInternetConnectionStateSync:(id *)a0;
- (void)copyBundleVersion:(id)a0 bundleType:(id)a1 completion:(id /* block */)a2;
- (void)clearUserEnteredMonthlyRoamingBudget:(id)a0 error:(id *)a1;
- (id)setPrivacyProxyState:(id)a0 enabled:(BOOL)a1;
- (void)transferPlans:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)context:(id)a0 getPseudoIdentityFor:(id)a1 error:(id *)a2;
- (id)saveCallWaitingValue:(id)a0 callClass:(int)a1 enabled:(BOOL)a2;
- (id)getTetheringStatusSync:(id *)a0 connectionType:(int)a1;
- (id)setTetheringActive:(BOOL)a0;
- (id)setSmartDataMode:(id)a0 enable:(BOOL)a1;
- (void)isNetworkSelectionMenuAvailable:(id)a0 completion:(id /* block */)a1;
- (id)cancelSIMToolkitUSSDSession:(id)a0;
- (id)copyLastKnownMobileSubscriberCountryCode:(id)a0 error:(id *)a1;
- (void)transferCellularPlans:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)remotePlanSignupInfoFor:(id)a0 userConsent:(long long)a1 completion:(id /* block */)a2;
- (BOOL)getSupportDynamicDataSimSwitchOnBBCallSync:(id *)a0;
- (id)addDedicatedBearer:(id)a0 error:(id *)a1;
- (struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; } *)createCTAssertionForConnectionType:(int)a0 allocator:(struct __CFAllocator { } *)a1 proxy:(id)a2;
- (void)setInternetActive:(BOOL)a0 completion:(id /* block */)a1;
- (id)copyGid2:(id)a0 error:(id *)a1;
- (id)setLowDataMode:(id)a0 enable:(BOOL)a1;
- (id)copyCarrierBundleValueWithDefault:(id)a0 key:(id)a1 bundleType:(id)a2 error:(id *)a3;
- (id)getPhoneServicesDeviceInfo:(id *)a0;
- (void)setActiveUserDataSelection:(id)a0 completion:(id /* block */)a1;
- (void)setUserEnteredBillingEnd:(id)a0 dayOfMonth:(id)a1 completion:(id /* block */)a2;
- (unsigned int)private_getNATTKeepAliveOverCell:(id)a0 error:(id *)a1;
- (void)clearUserEnteredMonthlyRoamingBudget:(id)a0 completion:(id /* block */)a1;
- (id)fetchCallForwardingValue:(id)a0 reason:(int)a1 callClass:(int)a2;
- (void)getRatSelection:(id)a0 completion:(id /* block */)a1;
- (id)setRatSelectionMask:(id)a0 selection:(unsigned char)a1 preferred:(unsigned char)a2;
- (id)sendDeadPeerDetection;
- (id)getRatSelectionMask:(id)a0 error:(id *)a1;
- (void)setInternationalDataAccess:(id)a0 status:(BOOL)a1 completion:(id /* block */)a2;
- (void)setPacketContextActiveByServiceType:(id)a0 connectionType:(int)a1 active:(BOOL)a2 completion:(id /* block */)a3;
- (void)getEnhancedVoiceLinkQualityMetric:(id)a0 completion:(id /* block */)a1;
- (void)refreshUserAuthToken:(id)a0 error:(id *)a1;
- (id)getInternetConnectionAvailabilitySync:(id *)a0;
- (void)getSmscAddress:(id)a0 completion:(id /* block */)a1;
- (id)copyGid1:(id)a0 error:(id *)a1;
- (void)savePhonebookEntry:(id)a0 atIndex:(int)a1 withContactName:(id)a2 contactNumber:(id)a3 completion:(id /* block */)a4;
- (void)resetUIConfiguredApns:(id)a0 completion:(id /* block */)a1;
- (id).cxx_construct;
- (void)getPublicDataBearer:(id /* block */)a0;
- (id)copySIMIdentity:(id)a0 error:(id *)a1;
- (BOOL)isHighDataModeSupported:(id)a0 error:(id *)a1;
- (void)fetchCallBarringValue:(id)a0 facility:(int)a1 callClass:(int)a2 password:(id)a3 completion:(id /* block */)a4;
- (id)getSIMToolkitListItems:(id)a0 items:(id *)a1;
- (void)checkRadioBootHealth:(id /* block */)a0;
- (id)context:(id)a0 getSystemCapabilities:(id *)a1;
- (void)shouldShowUserWarningWhenDialingCallOnContext:(id)a0 completion:(id /* block */)a1;
- (void)getDescriptorsForDomain:(long long)a0 completion:(id /* block */)a1;
- (id)getEncryptionStatus:(id)a0 error:(id *)a1;
- (void)performNetworkAccessFlowIfAllowed:(id)a0 ignoreForeground:(BOOL)a1 completion:(id /* block */)a2;
- (void)setRemotePolicies:(id)a0 completion:(id /* block */)a1;
- (id)getSignalStrengthInfo:(id)a0 error:(id *)a1;
- (id)sendSIMToolkitStringResponse:(id)a0 session:(id)a1 response:(id)a2 string:(id)a3;
- (void)context:(id)a0 canSetCapability:(id)a1 completion:(id /* block */)a2;
- (id)getUserAuthToken:(id)a0 error:(id *)a1;
- (id)copyEmergencyModeWithError:(id *)a0;
- (void)selectNetwork:(id)a0 network:(id)a1 completion:(id /* block */)a2;
- (id)getEmergencyTextNumbers:(id)a0 error:(id *)a1;
- (void)setLocalPolicies:(id)a0 completion:(id /* block */)a1;
- (id)getDataStatus:(id)a0 error:(id *)a1;
- (id)getBasebandRadioFrequencyFrontEndScanData:(id *)a0;
- (void)evaluateMobileSubscriberIdentity:(id)a0 identity:(id)a1 completion:(id /* block */)a2;
- (void)copyNetworkSelectionState:(id)a0 completion:(id /* block */)a1;
- (void)fetchConnectedLineIdRestrictionValue:(id)a0 completion:(id /* block */)a1;
- (id)getSupports5G:(id)a0 error:(id *)a1;
- (void)getSIMTrayStatus:(id /* block */)a0;
- (id)cachedValueForSelector:(SEL)a0;
- (void)deleteZone:(id)a0 completion:(id /* block */)a1;
- (void)getSmsReadyState:(id)a0 completion:(id /* block */)a1;
- (void)getUIConfiguredApns:(id)a0 completion:(id /* block */)a1;
- (void)copyOperatorName:(id)a0 completion:(id /* block */)a1;
- (id)deletePersonalWallet:(id)a0;
- (void)isTetheringEditingSupported:(id)a0 completion:(id /* block */)a1;
- (void)saveCallForwardingValue:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)copyLocalizedOperatorName:(id)a0 completion:(id /* block */)a1;
- (void)getInternationalDataAccessStatus:(id /* block */)a0;
- (id)context:(id)a0 removePhoneServicesDevice:(id)a1;
- (void)getVoiceLinkQualityMetric:(id)a0 completion:(id /* block */)a1;
- (id)context:(id)a0 getPhoneNumberSignature:(id *)a1;
- (id)getSmscAddress:(id)a0 error:(id *)a1;
- (id)getRemainingPUKAttemptCount:(id)a0 error:(id *)a1;
- (void)setUIConfiguredApns:(id)a0 apns:(id)a1 completion:(id /* block */)a2;
- (void)copyMobileSubscriberCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)copyMobileSubscriberIdentity:(id)a0 error:(id *)a1;
- (void)setSupportDynamicDataSimSwitch:(BOOL)a0 forIccid:(id)a1 completion:(id /* block */)a2;
- (id)setVisualVoicemailState:(id)a0 subscribed:(BOOL)a1;
- (void)getPreferredDataServiceDescriptor:(id /* block */)a0;
- (void)saveCallWaitingValue:(id)a0 callClass:(int)a1 enabled:(BOOL)a2 completion:(id /* block */)a3;

@end
