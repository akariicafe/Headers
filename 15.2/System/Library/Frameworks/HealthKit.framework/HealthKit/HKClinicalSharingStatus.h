@class NSString, NSDate;

@interface HKClinicalSharingStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *firstSharedDate;
@property (readonly, copy, nonatomic) NSDate *lastSharedDate;
@property (readonly, nonatomic) long long featureStatus;
@property (readonly, nonatomic) long long userStatus;
@property (readonly, nonatomic) long long multiDeviceStatus;
@property (readonly, copy, nonatomic) NSString *primaryDeviceName;

+ (id)unknownStatus;
+ (long long)clinicalSharingFeatureStatusWithAccountState:(long long)a0 gatewayFeatureStatus:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithFirstSharedDate:(id)a0 lastSharedDate:(id)a1 featureStatus:(long long)a2 userStatus:(long long)a3 multiDeviceStatus:(long long)a4 primaryDeviceName:(id)a5;

@end
