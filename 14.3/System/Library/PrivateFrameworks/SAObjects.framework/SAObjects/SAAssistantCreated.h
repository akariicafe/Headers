@class NSString;

@interface SAAssistantCreated : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *speechId;

+ (id)assistantCreated;
+ (id)assistantCreatedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
