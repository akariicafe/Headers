@class FTSpeechTranslationAudioPacket, FTAudioPacket, FTFinishAudio, FTLanguageDetected, FTResetServerEndpointer, FTSetEndpointerState, FTStartSpeechTranslationLoggingRequest, FTStartSpeechTranslationRequest;

@interface FTMutableSpeechTranslationStreamingRequest : FTSpeechTranslationStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property (copy, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (copy, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (copy, nonatomic) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
