@class NSString;

@interface SAKnowledgeKeyValueStringEntry : SAKnowledgeKeyValueEntry

@property (copy, nonatomic) NSString *value;

+ (id)keyValueStringEntry;
+ (id)keyValueStringEntryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
