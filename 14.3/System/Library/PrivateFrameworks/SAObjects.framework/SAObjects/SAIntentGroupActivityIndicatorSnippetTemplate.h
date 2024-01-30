@class NSString;

@interface SAIntentGroupActivityIndicatorSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *detailText;

+ (id)activityIndicatorSnippetTemplate;
+ (id)activityIndicatorSnippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
