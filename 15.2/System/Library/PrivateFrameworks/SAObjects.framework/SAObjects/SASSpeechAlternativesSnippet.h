@class SASRecognition, NSString;

@interface SASSpeechAlternativesSnippet : SAUISnippet

@property (nonatomic) long long maxEntryToShow;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *sessionId;

+ (id)speechAlternativesSnippet;
+ (id)speechAlternativesSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
