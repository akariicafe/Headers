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
@property (copy, nonatomic) NSNumber *supportsCompanionInitiatedRestart;
@property (copy, nonatomic) NSNumber *supportsCameraRecording;
@property (copy, nonatomic) NSNumber *supportsRouterManagement;
@property (copy, nonatomic) NSNumber *supportsShortcutActions;
@property (copy, nonatomic) NSNumber *supportsMediaActions;
@property (copy, nonatomic) NSNumber *supportsCameraSignificantEventNotifications;
@property (copy, nonatomic) NSNumber *supportsCameraActivityZones;
@property (copy, nonatomic) NSNumber *supportsMusicAlarm;
@property (copy, nonatomic) NSNumber *supportsFirmwareUpdate;
@property (copy, nonatomic) NSNumber *supportsFaceClassification;
@property (copy, nonatomic) NSNumber *supportsNaturalLighting;
@property (copy, nonatomic) NSNumber *supportsIDSActivityMonitorPresence;
@property (copy, nonatomic) NSNumber *supportsCameraRecordingReachabilityNotifications;
@property (copy, nonatomic) NSNumber *supportsAnnounce;
@property (copy, nonatomic) NSNumber *supportsThirdPartyMusic;
@property (copy, nonatomic) NSNumber *supportsPreferredMediaUser;
@property (copy, nonatomic) NSNumber *supportsThreadBorderRouter;
@property (copy, nonatomic) NSNumber *supportsDoorbellChime;
@property (copy, nonatomic) NSNumber *supportsStereoPairingV1;
@property (copy, nonatomic) NSNumber *supportsStereoPairingV2;

+ (id)properties;
+ (id)schemaHashRoot;

- (void).cxx_destruct;

@end
