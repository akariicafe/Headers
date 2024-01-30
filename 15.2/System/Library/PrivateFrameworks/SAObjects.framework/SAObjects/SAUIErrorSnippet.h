@class NSString;

@interface SAUIErrorSnippet : SAUISnippet

@property (copy, nonatomic) NSString *message;

+ (id)errorSnippet;
+ (id)errorSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
