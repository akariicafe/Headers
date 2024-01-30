@class FTRecognitionCandidate, FTSetSpeechContext, FTResetServerEndpointer, FTUpdateAudioInfo, FTCheckForSpeechResponse, FTSetRequestOrigin, FTUpdatedAcousticProfile, FTRequestStatsResponse, FTServerEndpointFeatures, NSMutableDictionary, FTFinalSpeechRecognitionResponse, FTEndPointLikelihood, FTEndPointCandidate, FTAudioPacket, NSObject, FTSetEndpointerState, NSData, FTRecognitionProgress, FTStartSpeechRequest, FTAudioLimitExceeded, FTCheckForSpeechRequest, FTClientSetupInfo, FTSetSpeechProfile, FTFinishAudio, FTPartialSpeechRecognitionResponse, FTSetAlternateRecognitionSausage;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTAsrRecognitionMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AsrRecognitionMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTStartSpeechRequest *session_messageAsFTStartSpeechRequest;
@property (readonly, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (readonly, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (readonly, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (readonly, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (readonly, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (readonly, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (readonly, nonatomic) FTCheckForSpeechRequest *session_messageAsFTCheckForSpeechRequest;
@property (readonly, nonatomic) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property (readonly, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) FTUpdatedAcousticProfile *session_messageAsFTUpdatedAcousticProfile;
@property (readonly, nonatomic) FTEndPointLikelihood *session_messageAsFTEndPointLikelihood;
@property (readonly, nonatomic) FTEndPointCandidate *session_messageAsFTEndPointCandidate;
@property (readonly, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (readonly, nonatomic) FTCheckForSpeechResponse *session_messageAsFTCheckForSpeechResponse;
@property (readonly, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (readonly, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_immutableClassForType:(long long)a0;
+ (long long)session_message_typeForImmutableObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::AsrRecognitionMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AsrRecognitionMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AsrRecognitionMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
