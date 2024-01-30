@class NSArray, NSDictionary;

@interface REMSmartListsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *smartListStorages;
@property (readonly, nonatomic) NSDictionary *accountStorages;
@property (readonly, nonatomic) NSDictionary *parentListStorages;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSmartListStorages:(id)a0 accountStorages:(id)a1 parentListStorages:(id)a2;
- (id)initWithSmartListStorages:(id)a0;

@end
