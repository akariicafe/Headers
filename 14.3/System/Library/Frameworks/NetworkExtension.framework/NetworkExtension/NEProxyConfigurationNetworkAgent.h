@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent

@property (retain) NSData *agentData;

+ (id)agentFromData:(id)a0;
+ (id)agentType;
+ (id)agentDomain;

- (void).cxx_destruct;
- (id)initWithProxyConfiguration:(id)a0;
- (id)agentDescription;
- (id)copyAgentData;

@end
