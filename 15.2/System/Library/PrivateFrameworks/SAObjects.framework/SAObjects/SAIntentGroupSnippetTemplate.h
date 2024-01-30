@class NSArray, NSString, SAUISnippet;

@interface SAIntentGroupSnippetTemplate : SADomainObject

@property (retain, nonatomic) SAUISnippet *detailSnippet;
@property (copy, nonatomic) NSArray *intentSlotKeyPaths;
@property (copy, nonatomic) NSString *key;

+ (id)snippetTemplate;
+ (id)snippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
