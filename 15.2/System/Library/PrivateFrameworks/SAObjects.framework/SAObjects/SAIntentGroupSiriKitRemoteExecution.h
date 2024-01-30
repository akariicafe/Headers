@class NSString;

@interface SAIntentGroupSiriKitRemoteExecution : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *executionDeviceAssistantId;
@property (copy, nonatomic) NSString *invocationDeviceAssistantId;
@property (copy, nonatomic) NSString *personalDomainAuthenticationMode;
@property (copy, nonatomic) NSString *runLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)siriKitRemoteExecution;
+ (id)siriKitRemoteExecutionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
