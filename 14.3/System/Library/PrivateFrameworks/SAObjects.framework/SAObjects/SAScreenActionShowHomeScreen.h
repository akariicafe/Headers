@interface SAScreenActionShowHomeScreen : SABaseClientBoundCommand

+ (id)showHomeScreen;
+ (id)showHomeScreenWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
