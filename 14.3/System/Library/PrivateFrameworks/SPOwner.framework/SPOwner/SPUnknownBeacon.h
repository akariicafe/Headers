@class SPUnknownProductInfo, NSUUID, NSArray, NSData, SPHandle, NSDate, SPDiscoveredAccessoryMetadata;

@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (copy, nonatomic) NSArray *beaconLocations;
@property (copy, nonatomic) NSData *advertisement;
@property (copy, nonatomic) SPHandle *handle;
@property (nonatomic) BOOL isIgnored;
@property (copy, nonatomic) NSDate *triggerDate;
@property (copy, nonatomic) NSDate *ignoresUntilDate;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) SPDiscoveredAccessoryMetadata *metadata;
@property (copy, nonatomic) SPUnknownProductInfo *productInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
