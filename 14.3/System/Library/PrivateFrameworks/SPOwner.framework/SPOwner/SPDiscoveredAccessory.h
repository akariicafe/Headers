@class NSUUID, NSData, SPDiscoveredAccessoryProductInformation, SPDiscoveredAccessoryMetadata;

@interface SPDiscoveredAccessory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *macAddress;
@property (copy, nonatomic) SPDiscoveredAccessoryMetadata *discoveredMetadata;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *productInformation;
@property (nonatomic) BOOL isBatteryTooLow;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
