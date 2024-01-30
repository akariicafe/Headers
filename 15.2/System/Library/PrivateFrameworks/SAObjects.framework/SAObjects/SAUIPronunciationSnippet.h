@class NSArray, NSString;

@interface SAUIPronunciationSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *cancelCommands;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSArray *pronunciations;
@property (copy, nonatomic) NSArray *selectNoneCommands;
@property (copy, nonatomic) NSString *selectNoneText;

+ (id)pronunciationSnippet;
+ (id)pronunciationSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
