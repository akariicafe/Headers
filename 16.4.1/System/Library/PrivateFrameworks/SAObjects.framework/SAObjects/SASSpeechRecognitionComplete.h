@class NSString;

@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *sessionId;

+ (id)speechRecognitionComplete;
+ (id)speechRecognitionCompleteWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
