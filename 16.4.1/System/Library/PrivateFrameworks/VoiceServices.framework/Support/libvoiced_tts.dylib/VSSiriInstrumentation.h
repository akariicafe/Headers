@class NSUUID;

@interface VSSiriInstrumentation : NSObject

@property (retain, nonatomic) NSUUID *siriRequestId;
@property (retain, nonatomic) NSUUID *ttsId;
@property (retain, nonatomic) NSUUID *contextId;

+ (int)schemaVoiceGenderFromGender:(long long)a0;
+ (int)schemaFootprintFromFootprint:(long long)a0;
+ (int)synthesisSourceFromSource:(long long)a0;
+ (int)schemaVoiceTypeFromType:(long long)a0;
+ (void)instrumentPowerEvent:(id)a0 ttsId:(id)a1;
+ (id)sharedPowerLogger;
+ (void)instrumentVoicedProcessStartedPowerEvent;
+ (int)outputRouteFromRouteInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithSiriRequestId:(id)a0;
- (void)instrumentRequestReceivedWithText:(id)a0 requestedVoiceType:(long long)a1 requestedVoiceFootprint:(long long)a2 isPrivate:(BOOL)a3;
- (void)instrumentSpeechCancelled;
- (void)instrumentSpeechEndedWithAudioDuration:(double)a0 synthesisLatency:(double)a1 realTimeFactor:(double)a2 promptCount:(unsigned long long)a3 errorCode:(long long)a4;
- (void)instrumentSpeechFailedWithErrorCodes:(id)a0;
- (void)instrumentSpeechStartedWithSource:(long long)a0 customerPerceivedLatency:(double)a1 audioOutputRoute:(id)a2 voiceType:(long long)a3 voiceFootprint:(long long)a4 voiceVersion:(unsigned long long)a5 resourceVersion:(unsigned long long)a6 isWhisper:(BOOL)a7;
- (void)instrumentVoiceFallbackOccurredWithVoice:(id)a0 resource:(id)a1;
- (void)makeRequestLinkEvent;

@end
