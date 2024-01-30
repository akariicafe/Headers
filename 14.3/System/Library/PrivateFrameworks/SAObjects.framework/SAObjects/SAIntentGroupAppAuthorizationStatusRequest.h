@class NSArray;

@interface SAIntentGroupAppAuthorizationStatusRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appBundleIds;

+ (id)appAuthorizationStatusRequest;
+ (id)appAuthorizationStatusRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
