@class SAUIButton, NSArray, NSString, SAUIAppPunchOut;

@interface SAGuidanceGuideSnippet : SAUISnippet

@property (retain, nonatomic) SAUIButton *appPunchOutButton;
@property (retain, nonatomic) SAUIAppPunchOut *appStorePunchOut;
@property (copy, nonatomic) NSArray *domainSnippets;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSArray *intentEnabledAppSnippets;

+ (id)guideSnippet;
+ (id)guideSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
