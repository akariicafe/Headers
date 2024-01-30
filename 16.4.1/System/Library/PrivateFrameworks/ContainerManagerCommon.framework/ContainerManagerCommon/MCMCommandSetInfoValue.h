@class NSString, MCMConcreteContainerIdentity;

@interface MCMCommandSetInfoValue : MCMCommand <MCMParametersWithKeyValue>

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1 containerIdentity:(id)a2 context:(id)a3 resultPromise:(id)a4;

@end
