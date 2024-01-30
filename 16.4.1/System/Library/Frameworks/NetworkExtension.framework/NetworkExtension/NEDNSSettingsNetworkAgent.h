@class NEDNSSettings;

@interface NEDNSSettingsNetworkAgent : NENetworkAgent

@property (retain) NEDNSSettings *settings;

+ (id)agentFromData:(id)a0;
+ (id)agentType;
+ (id)agentDomain;

- (id)copyAgentData;
- (void).cxx_destruct;
- (id)agentDescription;

@end
