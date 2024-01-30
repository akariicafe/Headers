@class NSData, FTSpeechTranslationAudioPacket, NSMutableDictionary, FTAudioPacket, FTFinishAudio, FTLanguageDetected, FTResetServerEndpointer, FTSetEndpointerState, FTStartSpeechTranslationLoggingRequest, FTStartSpeechTranslationRequest;

@interface FTSpeechTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property (readonly, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property (readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (readonly, nonatomic) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (readonly, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (readonly, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (readonly, nonatomic) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationStreamingRequest { unsigned char x0[1]; } *)a1;

@end
