@class NSArray;

@interface SAUITemplateTemplatedSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *templateItems;

+ (id)templatedSnippet;
+ (id)templatedSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
