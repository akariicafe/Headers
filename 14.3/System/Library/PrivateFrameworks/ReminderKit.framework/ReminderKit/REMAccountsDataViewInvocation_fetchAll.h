@interface REMAccountsDataViewInvocation_fetchAll : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long purpose;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPurpose:(long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
