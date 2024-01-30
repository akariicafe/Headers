@interface MCMCommandCrashTest : MCMCommand <MCMParametersCrashTest>

@property (readonly, nonatomic) unsigned long long crashCount;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
