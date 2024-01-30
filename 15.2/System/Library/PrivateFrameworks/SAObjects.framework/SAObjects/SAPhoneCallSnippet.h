@class NSArray;

@interface SAPhoneCallSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *calls;

+ (id)callSnippet;
+ (id)callSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
