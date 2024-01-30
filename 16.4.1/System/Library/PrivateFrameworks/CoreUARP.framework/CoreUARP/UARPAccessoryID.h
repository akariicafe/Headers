@class NSString, NSUUID, NSArray, NSDate;

@interface UARPAccessoryID : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_lastAddedDate;
    NSString *_countryCode;
    NSUUID *_uuid;
    unsigned long long _capability;
    unsigned long long _uarpVersion;
    NSArray *_partnerSerialNumbers;
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
@property (readonly) NSString *friendlyName;
@property (readonly) unsigned long long uarpVersion;
@property (readonly) NSString *modelIdentifier;
@property (readonly) NSString *modelAnalytics;
@property BOOL downloadOnCellularAllowed;
@property BOOL autoDownloadAllowed;
@property (readonly) BOOL suppressAutomaticDynamicAssets;
@property long long transport;
@property (readonly) unsigned long long capability;

- (void)setCountryCode:(id)a0;
- (void)setModelName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSerialNumber:(id)a0;
- (void)setUuid:(id)a0;
- (void)setModelNumber:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)uuid;
- (BOOL)isEqual:(id)a0;
- (id)countryCode;
- (unsigned long long)hash;
- (id)description;
- (void)setManufacturer:(id)a0;
- (void)setFriendlyName:(id)a0;
- (void).cxx_destruct;
- (void)setFirmwareVersion:(id)a0;
- (void)setCapability:(unsigned long long)a0;
- (void)setProductNumber:(id)a0;
- (void)setStagedFirmwareVersion:(id)a0;
- (void)initCountryCode;
- (id)initWithoutUUID;
- (void)setUarpVersion:(unsigned long long)a0;
- (BOOL)analyticsIsEqual:(id)a0;
- (const char *)assetAvailabilityUpdateNotification;
- (id)computeModelIdentifier;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3 productGroup:(id)a4 productNumber:(id)a5;
- (id)initWithModelNumber:(id)a0;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1;
- (id)partnerSerialNumbers;
- (void)setHwFusingType:(id)a0;
- (void)setPartnerSerialNumbers:(id)a0;
- (void)setProductGroup:(id)a0;
- (void)setSuppressAutomaticDynamicAssets:(BOOL)a0;
- (BOOL)shareAnalyticsEventsWithThirdParty;
- (const char *)supplementalAssetAvailabilityUpdateNotification;

@end
