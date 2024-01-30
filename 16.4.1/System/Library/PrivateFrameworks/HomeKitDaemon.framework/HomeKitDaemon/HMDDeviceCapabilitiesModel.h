@class NSNumber;

@interface HMDDeviceCapabilitiesModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *supportsKeychainSync;
@property (copy, nonatomic) NSNumber *supportsDeviceSetup;
@property (copy, nonatomic) NSNumber *supportsKeyTransferClient;
@property (copy, nonatomic) NSNumber *supportsKeyTransferServer;
@property (copy, nonatomic) NSNumber *supportsStandaloneMode;
@property (copy, nonatomic) NSNumber *supportsCloudDataSync;
@property (copy, nonatomic) NSNumber *supportsWholeHouseAudio;
@property (copy, nonatomic) NSNumber *supportsAssistantAccessControl;
@property (copy, nonatomic) NSNumber *residentCapable;
@property (copy, nonatomic) NSNumber *remoteGatewayCapable;
@property (copy, nonatomic) NSNumber *supportsHomeInvitation;
@property (copy, nonatomic) NSNumber *supportsTargetControl;
@property (copy, nonatomic) NSNumber *supportsMultiUser;
@property (copy, nonatomic) NSNumber *supportsHomeLevelLocationServiceSetting;
@property (copy, nonatomic) NSNumber *supportsCompanionInitiatedRestart;
@property (copy, nonatomic) NSNumber *supportsCameraRecording;
@property (copy, nonatomic) NSNumber *supportsRouterManagement;
@property (copy, nonatomic) NSNumber *supportsShortcutActions;
@property (copy, nonatomic) NSNumber *supportsMediaActions;
@property (copy, nonatomic) NSNumber *supportsCameraSignificantEventNotifications;
@property (copy, nonatomic) NSNumber *supportsCameraActivityZones;
@property (copy, nonatomic) NSNumber *supportsMusicAlarm;
@property (copy, nonatomic) NSNumber *supportsFirmwareUpdate;
@property (copy, nonatomic) NSNumber *supportsResidentFirmwareUpdate;
@property (copy, nonatomic) NSNumber *supportsFaceClassification;
@property (copy, nonatomic) NSNumber *supportsNaturalLighting;
@property (copy, nonatomic) NSNumber *supportsIDSActivityMonitorPresence;
@property (copy, nonatomic) NSNumber *supportsCameraRecordingReachabilityNotifications;
@property (copy, nonatomic) NSNumber *supportsAnnounce;
@property (copy, nonatomic) NSNumber *supportsAudioAnalysis;
@property (copy, nonatomic) NSNumber *supportsDropIn;
@property (copy, nonatomic) NSNumber *supportsThirdPartyMusic;
@property (copy, nonatomic) NSNumber *supportsPreferredMediaUser;
@property (copy, nonatomic) NSNumber *supportsThreadBorderRouter;
@property (copy, nonatomic) NSNumber *supportsDoorbellChime;
@property (copy, nonatomic) NSNumber *supportsUserMediaSettings;
@property (copy, nonatomic) NSNumber *supportsSiriEndpointSetup;
@property (copy, nonatomic) NSNumber *supportsHomeHub;
@property (copy, nonatomic) NSNumber *supportsWakeOnLAN;
@property (copy, nonatomic) NSNumber *supportsLockNotificationContext;
@property (copy, nonatomic) NSNumber *supportsCoordinationDoorbellChime;
@property (copy, nonatomic) NSNumber *supportsWalletKey;
@property (copy, nonatomic) NSNumber *supportsCameraPackageDetection;
@property (copy, nonatomic) NSNumber *supportsAccessCodes;
@property (copy, nonatomic) NSNumber *supportsCHIP;
@property (copy, nonatomic) NSNumber *supportsUnifiedMediaNotifications;
@property (copy, nonatomic) NSNumber *supportsManagedConfigurationProfile;
@property (copy, nonatomic) NSNumber *supportsCaptiveNetworks;
@property (copy, nonatomic) NSNumber *supportsModernTransport;
@property (copy, nonatomic) NSNumber *supportsResidentFirstAccessoryCommunication;
@property (copy, nonatomic) NSNumber *supportsMessagedHomePodSettings;
@property (copy, nonatomic) NSNumber *supportsCustomMediaApplicationDestination;
@property (copy, nonatomic) NSNumber *supportsThreadNetworkCredentialSharing;
@property (copy, nonatomic) NSNumber *supportsRMVonAppleTV;

+ (id)properties;
+ (id)schemaHashRoot;

@end
