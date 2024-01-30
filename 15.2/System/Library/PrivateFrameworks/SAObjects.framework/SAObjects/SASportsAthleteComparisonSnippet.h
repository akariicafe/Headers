@class NSDictionary;

@interface SASportsAthleteComparisonSnippet : SASportsAthleteSnippet

@property (copy, nonatomic) NSDictionary *comparisonItemDetails;

+ (id)athleteComparisonSnippet;
+ (id)athleteComparisonSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
