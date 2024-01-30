@interface IDSPhoneSubscription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long subscriptionSlot;

+ (id)phoneSubscriptionWithSubscriptionSlot:(long long)a0;
+ (id)phoneSubscriptionsFromCTSIMs:(id)a0;
+ (id)CTSIMSFromPhoneSubscriptions:(id)a0;
+ (id)phoneSubscriptionWithSIM:(id)a0;

- (id)matchingSim;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPhoneSubscription:(id)a0;
- (id)initWithSubscriptionSlot:(long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
