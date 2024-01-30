@class NSArray;

@interface REMListsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *accountStorages;
@property (readonly, nonatomic) NSArray *listStorages;
@property (readonly, nonatomic) NSArray *objectIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountStorages:(id)a0 listStorages:(id)a1 objectIDs:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
