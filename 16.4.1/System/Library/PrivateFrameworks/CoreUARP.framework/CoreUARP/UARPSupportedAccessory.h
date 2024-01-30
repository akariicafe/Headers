@class NSString, NSSet, NSMutableSet, UARPAccessoryHardwareID;

@interface UARPSupportedAccessory : NSObject {
    NSMutableSet *_bsdNotificationsInternal;
    NSMutableSet *_serviceBsdNotificationsInternal;
    NSMutableSet *_supplementalAssetsInternal;
    NSString *_mobileAssetAppleModelNumber;
    NSString *_supplementalMobileAssetAppleModelNumber;
    NSString *_modelName;
    NSString *_vendorName;
    BOOL _autoAppliesStagedFirmware;
}

@property (readonly) NSString *mobileAssetAppleModelNumber;
@property (readonly) NSString *supplementalMobileAssetAppleModelNumber;
@property (retain) NSString *modelName;
@property (retain) NSString *vendorName;
@property BOOL supportsPowerLogging;
@property BOOL supportsVoiceAssist;
@property BOOL supportsHeySiriCompact;
@property BOOL supportsLogs;
@property BOOL supportsAnalytics;
@property BOOL autoAppliesStagedFirmware;
@property BOOL supportsAccMode7;
@property BOOL reofferFirmwareOnSync;
@property BOOL supportsInternalSettings;
@property BOOL supportsDeveloperSettings;
@property BOOL supportsVersions;
@property BOOL allowDownloadOnCellular;
@property (retain) NSString *fusingOverrideUnfused;
@property (readonly) NSString *appleModelNumber;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (readonly) unsigned long long capabilities;
@property (readonly) UARPAccessoryHardwareID *hardwareID;
@property (readonly) NSString *identifier;
@property (readonly) NSSet *bsdNotifications;
@property (readonly) NSSet *serviceBsdNotifications;
@property (readonly) NSSet *supplementalAssets;
@property (readonly) BOOL isMFi;

+ (id)supportedAccessoriesByTransport:(long long)a0;
+ (id)findByAppleModelNumber:(id)a0;
+ (id)findByHardwareID:(id)a0;
+ (id)supportedAccessories;

- (id)initWithHIDDictionary:(id)a0;
- (id)initWithUSBPDDictionary:(id)a0;
- (id)initWithHDSDictionary:(id)a0;
- (id)initWithHardwareID:(id)a0 capabilities:(unsigned long long)a1;
- (id)initWithBluetoothDictionary:(id)a0;
- (id)generatePlist;
- (void)addSupplementalAssetName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)addBSDNotificationName:(id)a0;
- (unsigned long long)hash;
- (void)setMobileAssetAppleModelNumber:(id)a0;
- (id)initWithHardwareID:(id)a0 productGroup:(id)a1 productNumber:(id)a2 capabilities:(unsigned long long)a3;
- (id)initWithHardwareID:(id)a0 appleModelNumber:(id)a1 capabilities:(unsigned long long)a2;
- (id)init;
- (void)setSupplementalMobileAssetAppleModelNumber:(id)a0;
- (void)addServiceBSDNotificationName:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
