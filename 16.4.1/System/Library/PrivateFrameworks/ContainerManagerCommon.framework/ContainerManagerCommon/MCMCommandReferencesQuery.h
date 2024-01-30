@class NSSet, MCMUserIdentity;

@interface MCMCommandReferencesQuery : MCMCommand <MCMParametersWithOwnersAndGroups, MCMParametersReferencesQuery>

@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSSet *ownerIdentifiers;
@property (readonly, nonatomic) NSSet *groupIdentifiers;
@property (readonly, nonatomic) unsigned long long explicitFlags;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned long long privateFlags;
@property (readonly, nonatomic) BOOL createDuringReconciliation;
@property (readonly, nonatomic) BOOL deleteDuringReconciliation;
@property (readonly, nonatomic) BOOL yesReallyApplyToAll;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
