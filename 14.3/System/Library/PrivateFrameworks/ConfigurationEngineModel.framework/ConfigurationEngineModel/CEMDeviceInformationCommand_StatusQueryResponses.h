@class CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings, NSSet, NSString, NSArray, NSDate, NSNumber, CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo;

@interface CEMDeviceInformationCommand_StatusQueryResponses : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusUDID;
@property (copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *statusOrganizationInfo;
@property (copy, nonatomic) NSString *statusMDMOptions;
@property (copy, nonatomic) NSDate *statusLastCloudBackupDate;
@property (copy, nonatomic) NSNumber *statusAwaitingConfiguration;
@property (copy, nonatomic) NSNumber *statusITunesStoreAccountIsActive;
@property (copy, nonatomic) NSString *statusITunesStoreAccountHash;
@property (copy, nonatomic) NSString *statusDeviceName;
@property (copy, nonatomic) NSString *statusOSVersion;
@property (copy, nonatomic) NSString *statusBuildVersion;
@property (copy, nonatomic) NSString *statusModelName;
@property (copy, nonatomic) NSString *statusModel;
@property (copy, nonatomic) NSString *statusProductName;
@property (copy, nonatomic) NSString *statusMarketingName;
@property (copy, nonatomic) NSString *statusSerialNumber;
@property (copy, nonatomic) NSNumber *statusDeviceCapacity;
@property (copy, nonatomic) NSNumber *statusAvailableDeviceCapacity;
@property (copy, nonatomic) NSString *statusIMEI;
@property (copy, nonatomic) NSString *statusMEID;
@property (copy, nonatomic) NSString *statusModemFirmwareVersion;
@property (copy, nonatomic) NSNumber *statusCellularTechnology;
@property (copy, nonatomic) NSNumber *statusBatteryLevel;
@property (copy, nonatomic) NSNumber *statusIsSupervised;
@property (copy, nonatomic) NSNumber *statusIsMultiUser;
@property (copy, nonatomic) NSNumber *statusIsDeviceLocatorServiceEnabled;
@property (copy, nonatomic) NSNumber *statusIsActivationLockEnabled;
@property (copy, nonatomic) NSNumber *statusIsDoNotDisturbInEffect;
@property (copy, nonatomic) NSString *statusDeviceID;
@property (copy, nonatomic) NSString *statusEASDeviceIdentifier;
@property (copy, nonatomic) NSNumber *statusIsCloudBackupEnabled;
@property (copy, nonatomic) NSArray *statusActiveManagedUsers;
@property (copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *statusOSUpdateSettings;
@property (copy, nonatomic) NSArray *statusAutoSetupAdminAccounts;
@property (copy, nonatomic) NSNumber *statusSystemIntegrityProtectionEnabled;
@property (copy, nonatomic) NSNumber *statusIsMDMLostModeEnabled;
@property (copy, nonatomic) NSNumber *statusMaximumResidentUsers;
@property (copy, nonatomic) NSString *statusPushToken;
@property (copy, nonatomic) NSNumber *statusDiagnosticSubmissionEnabled;
@property (copy, nonatomic) NSNumber *statusAppAnalyticsEnabled;
@property (copy, nonatomic) NSString *statusICCID;
@property (copy, nonatomic) NSString *statusBluetoothMAC;
@property (copy, nonatomic) NSString *statusWiFiMAC;
@property (copy, nonatomic) NSArray *statusEthernetMACs;
@property (copy, nonatomic) NSString *statusCurrentCarrierNetwork;
@property (copy, nonatomic) NSString *statusSIMCarrierNetwork;
@property (copy, nonatomic) NSString *statusSubscriberCarrierNetwork;
@property (copy, nonatomic) NSString *statusCarrierSettingsVersion;
@property (copy, nonatomic) NSString *statusPhoneNumber;
@property (copy, nonatomic) NSNumber *statusDataRoamingEnabled;
@property (copy, nonatomic) NSNumber *statusVoiceRoamingEnabled;
@property (copy, nonatomic) NSNumber *statusPersonalHotspotEnabled;
@property (copy, nonatomic) NSNumber *statusIsNetworkTethered;
@property (copy, nonatomic) NSNumber *statusIsRoaming;
@property (copy, nonatomic) NSString *statusSIMMCC;
@property (copy, nonatomic) NSString *statusSIMMNC;
@property (copy, nonatomic) NSString *statusSubscriberMCC;
@property (copy, nonatomic) NSString *statusSubscriberMNC;
@property (copy, nonatomic) NSString *statusCurrentMCC;
@property (copy, nonatomic) NSString *statusCurrentMNC;

+ (id)buildRequiredOnly;
+ (id)buildWithUDID:(id)a0 withOrganizationInfo:(id)a1 withMDMOptions:(id)a2 withLastCloudBackupDate:(id)a3 withAwaitingConfiguration:(id)a4 withITunesStoreAccountIsActive:(id)a5 withITunesStoreAccountHash:(id)a6 withDeviceName:(id)a7 withOSVersion:(id)a8 withBuildVersion:(id)a9 withModelName:(id)a10 withModel:(id)a11 withProductName:(id)a12 withMarketingName:(id)a13 withSerialNumber:(id)a14 withDeviceCapacity:(id)a15 withAvailableDeviceCapacity:(id)a16 withIMEI:(id)a17 withMEID:(id)a18 withModemFirmwareVersion:(id)a19 withCellularTechnology:(id)a20 withBatteryLevel:(id)a21 withIsSupervised:(id)a22 withIsMultiUser:(id)a23 withIsDeviceLocatorServiceEnabled:(id)a24 withIsActivationLockEnabled:(id)a25 withIsDoNotDisturbInEffect:(id)a26 withDeviceID:(id)a27 withEASDeviceIdentifier:(id)a28 withIsCloudBackupEnabled:(id)a29 withActiveManagedUsers:(id)a30 withOSUpdateSettings:(id)a31 withAutoSetupAdminAccounts:(id)a32 withSystemIntegrityProtectionEnabled:(id)a33 withIsMDMLostModeEnabled:(id)a34 withMaximumResidentUsers:(id)a35 withPushToken:(id)a36 withDiagnosticSubmissionEnabled:(id)a37 withAppAnalyticsEnabled:(id)a38 withICCID:(id)a39 withBluetoothMAC:(id)a40 withWiFiMAC:(id)a41 withEthernetMACs:(id)a42 withCurrentCarrierNetwork:(id)a43 withSIMCarrierNetwork:(id)a44 withSubscriberCarrierNetwork:(id)a45 withCarrierSettingsVersion:(id)a46 withPhoneNumber:(id)a47 withDataRoamingEnabled:(id)a48 withVoiceRoamingEnabled:(id)a49 withPersonalHotspotEnabled:(id)a50 withIsNetworkTethered:(id)a51 withIsRoaming:(id)a52 withSIMMCC:(id)a53 withSIMMNC:(id)a54 withSubscriberMCC:(id)a55 withSubscriberMNC:(id)a56 withCurrentMCC:(id)a57 withCurrentMNC:(id)a58;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
