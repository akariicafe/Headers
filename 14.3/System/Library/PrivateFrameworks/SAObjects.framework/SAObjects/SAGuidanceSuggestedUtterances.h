@class NSArray;

@interface SAGuidanceSuggestedUtterances : SADomainObject

@property (copy, nonatomic) NSArray *utterances;

+ (id)suggestedUtterancesWithDictionary:(id)a0 context:(id)a1;
+ (id)suggestedUtterances;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
