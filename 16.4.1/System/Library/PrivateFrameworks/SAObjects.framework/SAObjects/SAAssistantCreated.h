@class NSString;

@interface SAAssistantCreated : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *speechId;

+ (id)assistantCreatedWithDictionary:(id)a0 context:(id)a1;
+ (id)assistantCreated;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
