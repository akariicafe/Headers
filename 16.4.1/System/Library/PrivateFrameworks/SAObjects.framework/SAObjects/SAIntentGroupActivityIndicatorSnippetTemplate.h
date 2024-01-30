@class NSString;

@interface SAIntentGroupActivityIndicatorSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *detailText;

+ (id)activityIndicatorSnippetTemplateWithDictionary:(id)a0 context:(id)a1;
+ (id)activityIndicatorSnippetTemplate;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
