@class NSString, SPBeaconRole, NSURL;

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
@property (nonatomic) double txPower;
@property (nonatomic) unsigned long long capabilities;
@property (copy, nonatomic) NSURL *defaultHeroIcon;
@property (copy, nonatomic) NSURL *defaultListIcon;
@property (copy, nonatomic) NSURL *defaultHeroIcon2x;
@property (copy, nonatomic) NSURL *defaultListIcon2x;
@property (copy, nonatomic) NSURL *defaultHeroIcon3x;
@property (copy, nonatomic) NSURL *defaultListIcon3x;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
