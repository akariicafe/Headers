@class NSDictionary, HMDWiFiManagementController, HMDDoorbellChimeController, NSMutableSet, NSMutableArray, HMDCameraProfileSettingsManager, HMCameraUserNotificationSettings, HMDDataStreamController, HMDAnalyticsHAPServiceData, HMDMediaProfile, HMDUser, HMDAccessoryAdvertisement, NSData, HMDAccessoryFirmwareUpdateProfile, HMFPairingIdentity, HMDAccessoryDiagnosticsManager, NSNumber, HMFConnectivityInfo, HMDNetworkRouterSatelliteProfile, HMDSiriEndpointProfile, HMDTargetControllerManager, NSArray, HMDAccessorySymptomHandler, NSMutableDictionary, NSString, HMDLowPowerModeProfile, HMDSiriEndpointProfileMetricsDispatcher, HMDNetworkRouterProfile, HMSupportedAccessoryDiagnostics, HMDPendingCharacteristic, HMFTimer, HMDNetworkRouterController, HMDService, HMDHAPMetadata, NSSet, NSDate;
@protocol HMDMessageRouter, HMDDataStreamSocketController;

@interface HMDHAPAccessory : HMDAccessory <HMDSiriEndpointProfileMetricsDispatcherDataSource, HMDSiriEndpointProfileMetricsDispatcherFactory, HMDAccessoryMinimumUserPrivilegeCapable, HMDServiceOwner, HAPRelayAccessoryDelegate, HMFTimerDelegate, HAPAccessoryServerNotification, HMDAccessoryUserManagement> {
    NSMutableArray *_transportInformationInstances;
    NSMutableArray *_services;
    BOOL _supportsTargetController;
}

@property (class, readonly) double chipPairingModeActiveDuration;

