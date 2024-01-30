@class NSArray, NSString, NSNumber;

@interface SASStartSpeechRequest : SASStartSpeech

@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSString *clientModelVersion;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) BOOL eyesFree;
@property (nonatomic) BOOL handsFree;
@property (nonatomic) BOOL talkOnly;
@property (nonatomic) BOOL textToSpeechIsMuted;
@property (copy, nonatomic) NSArray *voiceTriggerPhrases;
@property (nonatomic) BOOL wasLaunchedForRequest;

+ (id)startSpeechRequest;
+ (id)startSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
