@class NSArray, NSString, NSNumber;

@interface SASStartSpeechRequest : SASStartSpeech

@property (nonatomic) BOOL autoPunctuationEnabled;
@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSString *clientModelVersion;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) BOOL eyesFree;
@property (nonatomic) BOOL handsFree;
@property (copy, nonatomic) NSString *responseMode;
@property (nonatomic) BOOL talkOnly;
@property (nonatomic) BOOL textToSpeechIsMuted;
@property (copy, nonatomic) NSArray *voiceTriggerPhrases;
@property (nonatomic) BOOL wasLaunchedForRequest;

+ (id)startSpeechRequest;
+ (id)startSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
