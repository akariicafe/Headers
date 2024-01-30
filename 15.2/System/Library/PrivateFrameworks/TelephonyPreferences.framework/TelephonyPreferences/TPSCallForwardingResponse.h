@class CTCallForwardingValue;

@interface TPSCallForwardingResponse : TPSResponse

@property (readonly, nonatomic) CTCallForwardingValue *value;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (BOOL)isEqualToResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithSubscriptionContext:(id)a0 error:(id)a1 value:(id)a2;
- (id)initWithSubscriptionContext:(id)a0 error:(id)a1;

@end
