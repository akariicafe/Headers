@class NSString, NSArray;

@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *imageStyle;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSArray *labelComponents;

+ (id)profileSnippetTemplate;
+ (id)profileSnippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
