@class NSString;

@interface SAIntentGroupSettingSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *text;

+ (id)settingSnippetTemplate;
+ (id)settingSnippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
