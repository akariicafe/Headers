@class NSString;

@interface SAScreenActionActivateUIElement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *elementId;

+ (id)activateUIElement;
+ (id)activateUIElementWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
