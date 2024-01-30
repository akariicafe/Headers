@class NSArray;

@interface SANoteSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *notes;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
