@interface TPSCallingLineIdRestrictionResponse : TPSResponse

@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic) long long state;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (BOOL)isEqualToResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithSubscriptionContext:(id)a0 error:(id)a1;
- (id)initWithsubscriptionContext:(id)a0 editable:(BOOL)a1 state:(long long)a2 error:(id)a3;

@end
