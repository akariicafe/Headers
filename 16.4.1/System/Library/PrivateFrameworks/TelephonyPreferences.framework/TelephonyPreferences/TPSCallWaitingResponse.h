@interface TPSCallWaitingResponse : TPSResponse

@property (readonly, nonatomic) BOOL enabled;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;

- (BOOL)isEqualToResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSubscriptionContext:(id)a0 error:(id)a1;
- (id)initWithsubscriptionContext:(id)a0 error:(id)a1 enabled:(BOOL)a2;

@end
