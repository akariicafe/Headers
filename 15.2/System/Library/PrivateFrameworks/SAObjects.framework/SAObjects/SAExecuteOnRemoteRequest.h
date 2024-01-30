@class NSData, SARemoteDevice;

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (retain, nonatomic) SARemoteDevice *remoteDevice;
@property (nonatomic) BOOL requiresResponseFromRemote;
@property (copy, nonatomic) NSData *serializedCommand;
@property (nonatomic) BOOL suppressResponse;
@property (nonatomic) BOOL useGuaranteedDelivery;

+ (id)executeOnRemoteRequest;
+ (id)executeOnRemoteRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
