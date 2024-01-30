@interface TPSCallForwardingRequest : TPSCallClassRequest

@property (readonly, nonatomic) int reason;

+ (id)unarchivedObjectClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithSubscriptionContext:(id)a0 callClass:(int)a1;
- (id)initWithSubscriptionContext:(id)a0 reason:(int)a1;

@end
