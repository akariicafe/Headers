@class NSString;

@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL sentStatus;

+ (id)messageContentSnippetTemplate;
+ (id)messageContentSnippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
