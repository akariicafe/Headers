@class NSString, NSArray, SAStartLocalRequest, SAStartRequest;

@interface SAStartUIRequest : SABaseClientBoundCommand <SAClientBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAStartRequest *startRequest;
@property (retain, nonatomic) SAStartLocalRequest *startLocalRequest;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)startUIRequest;
+ (id)startUIRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
