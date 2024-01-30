@interface SASyncClientVerify : SABaseClientBoundCommand

+ (id)clientVerify;
+ (id)clientVerifyWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
