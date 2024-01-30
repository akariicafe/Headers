@class NSArray;

@interface SANoteSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *notes;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
