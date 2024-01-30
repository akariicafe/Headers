@class NSString;

@interface SASUserUtteranceEditableTextSnippet : SAUISnippet

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utterance;

+ (id)userUtteranceEditableTextSnippet;
+ (id)userUtteranceEditableTextSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
