@interface TPSSetCallWaitingRequest : TPSCallWaitingRequest

@property (readonly, nonatomic) BOOL enabled;

+ (id)unarchivedObjectClasses;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithSubscriptionContext:(id)a0;
- (id)initWithSubscriptionContext:(id)a0 enabled:(BOOL)a1;

@end
