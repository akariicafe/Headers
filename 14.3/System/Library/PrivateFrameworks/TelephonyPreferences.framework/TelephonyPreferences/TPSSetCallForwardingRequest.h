@class CTCallForwardingValue;

@interface TPSSetCallForwardingRequest : TPSRequest

@property (readonly, nonatomic) CTCallForwardingValue *value;

+ (id)unarchivedObjectClasses;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (id)initWithSubscriptionContext:(id)a0 value:(id)a1;

@end
