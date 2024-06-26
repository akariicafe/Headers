@class NSString, NSDictionary, NSArray, NSDate, NSNumber;

@interface DMFDevice : NSObject

@property (copy, nonatomic) NSDictionary *errorsForKeys;
@property (readonly, nonatomic) NSNumber *availableCapacity;
@property (readonly, nonatomic) NSNumber *batteryLevel;
@property (readonly, nonatomic) NSString *bluetoothAddress;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSNumber *capacity;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSNumber *deviceType;
@property (readonly, nonatomic) NSNumber *isAppleInternal;
@property (readonly, nonatomic) NSNumber *isAwaitingConfiguration;
@property (readonly, nonatomic) NSNumber *isDeviceLocatorServiceEnabled;
@property (readonly, nonatomic) NSNumber *isDoNotDisturbInEffect;
@property (readonly, nonatomic) NSNumber *isInSingleAppMode;
@property (readonly, nonatomic) NSNumber *isLostModeEnabled;
@property (readonly, nonatomic) NSString *iTunesStoreAccountHash;
@property (readonly, nonatomic) NSNumber *iTunesStoreAccountIsActive;
@property (readonly, nonatomic) NSString *marketingName;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *wifiAddress;
@property (readonly, nonatomic) NSNumber *isAppAnalyticsEnabled;
@property (readonly, nonatomic) NSNumber *isCloudBackupEnabled;
@property (readonly, nonatomic) NSNumber *isDiagnosticSubmissionEnabled;
@property (readonly, nonatomic) NSNumber *isSupervised;
@property (readonly, nonatomic) NSDate *lastCloudBackupDate;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *carrierSettingsVersion;
@property (readonly, nonatomic) NSNumber *cellularTechnology;
@property (readonly, nonatomic) NSString *currentCarrierNetwork;
@property (readonly, nonatomic) NSString *currentMCC;
@property (readonly, nonatomic) NSString *currentMNC;
@property (readonly, nonatomic) NSString *EASIdentifier;
@property (readonly, nonatomic) NSNumber *enforcedSoftwareUpdateDelay;
@property (readonly, nonatomic) NSString *ICCID;
@property (readonly, nonatomic) NSString *IMEI;
@property (readonly, nonatomic) NSNumber *isActivationLockEnabled;
@property (readonly, nonatomic) NSNumber *isDataRoamingEnabled;
@property (readonly, nonatomic) NSNumber *isEphemeralMultiUser;
@property (readonly, nonatomic) NSNumber *isNetworkTethered;
@property (readonly, nonatomic) NSNumber *isPersonalHotspotEnabled;
@property (readonly, nonatomic) NSNumber *isRoaming;
@property (readonly, nonatomic) NSNumber *isVoiceRoamingEnabled;
@property (readonly, nonatomic) NSNumber *maximumResidentUsers;
@property (readonly, nonatomic) NSString *MEID;
@property (readonly, nonatomic) NSString *modemFirmwareVersion;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSDictionary *serviceSubscriptions;
@property (readonly, nonatomic) NSArray *skippedSetupPanes;
@property (readonly, nonatomic) NSString *subscriberCarrierNetwork;
@property (readonly, nonatomic) NSString *subscriberMCC;
@property (readonly, nonatomic) NSString *subscriberMNC;
@property (readonly, nonatomic) NSArray *activeManagedUsers;
@property (readonly, nonatomic) NSArray *autoSetupAdminAccounts;
@property (readonly, nonatomic) NSString *hostName;
@property (readonly, nonatomic) NSDictionary *installedExtensions;
@property (readonly, nonatomic) NSNumber *isSystemIntegrityProtectionEnabled;
@property (readonly, nonatomic) NSString *localHostName;
@property (readonly, nonatomic) NSDictionary *osUpdateSettings;
@property (readonly, nonatomic) NSDictionary *xsanConfiguration;
@property (readonly, nonatomic) NSString *destinationIdentifier;

+ (id)propertyNameForKey:(id)a0;
+ (id)_sanitizedDeviceKey:(id)a0;

- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initPrivate;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
