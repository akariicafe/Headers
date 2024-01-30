@class REMObjectID;

@interface REMListsDataViewInvocation_dataAccessFetchListsInAccount : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithParentAccountObjectID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
