@class NSArray;

@interface SASportsTeamSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *teams;

+ (id)teamSnippet;
+ (id)teamSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
