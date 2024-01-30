@class NEDNSSettings;

@interface NEDNSSettingsNetworkAgent : NENetworkAgent

@property (retain) NEDNSSettings *settings;

+ (id)agentFromData:(id)a0;
+ (id)agentType;
+ (id)agentDomain;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)copyAgentData;

@end
