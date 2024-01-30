@class MCMResolvedLink;

@interface MCMCommandLinkRemove : MCMCommand <MCMParametersWithLink, MCMParametersLinkRemove>

@property (readonly, nonatomic) MCMResolvedLink *link;
@property (readonly, nonatomic) unsigned long long attributes;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
