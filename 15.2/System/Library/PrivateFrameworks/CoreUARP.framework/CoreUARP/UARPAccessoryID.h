@class NSString, NSUUID, NSDate;

@interface UARPAccessoryID : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_lastAddedDate;
    NSString *_countryCode;
    NSUUID *_uuid;
    unsigned long long _capability;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *manufacturer;
@property (readonly) NSString *modelName;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *stagedFirmwareVersion;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (readonly) NSString *hwFusingType;
@property (readonly) NSString *modelIdentifier;
@property (readonly) NSString *modelAnalytics;
@property BOOL downloadOnCellularAllowed;
@property BOOL autoDownloadAllowed;
@property long long transport;
@property (readonly) unsigned long long capability;

- (void)setFirmwareVersion:(id)a0;
- (void)setManufacturer:(id)a0;
- (void)setModelName:(id)a0;
- (void)setModelNumber:(id)a0;
- (void)setSerialNumber:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)countryCode;
- (void)setCountryCode:(id)a0;
- (void)setUuid:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uuid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setCapability:(unsigned long long)a0;
- (void)setProductNumber:(id)a0;
- (void)setStagedFirmwareVersion:(id)a0;
- (BOOL)analyticsIsEqual:(id)a0;
- (void)initCountryCode;
- (id)initWithoutUUID;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3;
- (id)computeModelIdentifier;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3 productGroup:(id)a4 productNumber:(id)a5;
- (id)initWithModelNumber:(id)a0;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1;
- (void)setProductGroup:(id)a0;
- (void)setHwFusingType:(id)a0;
- (BOOL)shareAnalyticsEventsWithThirdParty;
- (const char *)assetAvailabilityUpdateNotification;
- (const char *)supplementalAssetAvailabilityUpdateNotification;

@end
