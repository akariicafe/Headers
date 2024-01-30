@class FTRecognitionCandidate, FTSetSpeechContext, FTResetServerEndpointer, FTUpdateAudioInfo, FTCheckForSpeechResponse, FTSetRequestOrigin, FTUpdatedAcousticProfile, FTRequestStatsResponse, FTServerEndpointFeatures, FTFinalSpeechRecognitionResponse, FTEndPointLikelihood, FTEndPointCandidate, FTAudioPacket, NSObject, FTSetEndpointerState, FTRecognitionProgress, FTStartSpeechRequest, FTAudioLimitExceeded, FTCheckForSpeechRequest, FTClientSetupInfo, FTSetSpeechProfile, FTFinishAudio, FTPartialSpeechRecognitionResponse, FTSetAlternateRecognitionSausage;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableAsrRecognitionMessage : FTAsrRecognitionMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartSpeechRequest *session_messageAsFTStartSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (copy, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (copy, nonatomic) FTCheckForSpeechRequest *session_messageAsFTCheckForSpeechRequest;
@property (copy, nonatomic) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTUpdatedAcousticProfile *session_messageAsFTUpdatedAcousticProfile;
@property (copy, nonatomic) FTEndPointLikelihood *session_messageAsFTEndPointLikelihood;
@property (copy, nonatomic) FTEndPointCandidate *session_messageAsFTEndPointCandidate;
@property (copy, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (copy, nonatomic) FTCheckForSpeechResponse *session_messageAsFTCheckForSpeechResponse;
@property (copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setSession_message:(id)a0;

@end
