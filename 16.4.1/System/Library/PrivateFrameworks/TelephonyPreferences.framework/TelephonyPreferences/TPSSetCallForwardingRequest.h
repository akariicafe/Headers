@class CTCallForwardingValue;

@interface TPSSetCallForwardingRequest : TPSRequest

@property (readonly, nonatomic) CTCallForwardingValue *value;

+ (id)unarchivedObjectClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubscriptionContext:(id)a0;
- (id)initWithSubscriptionContext:(id)a0 value:(id)a1;

@end
