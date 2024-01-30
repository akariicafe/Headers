@class NSString, SPBeaconRole, NSURL, NSData, NSArray, SPUnknownProductMetadata;

@interface SPDiscoveredAccessoryProductInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL eligibleForPairing;
@property (copy, nonatomic) NSString *findmyProductId;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) SPBeaconRole *defaultRole;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSURL *lowBatteryInfoURL;
@property (copy, nonatomic) NSURL *disableURL;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSData *encryptionKeyE1;
@property (copy, nonatomic) NSData *encryptionKeyE2;
@property (copy, nonatomic) NSData *verificationKeyS2;
@property (nonatomic) double txPower;
@property (nonatomic) unsigned long long capabilities;
@property (copy, nonatomic) NSArray *layoutTemplate;
@property (copy, nonatomic) NSURL *defaultHeroIcon;
@property (copy, nonatomic) NSURL *defaultListIcon;
@property (copy, nonatomic) NSURL *defaultHeroIcon2x;
@property (copy, nonatomic) NSURL *defaultListIcon2x;
@property (copy, nonatomic) NSURL *defaultHeroIcon3x;
@property (copy, nonatomic) NSURL *defaultListIcon3x;
@property (copy, nonatomic) SPUnknownProductMetadata *learnModeMetadata;
@property (copy, nonatomic) SPUnknownProductMetadata *disableMetadata;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
