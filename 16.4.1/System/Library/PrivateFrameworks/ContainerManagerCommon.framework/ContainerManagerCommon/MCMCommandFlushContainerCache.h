@protocol MCMXPCMessage;

@interface MCMCommandFlushContainerCache : MCMCommand <MCMParametersFlushContainerCache>

@property (readonly, nonatomic) id<MCMXPCMessage> message;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) unsigned long long containerClass;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
