@class SAUIGetResponseAlternatives, NSString, SASRecognition, SASAudioAnalytics, NSNumber;

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (retain, nonatomic) SASAudioAnalytics *audioAnalytics;
@property (nonatomic) BOOL eager;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (retain, nonatomic) SASRecognition *recognition;
@property (retain, nonatomic) SAUIGetResponseAlternatives *responseAlternatives;
@property (copy, nonatomic) NSString *resultId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *title;

+ (id)speechRecognized;
+ (id)speechRecognizedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
