@class NSString, NSArray;

@interface SAIntentGroupTextSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSArray *labelComponents;
@property (nonatomic) BOOL showsDisclosureIndicator;

+ (id)textSnippetTemplate;
+ (id)textSnippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
