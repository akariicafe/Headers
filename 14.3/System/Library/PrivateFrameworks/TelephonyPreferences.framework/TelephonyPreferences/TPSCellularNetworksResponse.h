@class NSArray;

@interface TPSCellularNetworksResponse : TPSResponse

@property (readonly, copy, nonatomic) NSArray *cellularNetworks;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;

- (id)archivedDataWithError:(id *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToResponse:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSubscriptionContext:(id)a0 error:(id)a1 cellularNetworks:(id)a2;
- (id)initWithSubscriptionContext:(id)a0 error:(id)a1;

@end
