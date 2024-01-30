@class NSString;

@interface SAAssistantNotReady : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;

+ (id)assistantNotReady;
+ (id)assistantNotReadyWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
