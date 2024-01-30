@class NSString, REMObjectID;

@interface REMListsDataViewInvocation_userActivityFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithExternalIdentifier:(id)a0 accountObjectID:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