@property (readonly) HMDWiFiManagementController *wiFiManagementController;
@property (readonly) HMDAccessoryFirmwareUpdateProfile *firmwareUpdateProfile;
@property (readonly, getter=isAutomaticThirdPartyAccessorySoftwareUpdateEnabled) BOOL automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (readonly) unsigned long long identityType;
@property (readonly) BOOL isAppleAccessory;
@property (readonly) BOOL hasResidentWithFirmwareUpdatesSupport;
@property (readonly, nonatomic) HMDAccessoryDiagnosticsManager *diagnosticsManager;
@property (readonly, nonatomic) HMDNetworkRouterController *networkRouterController;
@property (readonly, nonatomic) HMDNetworkRouterProfile *networkRouterProfile;
@property (readonly, nonatomic) HMDNetworkRouterSatelliteProfile *networkRouterSatelliteProfile;
@property (readonly, copy) NSData *nfcReaderIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly) HMDSiriEndpointProfile *siriEndpointProfile;
@property (readonly, nonatomic) BOOL isCertifiedForSiriEndpoint;
@property (readonly, nonatomic) BOOL supportsSiriEndpoint;
@property (readonly) BOOL hasSiriEndpointService;
@property (readonly) BOOL hasSiriSettingsService;
@property (readonly) BOOL supportsSiriEndpointOnBoarding;
@property (readonly) NSSet *lightProfiles;
@property (readonly, copy) HMCameraUserNotificationSettings *cameraProfileNotificationSettings;
@property (readonly, getter=isCameraRecordingFeatureSupported) BOOL supportsCameraRecordingFeature;
@property (readonly, nonatomic) BOOL supportsSiri;
@property (readonly) BOOL hasTelevisionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned short threadCapabilities;
@property (readonly, nonatomic) unsigned short threadStatus;
@property (readonly, nonatomic, getter=isThreadTheCurrentlyActiveTransport) BOOL threadActiveTransport;
@property (readonly, nonatomic) unsigned short metric_threadCapabilities;
@property (readonly) HMDMediaProfile *mediaProfile;
@property (readonly) BOOL hasSmartSpeakerService;
@property (readonly) id<HMDDataStreamSocketController> dataStreamSocketController;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) BOOL supportsRelay;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (nonatomic) unsigned long long activationAttempts;
@property (nonatomic) unsigned long long pairingAttempts;
@property (copy, nonatomic) NSNumber *accessoryFlags;
@property (nonatomic) long long certificationStatus;
@property (copy, nonatomic) NSNumber *backedOffStateNumber;
@property (retain, nonatomic) HMFTimer *accessoryDiscoveryBackoffTimer;
@property (retain, nonatomic) HMFTimer *accessoryKeyRefreshTimer;
@property (copy, nonatomic) NSData *broadcastKey;
@property (copy, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (copy, nonatomic) NSDate *keyUpdatedTime;
@property unsigned char keyGenerationType;
@property BOOL keyGenerationInProgress;
@property (copy, nonatomic) NSSet *identifiersForBridgedAccessories;
@property (retain, nonatomic) HMDAccessoryAdvertisement *accessoryAdvertisement;
@property (copy) NSNumber *hasOnboardedForNaturalLighting;
@property long long communicationProtocol;
@property unsigned long long siriEndpointCapabilities;
@property (retain, nonatomic) NSMutableSet *activeSessionRestoreClients;
@property (retain, nonatomic) HMFTimer *sessionRestoreTimer;
@property (nonatomic) double lastLinkChangeSessionCheckTime;
@property (nonatomic) unsigned long long lastSessionStatus;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (nonatomic) BOOL hardwareSupport;
@property (retain, nonatomic) HMDTargetControllerManager *targetControllerManager;
@property (retain, nonatomic) HMDAccessorySymptomHandler *symptomsHandler;
@property (copy, nonatomic) NSNumber *sleepInterval;
@property BOOL supportsAccessCode;
@property BOOL supportsWalletKey;
@property (readonly) HMDHAPMetadata *hapMetadata;
@property (retain) HMDSiriEndpointProfileMetricsDispatcher *siriEndpointProfileMetricsDispatcher;
@property (readonly, nonatomic) NSNumber *internalEnhancedAuthConfigNumber;
@property (readonly, nonatomic) NSNumber *internalEnhancedAuthMethod;
@property (retain, nonatomic) HMDUser *cachedRemovedUser;
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (retain, nonatomic) HMDHAPAccessory *bridge;
@property (retain, nonatomic) NSMutableArray *discoveredServices;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSString *pairingUsername;
@property (retain, nonatomic) NSString *relayIdentifier;
@property (retain, nonatomic) HMDDataStreamController *dataStreamController;
@property (retain, nonatomic) HMDNetworkRouterController *networkRouterController;
@property (copy, nonatomic) NSData *setupHash;
@property (copy, nonatomic) NSNumber *wiFiTransportCapabilities;
@property (retain, nonatomic) HMDWiFiManagementController *wiFiManagementController;
@property (retain, nonatomic) HMDPendingCharacteristic *pendingPowerOn;
@property (retain, nonatomic) HMDAccessoryDiagnosticsManager *diagnosticsManager;
@property (readonly) id<HMDMessageRouter> primaryResidentMessageRouter;
@property (retain, nonatomic) HMDDoorbellChimeController *doorbellChimeController;
@property (nonatomic, getter=isRelayEnabled) BOOL relayEnabled;
@property (readonly, nonatomic) unsigned long long currentRelayAccessoryState;
@property (retain, nonatomic) NSMutableArray *powerOnCompletionRoutines;
@property (retain) NSMutableArray *pendingReads;
@property (retain, nonatomic) HMDAccessoryFirmwareUpdateProfile *firmwareUpdateProfile;
@property (copy, nonatomic) HMCameraUserNotificationSettings *cameraProfileNotificationSettings;
@property (nonatomic) unsigned long long suspendedState;
@property (nonatomic, getter=isReachableViaBSP) BOOL reachableViaBSP;
@property (readonly, nonatomic) HMDLowPowerModeProfile *lpmProfile;
@property (copy, nonatomic) NSNumber *wakingViaCharacteristicWithIID;
@property (retain, nonatomic) NSNumber *needsOnboarding;
@property BOOL hasSiriEndpointService;
@property (readonly, nonatomic) HMSupportedAccessoryDiagnostics *supportedDiagnostics;
@property (readonly, nonatomic) BOOL supportsThreadCommissioning;
@property (retain, nonatomic) NSNumber *internalThreadCapabilities;
@property (retain, nonatomic) NSNumber *internalThreadStatus;
@property (retain, nonatomic) NSNumber *internalThreadActive;
@property (readonly, nonatomic) unsigned long long enhancedAuthMethod;
@property (readonly, copy) NSArray *services;
@property (readonly, nonatomic) NSSet *serviceTypeUUIDs;
@property (readonly, nonatomic) NSSet *initialServiceTypeUUIDs;
@property (readonly, nonatomic) HMDService *primaryService;
@property (readonly, getter=isClientRegisteredForNotifications) BOOL clientRegisteredForNotifications;
@property (readonly, copy, nonatomic) NSNumber *hapInstanceId;
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (readonly, nonatomic) HMDCameraProfileSettingsManager *cameraProfileSettingsManager;
@property (readonly, copy, nonatomic) NSSet *cameraProfiles;
@property (readonly) BOOL hasCameraStreamService;
@property BOOL shouldDisconnectOnIdle;
@property (readonly) BOOL shouldAutoDiscoverAccessoryServer;
@property (readonly) BOOL supportsCHIP;
@property (retain) NSMutableDictionary *accessCodeCache;
@property (nonatomic) BOOL hasPostedBulletinForAccessCodeOnboarding;
@property (nonatomic) BOOL hasPostedBulletinForWalletKeyOnboarding;
@property (readonly, copy, nonatomic) HMDAnalyticsHAPServiceData *primaryHAPServiceForAnalytics;
@property (readonly, copy, nonatomic) NSArray *hapServicesListForAnalytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) BOOL supportsUserManagement;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;

+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;
+ (Class)transactionClass;
+ (unsigned long long)getAWDTransportTypeWithLinkType:(long long)a0;

