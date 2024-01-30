@class NSString, NSSet, NSMutableSet, UARPAccessoryHardwareID;

@interface UARPSupportedAccessory : NSObject {
    NSMutableSet *_bsdNotificationsInternal;
    NSMutableSet *_serviceBsdNotificationsInternal;
    NSMutableSet *_supplementalAssetsInternal;
    NSString *_mobileAssetAppleModelNumber;
    NSString *_supplementalMobileAssetAppleModelNumber;
    NSString *_modelName;
}

@property (readonly) NSString *mobileAssetAppleModelNumber;
@property (readonly) NSString *supplementalMobileAssetAppleModelNumber;
@property (retain) NSString *modelName;
@property BOOL supportsPowerLogging;
@property BOOL supportsVoiceAssist;
@property BOOL supportsHeySiriCompact;
@property BOOL supportsLogs;
@property BOOL supportsAnalytics;
@property BOOL autoAppliesStagedFirmware;
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

+ (id)findByAppleModelNumber:(id)a0;
+ (id)findByHardwareID:(id)a0;
+ (id)supportedAccessoriesByTransport:(long long)a0;
+ (id)supportedAccessories;

- (id)initWithHIDDictionary:(id)a0;
- (id)initWithHardwareID:(id)a0 productGroup:(id)a1 productNumber:(id)a2 capabilities:(unsigned long long)a3;
- (void)setSupplementalMobileAssetAppleModelNumber:(id)a0;
- (id)description;
- (void)addServiceBSDNotificationName:(id)a0;
- (void)addSupplementalAssetName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBluetoothDictionary:(id)a0;
- (id)init;
- (id)initWithHardwareID:(id)a0 capabilities:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0;
- (id)initWithHardwareID:(id)a0 appleModelNumber:(id)a1 capabilities:(unsigned long long)a2;
- (unsigned long long)hash;
- (id)initWithHDSDictionary:(id)a0;
- (void)setMobileAssetAppleModelNumber:(id)a0;
- (void)addBSDNotificationName:(id)a0;
- (id)initWithUSBPDDictionary:(id)a0;

@end
