@class NSDictionary;

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic) BOOL multilingualDisabled;
@property (copy, nonatomic) NSDictionary *speechRecognizedByLanguage;

+ (id)multilingualSpeechRecognized;
+ (id)multilingualSpeechRecognizedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
