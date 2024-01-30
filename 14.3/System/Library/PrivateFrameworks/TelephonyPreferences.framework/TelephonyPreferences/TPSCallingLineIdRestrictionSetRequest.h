@interface TPSCallingLineIdRestrictionSetRequest : TPSCallingLineIdRestrictionRequest

@property (readonly, nonatomic) long long state;

+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (id)initWithSubscriptionContext:(id)a0 state:(long long)a1;

@end
