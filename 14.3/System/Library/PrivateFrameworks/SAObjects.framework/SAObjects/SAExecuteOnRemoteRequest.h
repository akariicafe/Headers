@class NSData, SARemoteDevice;

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (retain, nonatomic) SARemoteDevice *remoteDevice;
@property (nonatomic) BOOL requiresResponseFromRemote;
@property (copy, nonatomic) NSData *serializedCommand;
@property (nonatomic) BOOL useGuaranteedDelivery;

+ (id)executeOnRemoteRequest;
+ (id)executeOnRemoteRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
