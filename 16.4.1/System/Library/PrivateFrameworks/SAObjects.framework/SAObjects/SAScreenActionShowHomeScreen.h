@interface SAScreenActionShowHomeScreen : SABaseClientBoundCommand

+ (id)showHomeScreen;
+ (id)showHomeScreenWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
