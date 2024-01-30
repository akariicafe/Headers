@class NSString;

@interface SAUISiriSearchJSONSnippet : SAUISnippet

@property (copy, nonatomic) NSString *clientTemplate;

+ (id)siriSearchJSONSnippet;
+ (id)siriSearchJSONSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
