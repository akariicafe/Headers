@interface SASportsMatchupDetailsSnippet : SASportsScheduleSnippet

@property (nonatomic) BOOL isModalView;

+ (id)matchupDetailsSnippet;
+ (id)matchupDetailsSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
