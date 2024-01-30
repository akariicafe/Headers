@class NSString;

@interface SAUICloseAssistant : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *reason;

+ (id)closeAssistant;
+ (id)closeAssistantWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
