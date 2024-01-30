@class NSData, NSString, NSArray, NSDate, NSSet, NSDictionary, NSObject, NSNumber;
@protocol OS_dispatch_semaphore;

@interface SASProximityInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSSet *nearbyNetworks;
@property (retain) NSObject<OS_dispatch_semaphore> *nearbyNetworksSemaphore;
@property (copy) NSArray *keyboards;
@property (copy) NSString *appleID;
@property BOOL usesSameAccountForiTunes;
@property (copy) NSArray *networks;
@property (copy) NSArray *networkPasswords;
@property (retain) NSNumber *connectedToWiFi;
@property (copy) NSDictionary *localePreferences;
@property BOOL automaticTimeZoneEnabled;
@property (copy) NSString *timeZone;
@property (retain) NSData *accessibilitySettings;
@property (copy) NSString *firstName;
@property (copy) NSString *deviceModel;
@property (copy) NSString *deviceClass;
@property BOOL hasHomeButton;
@property (getter=isRestoring) BOOL restoring;
@property (copy) NSString *deviceName;
@property (copy) NSString *backupUUID;
@property (nonatomic, getter=isBackupEnabled) BOOL backupEnabled;
@property (copy) NSDate *dateOfLastBackup;
@property (retain, nonatomic) NSNumber *supportsCellularBackup;
@property (retain) NSData *backupMetadata;
@property BOOL locationServicesOptIn;
@property (retain) NSData *locationServicesData;
@property (retain) NSNumber *findMyDeviceOptIn;
@property (retain) NSNumber *deviceAnalyticsOptIn;
@property (retain) NSNumber *appAnalyticsOptIn;
@property (retain) NSNumber *siriOptIn;
@property (retain) NSData *siriVoiceProfileAvailabilityMetadata;
@property (retain) NSNumber *deviceTermsIdentifier;
@property (retain) NSString *productVersion;
@property (retain) NSNumber *supportsDeviceToDeviceMigration;
@property (retain) NSNumber *deviceToDeviceMigrationVersion;
@property (retain) NSNumber *storageAvailable;
@property (retain) NSNumber *storageCapacity;
@property (retain) NSNumber *preventSoftwareUpdateDeviceMigration;
@property NSNumber *hasTransferrableTelephonyPlan;
@property (retain) NSNumber *hasInexpensiveCellularNetwork;
@property (retain, nonatomic) NSNumber *allowMoreOn5G;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)loadInformation;
- (BOOL)isNetworkTransferrable:(struct __WiFiNetwork { } *)a0;
- (id)_getFindMyDeviceOptIn;
- (id)numberFromMCUserBoolSetting:(id)a0;
- (void)_loadTelephonyInformation;
- (void)wirelessScanComplete:(id)a0 error:(int)a1;

@end
