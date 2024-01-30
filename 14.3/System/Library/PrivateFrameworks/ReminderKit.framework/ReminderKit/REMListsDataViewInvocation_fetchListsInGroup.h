@class REMObjectID;

@interface REMListsDataViewInvocation_fetchListsInGroup : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *groupObjectID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithParentGroupObjectID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
