@class MCMConcreteContainerIdentity;

@interface MCMCommandRegenerateDirectoryUUID : MCMCommand <MCMParametersWithConcreteContainer>

@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;
- (id)initWithConcreteContainerIdentity:(id)a0 context:(id)a1 resultPromise:(id)a2;
- (id)regenerateDirectoryUUIDNoCacheUpdateWithMetadata:(id)a0 error:(id *)a1;

@end
