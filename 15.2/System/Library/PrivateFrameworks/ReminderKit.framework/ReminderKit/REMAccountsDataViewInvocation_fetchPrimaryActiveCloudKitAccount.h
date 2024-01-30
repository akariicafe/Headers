@interface REMAccountsDataViewInvocation_fetchPrimaryActiveCloudKitAccount : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL fetchREMObjectIDOnly;

- (void)encodeWithCoder:(id)a0;
- (id)initWithFetchREMObjectIDOnly:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (unsigned long long)hash;

@end
