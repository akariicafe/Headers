@class NSDictionary;

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic) BOOL multilingualDisabled;
@property (copy, nonatomic) NSDictionary *speechRecognizedByLanguage;

+ (id)multilingualSpeechRecognizedWithDictionary:(id)a0 context:(id)a1;
+ (id)multilingualSpeechRecognized;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
