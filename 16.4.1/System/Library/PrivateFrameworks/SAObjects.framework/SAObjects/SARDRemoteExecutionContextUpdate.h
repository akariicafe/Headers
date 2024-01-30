@class NSData, NSString;

@interface SARDRemoteExecutionContextUpdate : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *executionContextUpdate;
@property (copy, nonatomic) NSString *remoteDeviceAssistantId;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
