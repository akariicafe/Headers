@class NSArray;

@interface SAGKAlternateResultsPod : SAGKPodView

@property (copy, nonatomic) NSArray *alternateResults;

+ (id)alternateResultsPodWithDictionary:(id)a0 context:(id)a1;
+ (id)alternateResultsPod;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
