@class NSString, SARemoteDevice;
@protocol SAAceCommand;

@interface SAExecuteOnRemoteResponse : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SARemoteDevice *remoteDevice;
@property (nonatomic) BOOL responseFromRemote;
@property (retain, nonatomic) id<SAAceCommand> result;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)executeOnRemoteResponse;
+ (id)executeOnRemoteResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
