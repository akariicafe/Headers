@class NSArray;

@interface SAIntentGroupAppAuthorizationStatusRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appBundleIds;

+ (id)appAuthorizationStatusRequest;
+ (id)appAuthorizationStatusRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
