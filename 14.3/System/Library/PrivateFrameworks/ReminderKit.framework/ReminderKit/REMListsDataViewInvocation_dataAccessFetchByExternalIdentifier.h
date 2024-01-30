@class NSArray, REMObjectID;

@interface REMListsDataViewInvocation_dataAccessFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *externalIdentifiers;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithExternalIdentifiers:(id)a0 accountObjectID:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
