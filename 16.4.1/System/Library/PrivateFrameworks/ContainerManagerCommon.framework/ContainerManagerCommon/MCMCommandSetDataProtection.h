@class MCMContainerIdentity;

@interface MCMCommandSetDataProtection : MCMCommand <MCMParametersSetDataProtection>

@property (readonly, nonatomic, getter=isThirdParty) BOOL thirdParty;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) BOOL retryIfLocked;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
