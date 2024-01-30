@class NSArray, REMObjectID;

@interface REMListsDataViewInvocation_dataAccessFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *externalIdentifiers;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithExternalIdentifiers:(id)a0 accountObjectID:(id)a1;

@end