- (id)dumpState;
- (void)stopScan;
- (BOOL)isSuspended;
- (void)timerDidFire:(id)a0;
- (BOOL)hasBattery;
- (void)indicateNotificationFromServer:(id)a0 notifyType:(unsigned long long)a1 withDictionary:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void)startPing;
- (BOOL)isNotificationEnabled;
- (void)updateActiveDisconnectOnIdleTimeout:(double)a0;
- (BOOL)supportsMultiUser;
- (BOOL)isPrimary;
- (void)reachabilityDidChange:(id)a0;
- (void)requestResource:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)removeSession:(long long)a0;
- (id)name;
- (void)addSession:(long long)a0;
- (void)removeTarget:(id)a0;
- (void)dealloc;
- (unsigned long long)supportedTransports;
- (id)endpointIdentifier;
- (void)stopPing;
- (void)_updateReachability;
- (void)unconfigure;
- (void)_handleStartUpdate:(id)a0;
- (void)_registerForMessages;
- (BOOL)supportsWiFiReconfiguration;
- (void)removeUser:(id)a0 completionHandler:(id /* block */)a1;
- (long long)reachableTransports;
- (BOOL)supportsTargetController;
- (BOOL)supportsMusicAlarm;
- (BOOL)supportsDiagnosticsTransfer;
- (BOOL)supportsAnnounce;
- (BOOL)supportsPreferredMediaUser;
- (BOOL)supportsDoorbellChime;
- (BOOL)supportsUserMediaSettings;
- (BOOL)supportsIdentify;
- (BOOL)_supportsMediaAccessControl;
- (void)_notifyClientsOfTargetControlSupportUpdate;
- (void)_handleUpdateAssociatedServiceType:(id)a0;
- (id)messageReceiverChildren;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)backingStoreObjects:(long long)a0;
- (void)handleResidentDeviceUpdated:(id)a0;
- (void)deregisterFromSessionRestore:(id)a0;
- (void)registerForSessionRestore:(id)a0;
- (id)preferredHAPAccessoryForOperation:(long long)a0 linkType:(long long *)a1;
- (BOOL)isSecuritySessionOpen;
- (void)handleHomeUserRemovedNotification:(id)a0;
- (BOOL)wasUpdatedWithServiceType:(id)a0;
- (id)findCharacteristicType:(id)a0 forServiceType:(id)a1;
- (BOOL)_handleUpdatedServicesForWiFiManagementController;
- (id)findServiceWithServiceType:(id)a0;
- (void)removeAllCHIPPairingsWithCompletion:(id /* block */)a0;
- (void)configureBulletinNotification;
- (void)_removeService:(id)a0;
- (void)_retrieveStateForTrackedAccessory:(id)a0 withCompletion:(id /* block */)a1;
- (id)serviceWithSPIClientIdentfier:(id)a0;
- (void)_wol_processReadWriteResponseForCharacteristic:(id)a0 isRead:(BOOL)a1 error:(id)a2;
- (BOOL)canWakeUpViaWoL;
- (id)messageSendPolicy;
- (void)updateNotificationEnabled:(BOOL)a0 forCharacteristics:(id)a1 onBehalfOf:(id)a2;
- (void)enableNotification:(BOOL)a0 forCharacteristics:(id)a1 message:(id)a2 clientIdentifier:(id)a3;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (void)unconfigureAccessoryWithServerIdentifier:(id)a0 linkType:(long long)a1 updateReachability:(BOOL)a2;
- (void)autoConfigureTargetController;
- (void)handleUpdatedServicesForThreadManagementWithCompletion:(id /* block */)a0;
- (void)maybeCommissionToThreadNetwork:(id)a0 completion:(id /* block */)a1;
- (void)updateLightProfilesSettings;
- (void)configureWithAccessory:(id)a0 homeNotificationsEnabled:(BOOL)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)findCharacteristic:(id)a0;
- (id)findService:(id)a0;
- (BOOL)matchesHAPAccessoryWithServerIdentifier:(id)a0 instanceID:(id)a1;
- (BOOL)matchesHAPAccessory:(id)a0;
- (BOOL)hasBTLELink;
- (void)setReachability:(BOOL)a0 serverIdentifier:(id)a1 linkType:(long long)a2;
- (void)notifyingCharacteristicStateNumberUpdated:(id)a0;
- (id)hmdCharacteristicForInstanceId:(id)a0;
- (void)_forceEnableReachabilityPingForPrimaryResident:(id)a0;
- (void)_wol_processDidRemoveHPAccessoryServer:(id)a0;
- (void)backOffAccessoryForStateNumber:(id)a0 backoffPeriod:(double)a1;
- (id)lpmProfile;
- (BOOL)shouldDiscoverSuspendCapableAccessoryServer:(id)a0;
- (void)removeAdvertisement:(id)a0;
- (void)addAdvertisement:(id)a0;
- (id)matchingHAPAccessoryServerIdentifierWithLinkType:(long long)a0;
- (BOOL)supportsMinimumUserPrivilege;
- (void)handleUpdatedMinimumUserPrivilege:(long long)a0;
- (void)handleUpdatedPassword:(id)a0;
- (id)characteristicsPassingTest:(id /* block */)a0;
- (void)enableNotification:(BOOL)a0 forCharacteristicIDs:(id)a1 message:(id)a2 clientIdentifier:(id)a3;
- (long long)linkSpeed;
- (void)readCharacteristicValues:(id)a0 source:(unsigned long long)a1 message:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
- (id)findCharacteristic:(id)a0 forService:(id)a1;
- (void)handleMultipleCharacteristicsUpdated:(id)a0 message:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeCharacteristicValues:(id)a0 source:(unsigned long long)a1 message:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
- (id)matchingTransportInformationWithServerIdentifier:(id)a0 linkType:(long long)a1;
- (void)updateTrackedAccessoryStateNumber:(id)a0;
- (void)commissionToThreadNetwork:(id)a0 pairingEvent:(id)a1 completion:(id /* block */)a2;
- (void)readInitialRequiredCharacteristicsForAccessory:(id /* block */)a0;
- (id)matchingHAPAccessoryWithLinkType:(long long)a0;
- (void)setSuspendedState:(unsigned long long)a0 shouldNotify:(BOOL)a1;
- (id)serviceWithUUID:(id)a0;
- (id)getConfiguredName;
- (id)getPrimaryHAPAccessories;
- (void)removeBridgedAccessory:(id)a0;
- (void)addUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)pairingsWithCompletionHandler:(id /* block */)a0;
- (void)configureWithHome:(id)a0 msgDispatcher:(id)a1 configurationTracker:(id)a2 initialConfiguration:(BOOL)a3;
- (id)initWithTransaction:(id)a0 home:(id)a1;
- (void)enableNotificationsWithHAPAccessory:(id)a0 homeNotificationsEnabled:(BOOL)a1;
- (BOOL)matchesHAPAccessoryWithServerIdentifier:(id)a0 linkType:(long long *)a1;
- (void)savePublicKeyToKeychain;
- (BOOL)isNonClientNotificationEnabled;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)a0 linkType:(long long)a1;
- (BOOL)shouldEnableDaemonRelaunch;
- (id)retrieveUpdatedTransportInfoArray:(id)a0;
- (id)namesOfServicesShowingTilesInHomeApp;
- (id)runtimeState;
- (BOOL)isCameraMotionDetectedCharacteristic:(id)a0;
- (void)handleRemoteGatewayNotificationRegistration:(id)a0 enable:(BOOL)a1 enableTime:(id)a2;
- (void)disableNotificationsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isBLELinkConnected;
- (id)anyIPServer;
- (void)writeCharacteristicValues:(id)a0 source:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)readCharacteristicValues:(id)a0 source:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)findCharacteristicsByType:(id)a0 forServiceType:(id)a1;
- (void)_startUpdateSessionWithRequest:(id)a0;
- (void)_evaluateAvailableSoftwareUpdate;
- (BOOL)_handleUpdatedServicesForFirmwareUpdateProfile:(id)a0;
- (void)_handleChangeUpdateSource:(id)a0;
- (void)_handleRemoveStagedSoftwareUpdate:(id)a0;
- (id)firmwareUpdateManager;
- (BOOL)supportsFirmwareUpdate;
- (void)_startManualUpdateFromBestSuitableDevice:(id)a0;
- (void)_startUpdateFromCurrentDeviceWithRequest:(id)a0;
- (void)enableNotification:(BOOL)a0 ignoreDeviceUnlockRequirement:(BOOL)a1 clientIdentifier:(id)a2 forCharacteristics:(id)a3;
- (BOOL)supportsNetworkProtection;
- (id)transportReports;
- (void)openBulkSendSessionForFileType:(id)a0 reason:(id)a1 metadata:(id)a2 queue:(id)a3 callback:(id /* block */)a4;
- (void)addDataStreamBulkSendListener:(id)a0 fileType:(id)a1;
- (void)removeDataStreamBulkSendListener:(id)a0;
- (void)updateHasPostedBulletinForWalletKeyOnboarding:(BOOL)a0;
- (BOOL)canWakeBasedOnCharacteristicRequests:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)powerOnComplete:(id)a0;
- (BOOL)supportsPersonalRequests;
- (void)runTransactionWithPreferredMediaUserUUID:(id)a0 selectionType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)populateModelObject:(id)a0 version:(long long)a1;
- (void)_handleUpdatedName:(id)a0;
- (void)_renameAccessory:(id)a0 resetName:(BOOL)a1 message:(id)a2;
- (void)_configNumberUpdated;
- (id)dumpSimpleState;
- (void)handleIdentifyAccessoryMessage:(id)a0;
- (BOOL)_shouldFilterAccessoryProfile:(id)a0;
- (BOOL)providesHashRouteID;
- (BOOL)supportsSoftwareUpdate;
- (void)startReachabilityCheck;
- (void)stopReachabilityCheck;
- (BOOL)supportsUnreachablePing;
- (BOOL)isBLESecureSessionEstablished;
- (BOOL)isIPSecureSessionEstablished;
- (BOOL)isSecureSessionEstablished;
- (void)updatePrimaryServiceIfNeeded;
- (id)_createDiagnosticsManager:(id)a0;
- (BOOL)_handleUpdatedServicesForDiagnosticsManager:(id)a0;
- (void)_destroyDiagnosticsManager;
- (BOOL)canAcceptBulkSendListeners;
- (void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)a0;
- (id)primaryIPServer;
- (void)_stopScan;
- (void)scanningCompleteWithAccessoryFound:(BOOL)a0 suspended:(BOOL)a1;
- (void)initializeBTLEScan;
- (void)initiateScan:(id /* block */)a0;
- (BOOL)supportsThreadCommissioning;
- (unsigned long long)_currentRelayAccessoryState;
- (void)accessory:(id)a0 didUpdateAccessoryIdentifier:(id)a1;
- (void)accessory:(id)a0 didUpdateAccessoryAccessToken:(id)a1;
- (void)accessory:(id)a0 didUpdateRelayEnabled:(BOOL)a1;
- (void)accessory:(id)a0 didUpdateRelayState:(unsigned long long)a1;
- (void)accessory:(id)a0 didActivateRelayWithError:(id)a1;
- (void)accessory:(id)a0 didPairRelayWithError:(id)a1;
- (void)accessory:(id)a0 didUpdateReachabilityState:(BOOL)a1;
- (void)accessory:(id)a0 didUpdateConnectionState:(BOOL)a1;
- (void)makeServiceNameConsistent:(id)a0 withName:(id)a1 completionHandler:(id /* block */)a2;
- (id)createUpdateServiceTransationWithServiceUUID:(id)a0;
- (id)backingStoreTransactionWithName:(id)a0;
- (id)initWithHAPMetadata:(id)a0;
- (BOOL)_validateConnectivityInfo:(id)a0;
- (void)_setWakeType;
- (void)setDefaultPreferredMediaUserIfNeeded;
- (void)setDefaultPreferredMediaUser;
- (void)updateAccessoryFlags:(id)a0;
- (void)setInternalEnhancedAuthMethod:(id)a0 configNumber:(unsigned long long)a1;
- (void)testSetInternalEnhancedAuthMethod:(id)a0;
- (void)_handleUpdatedAuthMethod;
- (void)_updateBroadcastKey:(id)a0 keyUpdatedStateNumber:(id)a1 keyUpdatedTime:(double)a2;
- (void)setBroadcastKey:(id)a0 keyUpdatedStateNumber:(id)a1 keyUpdatedTime:(id)a2;
- (void)evaluateSymptomHandler;
- (void)saveHardwareSupport:(BOOL)a0;
- (void)_saveHardwareSupport:(BOOL)a0;
- (void)saveTargetUUIDs:(id)a0;
- (void)_saveTargetUUIDs:(id)a0;
- (void)updateTargetUUIDs:(id)a0;
- (void)_reconcileAccessControlSetting;
- (BOOL)_handleUpdatedServicesForAccessCodes;
- (BOOL)_handleUpdatedServicesForWalletKey;
- (BOOL)needsAirplayAccess;
- (BOOL)_serviceSupportsMinimumUserPrivilege:(id)a0;
- (void)_updateAuthMethodWithServer:(id)a0 completion:(id /* block */)a1;
- (void)_challengeAccessoryAuthMethod;
- (id)_messagesForUpdatedRoom:(id)a0;
- (void)_handleRoomChangedFromOldRoomName:(id)a0;
- (void)handleRoomNameChanged:(id)a0;
- (void)handleRoomChanged:(id)a0;
- (void)__handleCharacteristicsChangedPayload:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (BOOL)isReadingRequiredForBTLEAccessoryCharacteristic:(id)a0 forceReadFWVersion:(BOOL)a1;
- (BOOL)updateAccessoryInformationWithCharacteristicType:(id)a0 value:(id)a1 accessoryTransaction:(id)a2;
- (id)updateAccessoryFlagsAndNotifyClients:(id)a0;
- (void)handlePairedStateChange:(BOOL)a0;
- (void)setPairingUsername:(id)a0 publicKey:(id)a1;
- (BOOL)associateControllerKeyWithAccessory:(id)a0 error:(id *)a1;
- (void)verifyPairingWithCompletionHandler:(id /* block */)a0;
- (void)setInitialServiceTypeUUIDs:(id)a0;
- (void)_updatePrimaryServiceIfNeededWithService:(id)a0;
- (void)_addService:(id)a0;
- (void)_handleUpdatedServicesForProfilesAndControllers:(BOOL)a0;
- (void)_handleAddServiceTransaction:(id)a0 message:(id)a1;
- (void)_handleServiceRemovedTransaction:(id)a0 message:(id)a1;
- (void)addTarget:(id)a0 buttonConfiguration:(id)a1;
- (void)updateTarget:(id)a0 name:(id)a1 buttonConfiguration:(id)a2;
- (void)registerForActiveIdentifierNotifications;
- (id)targetControllerButtonConfiguration;
- (unsigned long long)targetControllerTicksPerSecond;
- (void)notifyClientsOfTargetControlSupportUpdate;
- (void)_setTargetControllerSession;
- (void)_configureTargetControllerWithCompletion:(id /* block */)a0;
- (void)_autoConfigureTargetController;
- (void)acknowledgeTargetControlService:(id)a0 active:(BOOL)a1;
- (void)updateButtonConfigurationForTarget:(id)a0;
- (void)addBridgedAccessory:(id)a0;
- (id)transportInformationInstances;
- (void)addTransportInformationInstance:(id)a0;
- (void)addTransportInformationInstances:(id)a0;
- (void)removeTransportInformationInstance:(id)a0;
- (void)_setSupportsRelay:(BOOL)a0;
- (void)_setRelayIdentifier:(id)a0;
- (void)_updateRelayEnabled:(BOOL)a0 notifyRelayManager:(BOOL)a1;
- (void)_setCurrentRelayAccessoryState:(unsigned long long)a0;
- (id)relayAccessory;
- (void)startRelayActivationWithActivationClient:(id)a0;
- (void)startRelayPairingWithPairingClient:(id)a0;
- (void)addRelayUser:(id)a0 accessToken:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeRelayUser:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeHAPAccessoryWithServerIdentifier:(id)a0 linkType:(long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)_removeHAPAccessoryWithServerIdentifier:(id)a0 linkType:(long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)_addHAPAccessory:(id)a0;
- (BOOL)hasIPLink;
- (id)getHAPAccessoryMatchingInstanceId;
- (id)configureService:(id)a0;
- (void)_configureWithAccessoryServices:(id)a0 changedCharacteristics:(id *)a1;
- (void)unregisterFromAccessoryServer;
- (void)cleanupNotificationCenterObservers;
- (id)matchingTransportInformation:(id)a0;
- (id)matchingTransportInformationWithServerIdentifier:(id)a0;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)a0;
- (void)performOperation:(long long)a0 linkType:(long long)a1 operationBlock:(id /* block */)a2 errorBlock:(id /* block */)a3;
- (void)_performOperation:(long long)a0 linkType:(long long)a1 operationBlock:(id /* block */)a2 errorBlock:(id /* block */)a3;
- (void)_retrieveHAPAccessoryToPerformOperation:(long long)a0 linkType:(long long)a1 operationBlock:(id /* block */)a2 errorBlock:(id /* block */)a3 activity:(id)a4;
- (void)_handleUnreachableAccessoryToPerformOperation:(long long)a0 operationBlock:(id /* block */)a1 errorBlock:(id /* block */)a2;
- (void)_wakeAccessoryIfNeededToWriteCharacteristicValues:(id)a0 activity:(id)a1 writeCharacteristicBlock:(id /* block */)a2;
- (void)_writeCharacteristicValues:(id)a0 localOperationRequired:(BOOL)a1 source:(unsigned long long)a2 queue:(id)a3 completionHandler:(id /* block */)a4 errorBlock:(id /* block */)a5;
- (void)_writeCharacteristicValues:(id)a0 localOperationRequired:(BOOL)a1 source:(unsigned long long)a2 message:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5 errorBlock:(id /* block */)a6;
- (void)writeCharacteristicValues:(id)a0 localOperationRequired:(BOOL)a1 source:(unsigned long long)a2 queue:(id)a3 completionHandler:(id /* block */)a4 errorBlock:(id /* block */)a5;
- (id)getFullError:(id)a0 source:(unsigned long long)a1 suspended:(BOOL)a2;
- (id)_updatedResponseTuplesForRequests:(id)a0 error:(id)a1 source:(unsigned long long)a2 suspended:(BOOL)a3;
- (void)_wakeAccessoryIfNeededToReadCharacteristicValues:(id)a0 activity:(id)a1 readCharacteristicBlock:(id /* block */)a2;
- (void)autoUpdateCachedCountDownCharacteristics:(id)a0;
- (void)_readCharacteristicValues:(id)a0 localOperationRequired:(BOOL)a1 source:(unsigned long long)a2 message:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5 errorBlock:(id /* block */)a6;
- (id)hmdCharacteristicFromHapCharacteristic:(id)a0;
- (BOOL)shouldConfigureTargetController;
- (id)_getSymptomHandler;
- (void)saveBluetoothAddress:(id)a0;
- (id)getBluetoothAddress;
- (void)_handleHomeUserRemovedNotification:(id)a0;
- (void)routeUpdatePreferredMediaUser:(id)a0;
- (void)handleUpdatePreferredMediaUser:(id)a0;
- (void)notifyValue:(id)a0 previousValue:(id)a1 error:(id)a2 forCharacteristic:(id)a3 requestMessage:(id)a4;
- (id)hapCharacteristicWriteRequests:(id)a0 hapAccessory:(id)a1 hmdResponses:(id *)a2 mapping:(id *)a3;
- (void)populateHMDCharacteristicResponses:(id)a0 hapResponses:(id)a1 mapping:(id)a2 overallError:(id)a3 requests:(id)a4;
- (void)_writeCharacteristicValues:(id)a0 hapAccessory:(id)a1 source:(unsigned long long)a2 message:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (void)_readCharacteristicValues:(id)a0 hapAccessory:(id)a1 source:(unsigned long long)a2 message:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (void)_writeValue:(id)a0 forCharacteristic:(id)a1 hapAccessory:(id)a2 authorizationData:(id)a3 message:(id)a4;
- (id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)a0;
- (BOOL)_handleCharacteristicError:(id)a0 read:(BOOL)a1 characteristic:(id)a2 didRelayMessage:(id)a3;
- (void)submitCharacteristicWriteErrorLogEvent:(id)a0 startDate:(id)a1 message:(id)a2 error:(id)a3;
- (void)_relayWriteToCharacteristic:(id)a0 toResidentForMessage:(id)a1 viaDevice:(id)a2;
- (void)_relayReadFromCharacteristic:(id)a0 toResidentForMessage:(id)a1 viaDevice:(id)a2;
- (void)_parseResponseFromRemotePeer:(id)a0 message:(id)a1 error:(id)a2 characteristic:(id)a3;
- (void)submitCharacteristicReadErrorLogEvent:(id)a0 message:(id)a1 error:(id)a2;
- (void)_readValueForCharacteristic:(id)a0 hapAccessory:(id)a1 requestMessage:(id)a2;
- (void)resetNotificationEnabledTime;
- (void)_notifyCharacteristicNotificationChanges:(id)a0 enableNotification:(BOOL)a1 message:(id)a2 clientIdentifier:(id)a3;
- (void)_notifyNotificationChangesForCharacteristics:(id)a0 errors:(id)a1 enableNotification:(BOOL)a2 message:(id)a3;
- (void)_disableNotificationsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_enableNotification:(BOOL)a0 matchingHAPAccessory:(id)a1 ignoreDeviceUnlockRequirement:(BOOL)a2 clientIdentifier:(id)a3 forCharacteristics:(id)a4;
- (void)_enableNotification:(BOOL)a0 forCharacteristics:(id)a1 message:(id)a2 clientIdentifier:(id)a3;
- (BOOL)_enableNotificationOnResident:(BOOL)a0 characteristic:(id)a1 clientIdentifier:(id)a2 ignoreDeviceUnlockRequirement:(BOOL)a3;
- (void)_setNotificationsEnabled:(BOOL)a0 forCharacteristics:(id)a1 hapAccessory:(id)a2 activity:(id)a3 completion:(id /* block */)a4;
- (void)_enableBroadcastNotifications:(BOOL)a0 hapAccessory:(id)a1 forCharacteristics:(id)a2;
- (void)_checkResidentDeviceForReachabilityPing;
- (void)_checkSessionRestore;
- (void)_doPrimaryResidentUpdated;
- (double)_getDurationAndUpdateCurrentTime:(id)a0 currentTime:(id *)a1;
- (void)_logServerReachabilityNotification:(BOOL)a0 withDuration:(id)a1 withLinkType:(id)a2;
- (void)_logServerReachabilityNotification:(id)a0;
- (void)reachabilityDidChangeUnreachable:(id)a0;
- (void)notifyClientsOfUpdatedAccessoryControllableValue;
- (void)_reenableNotificationsOnWatch;
- (void)_updateAccessoryTracking;
- (BOOL)_shouldTrackAccessoryWithPriority:(BOOL *)a0;
- (BOOL)_containsSecureCharacteristic;
- (void)getLinkQualityWithCompletion:(id /* block */)a0;
- (void)_updateStateForTrackedAccessory:(id)a0 stateNumber:(id)a1;
- (void)_evaluateLocalOperation:(long long)a0 state:(id)a1 completion:(id /* block */)a2;
- (id)findCharacteristicsByTypes:(id)a0 forServiceType:(id)a1;
- (void)_checkRegisterForServerNotification;
- (void)_doReachabilityUpdateForServer:(id)a0;
- (void)_submitStateNumberChangeMetric;
- (void)_submitReachabilityDelayedMetric:(id)a0;
- (void)_renameService:(id)a0 name:(id)a1 message:(id)a2 completionBlock:(id /* block */)a3;
- (void)_handleRenameService:(id)a0;
- (void)_handleUpdateAuthorizationData:(id)a0;
- (void)_handleDiscoveryBackoffTimerFired;
- (void)_removeBackedoffAccessoryForStateNumber:(id)a0;
- (void)_handleKeyRefreshTimerFired;
- (void)_handleConfigureTargets:(id)a0;
- (void)associateWithAccessoryAdvertisement:(id)a0;
- (void)_updateReachabilityMetric:(BOOL)a0 withDuration:(id)a1;
- (void)_handleMultipleCharacteristicsUpdated:(id)a0 message:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)__updateNotifyingCharacteristicStateNumber:(id)a0;
- (BOOL)isNotificationEnabledForClientIdentifier:(id)a0;
- (id)getOrCreateServiceUpdateTransactionForKey:(id)a0 fromDictionary:(id)a1;
- (id)getTransportInformationArray;
- (BOOL)updateTransportInformation:(id)a0;
- (void)_updateBridge:(id)a0;
- (id)cameraClipCloudZoneUUIDForRecordingService:(id)a0;
- (void)setCommunicationProtocolIfNeeded;
- (void)handleSetHasOnboardedForNaturalLighting:(id)a0;
- (void)handleConnectedChanged:(id)a0;
- (void)_deregisterAllClientsFromSessionRestore;
- (void)_checkSession;
- (void)_checkBridgedAccessoryOnConfigured;
- (void)_notifyBridgedAccessoryReachabilityChange:(id)a0;
- (void)_stopSessionMonitor;
- (void)_startSessionMonitor;
- (void)_updateSessionRestoreOnServer:(BOOL)a0;
- (void)_handleSessionRestoreTimerFired;
- (void)_checkSessionRestoreOnLinkStateChange;
- (void)_handleValidatePairingAuthMethodMessage:(id)a0;
- (void)_handleUpdateAccessoryConnectionState:(id)a0;
- (void)_wol_runAccessoryTransaction:(id)a0 localOnly:(BOOL)a1;
- (void)writeValue:(id)a0 toCharacteristic:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)cancelPowerOn;
- (void)encodeCameraProfileNotificationSettingsWithCoder:(id)a0;
- (id)cameraProfileNotificationSettingsFromCoder:(id)a0;
- (void)wirelessResumeInit;
- (BOOL)canProceedWithRequests:(id)a0 suspended:(BOOL *)a1 error:(id *)a2;
- (void)wirelessPowerOn:(id /* block */)a0;
- (BOOL)isPoweringOn;
- (void)_wol_updateWakingViaCharacteristicForWriteResponses:(id)a0;
- (void)_wol_updateWakingViaCharacteristicForWriteRequests:(id)a0;
- (void)_wakeSuspendedHAPAccessoryToPerformOperation:(long long)a0 linkType:(long long)a1 operationBlock:(id /* block */)a2 errorBlock:(id /* block */)a3 activity:(id)a4;
- (void)_wol_ignoreWakingViaCharacteristicUpdateFromChangedService:(id)a0;
- (void)updateSuspendedStateWithConnectionState:(BOOL)a0 hapAccessory:(id)a1;
- (BOOL)_handleUpdatedServicesForLowPowerModeProfile;
- (BOOL)_handleUpdatedServicesForSiriEndpointProfile:(id)a0;
- (BOOL)_handleUpdatedServicesForDoorbellController;
- (BOOL)_handleUpdatedServicesForLightProfiles:(id)a0;
- (BOOL)_handleUpdatedServicesForMediaProfile:(id)a0;
- (BOOL)_handleUpdatedServicesForNetworkRouterProfileAndController:(id)a0;
- (BOOL)_handleUpdatedServicesForCameraProfiles:(id)a0;
- (void)_handleUpdatedServicesForDataStreamController:(id)a0;
- (void)configureSiriEndpointProfileMetricsDispatcherWithFactory:(id)a0 logEventDailyScheduler:(id)a1;
- (void)_registerForMessages_lowPowerMode;
- (void)handleActivateCHIPPairingModeAndCreateSetupPayloadStringMessage:(id)a0;
- (void)handleActivateCHIPPairingModeMessage:(id)a0;
- (void)handleRemoveCHIPPairingsMessage:(id)a0;
- (void)handleFetchCHIPPairingsMessage:(id)a0;
- (void)_handleUpdateMediaSourceDisplayOrder:(id)a0;
- (void)__createNetworkRouterController:(id)a0;
- (void)postNetworkRouterProfileNotification:(id)a0 object:(id)a1;
- (BOOL)__createNetworkRouterProfileAndController:(id)a0;
- (BOOL)__createSatelliteNetworkRouterProfile:(id)a0;
- (BOOL)__removeNetworkRouterController;
- (BOOL)bulkSendListenersRequireCharactertisticReadsSync;
- (BOOL)canAcceptBulkSendListenersSync;
- (void)profile:(id)a0 didUpdateAccessoryState:(unsigned long long)a1;
- (void)profile:(id)a0 didUpdateWoWLANInfos:(id)a1;
- (BOOL)hasAnyServiceWithTypes:(id)a0;
- (BOOL)supportsWoL;
- (void)updateCameraProfileNotificationSettings:(id)a0;
- (void)setSelectedSiriAudioConfiguration:(id)a0;
- (void)getSupportedSiriAudioConfiguration:(id /* block */)a0;
- (BOOL)shouldSubmitRoutineConfigurationEventForSiriEndpointProfileMetricsDispatcher:(id)a0;
- (id)accessoryCategoryTypeForSiriEndpointProfileMetricsDispatcher:(id)a0;
- (id)compositeSettingsControllerManagerForSiriEndpointProfileMetricsDispatcher:(id)a0;
- (id)profileFieldsForSiriEndpointProfileMetricsDispatcher:(id)a0;
- (long long)computeSiriEndpointCertification;
- (void)_checkForSiriEndpointServiceChange;
- (void)updateBridgedAccessoryLightProfilesSettings;
- (void)updateSuspendedStateWithWakeNumber:(id)a0 hapAccessory:(id)a1;
- (BOOL)_resolveSupportedSiriInputType:(id)a0;
- (BOOL)_resolveAudioAbility:(id)a0;
- (void)_updateSiriAudioFormat:(id)a0;
- (id)createSiriEndpointProfileMetricsDispatcherWithAccessoryUUID:(id)a0 homeUUID:(id)a1 logEventSubmitter:(id)a2;
- (BOOL)_validateCurrentThreadCredentials:(id)a0 metadata:(id)a1;
- (void)_writeCredentialsForThreadNetwork:(id)a0 activity:(id)a1 pairingEvent:(id)a2 metadata:(id)a3 threadControlPointCharacteristic:(id)a4 completion:(id /* block */)a5;
- (void)_writeThreadControlPointCharacteristic:(id)a0 value:(id)a1 activity:(id)a2 completion:(id /* block */)a3;
- (void)_commissionToThreadNetwork:(id)a0 activity:(id)a1 pairingEvent:(id)a2 completion:(id /* block */)a3;
- (void)_handleUpdatedServicesForThreadManagementWithActivity:(id)a0;
- (void)_maybeCommissionToThreadNetwork:(id)a0 activity:(id)a1 completion:(id /* block */)a2;
- (id)_findThreadControlPointCharacteristicWithError:(id *)a0;
- (void)_handleFetchCHIPPairingsMessage:(id)a0;
- (void)_handleRemoveCHIPPairingsMessage:(id)a0;
- (void)_handleActivateCHIPPairingModeMessage:(id)a0;
- (void)_handleActivateCHIPPairingModeAndCreateSetupPayloadStringMessage:(id)a0;
- (id)chipAccessoryServer;
- (BOOL)canReturnCachedValueForCharacteristic:(id)a0;
- (void)_handleWakeSuspendedAccessoryMessage:(id)a0;
- (BOOL)_validateIncomingMessage:(id)a0;
- (void)_wol_updateSuspendCapableHAPAccessoryServer:(id)a0;
- (void)_wirelessPowerOn:(id /* block */)a0;
- (void)_cancelPowerOn;

@end
