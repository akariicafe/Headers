@class NSNumber, NSUUID, NSString;

@interface NENetworkAgentRegistrationFileHandle : NEFileHandle

@property (readonly) NSNumber *sessionType;
@property (readonly) NSUUID *configurationIdentifier;
@property (readonly) NSUUID *agentUUID;
@property (readonly) NSString *name;
@property unsigned long long agentFlags;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initFromDictionary:(id)a0;
- (id)initWithNetworkAgentRegistration:(id)a0 sessionType:(id)a1 configurationIdentifier:(id)a2 agentUUID:(id)a3;
- (id)description;
- (unsigned long long)type;
- (id)initWithNetworkAgentRegistration:(id)a0 sessionType:(id)a1 configurationIdentifier:(id)a2 agentUUID:(id)a3 name:(id)a4;

@end
