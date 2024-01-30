@class NSArray;

@interface SAGuidanceSuggestedUtterances : SADomainObject

@property (copy, nonatomic) NSArray *utterances;

+ (id)suggestedUtterances;
+ (id)suggestedUtterancesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
