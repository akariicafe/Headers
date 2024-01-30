@class NSArray, NSString;

@interface SASetRemoteDevices : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL remoteDeviceHasNoAssistantId;
@property (nonatomic) BOOL remoteDeviceNotSetup;
@property (nonatomic) BOOL remoteDeviceUnreachable;
@property (copy, nonatomic) NSArray *remoteDevices;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setRemoteDevices;
+ (id)setRemoteDevicesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
