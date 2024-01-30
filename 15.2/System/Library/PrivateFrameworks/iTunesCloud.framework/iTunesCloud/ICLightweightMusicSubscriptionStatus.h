@class NSArray, NSDate;

@interface ICLightweightMusicSubscriptionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) long long statusType;
@property (readonly, nonatomic) long long reasonType;
@property (readonly, copy, nonatomic) NSArray *eligibleOffers;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)hasCapability:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithExtendedSubscriptionStatus:(id)a0;

@end
