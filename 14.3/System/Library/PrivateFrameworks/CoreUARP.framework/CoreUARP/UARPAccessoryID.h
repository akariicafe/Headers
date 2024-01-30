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
@property BOOL downloadOnCellularAllowed;
@property BOOL autoDownloadAllowed;
@property long long transport;
@property (readonly) unsigned long long capability;

- (void)setCountryCode:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setModelName:(id)a0;
- (id)countryCode;
- (void)setManufacturer:(id)a0;
- (void)setFirmwareVersion:(id)a0;
- (unsigned long long)hash;
- (void)setCapability:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setProductNumber:(id)a0;
- (id)uuid;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setModelNumber:(id)a0;
- (void)setSerialNumber:(id)a0;
- (void)setUuid:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)timeSinceLastAdded;
- (void)setStagedFirmwareVersion:(id)a0;
- (BOOL)analyticsIsEqual:(id)a0;
- (void)initCountryCode;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3;
- (id)lastAddedDate;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3 productGroup:(id)a4 productNumber:(id)a5;
- (id)initWithModelNumber:(id)a0;
- (void)setLastAddedDate;
- (void)setProductGroup:(id)a0;
- (BOOL)shareAnalyticsEventsWithThirdParty;
- (const char *)assetAvailabilityUpdateNotification;

@end
