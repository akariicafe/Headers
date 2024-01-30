@interface SAScreenActionPressBackButton : SABaseClientBoundCommand

+ (id)pressBackButton;
+ (id)pressBackButtonWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
