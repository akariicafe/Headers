@class SASRecognition, NSString;

@interface SAUIShowSpeechAlternatives : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *title;

+ (id)showSpeechAlternatives;
+ (id)showSpeechAlternativesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
