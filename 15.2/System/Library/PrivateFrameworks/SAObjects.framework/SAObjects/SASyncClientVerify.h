@interface SASyncClientVerify : SABaseClientBoundCommand

+ (id)clientVerify;
+ (id)clientVerifyWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
