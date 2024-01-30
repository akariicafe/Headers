@interface SASportsMatchupDetailsSnippet : SASportsScheduleSnippet

@property (nonatomic) BOOL isModalView;

+ (id)matchupDetailsSnippet;
+ (id)matchupDetailsSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
