@interface TPSCallClassRequest : TPSRequest

@property (nonatomic) int callClass;

+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (id)initWithSubscriptionContext:(id)a0 callClass:(int)a1;

@end
