@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {
    NSData *_agentData;
}

+ (id)agentFromData:(id)a0;
+ (id)agentType;
+ (id)agentDomain;

- (id)copyAgentData;
- (void).cxx_destruct;
- (id)agentDescription;
- (id)initWithProxyConfiguration:(id)a0;

@end
