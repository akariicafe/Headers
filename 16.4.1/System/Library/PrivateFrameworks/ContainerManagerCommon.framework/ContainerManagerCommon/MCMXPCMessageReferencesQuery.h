@class MCMUserIdentity;

@interface MCMXPCMessageReferencesQuery : MCMXPCMessageWithOwnersAndGroupsBase <MCMParametersReferencesQuery>

@property (readonly, nonatomic) unsigned long long explicitFlags;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned long long privateFlags;
@property (readonly, nonatomic) BOOL createDuringReconciliation;
@property (readonly, nonatomic) BOOL deleteDuringReconciliation;
@property (readonly, nonatomic) BOOL yesReallyApplyToAll;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;

@end
