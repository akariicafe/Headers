@class NSNumber;

@interface SAKnowledgeKeyValueNumericEntry : SAKnowledgeKeyValueEntry

@property (copy, nonatomic) NSNumber *value;

+ (id)keyValueNumericEntry;
+ (id)keyValueNumericEntryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
