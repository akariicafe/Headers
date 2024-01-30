@class NSArray;

@interface SASportsAthleteSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *athletes;

+ (id)athleteSnippet;
+ (id)athleteSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
