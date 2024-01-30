@class MCMResolvedLink;

@interface MCMCommandLinkApply : MCMCommand <MCMParametersWithLink>

@property (readonly, nonatomic) MCMResolvedLink *link;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
