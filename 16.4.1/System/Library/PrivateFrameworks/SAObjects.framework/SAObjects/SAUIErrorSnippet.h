@class NSString;

@interface SAUIErrorSnippet : SAUISnippet

@property (copy, nonatomic) NSString *message;

+ (id)errorSnippet;
+ (id)errorSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
