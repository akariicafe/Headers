@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent

@property (retain) NSData *agentData;

+ (id)agentFromData:(id)a0;
+ (id)agentType;
+ (id)agentDomain;

- (id)initWithProxyConfiguration:(id)a0;
- (id)agentDescription;
- (void).cxx_destruct;
- (id)copyAgentData;

@end
