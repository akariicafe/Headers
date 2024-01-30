@class FTFinishAudio, FTResetServerEndpointer, FTSetAlternateRecognitionSausage, FTAudioPacket, FTSetRequestOrigin, FTMultiUserStartSpeechRequest, FTSetSpeechProfile, FTSetEndpointerState, FTSetSpeechContext, FTUpdateAudioInfo;

@interface FTMutableMultiUserStreamingRequest : FTMultiUserStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTMultiUserStartSpeechRequest *contentAsFTMultiUserStartSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (copy, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (copy, nonatomic) FTSetAlternateRecognitionSausage *contentAsFTSetAlternateRecognitionSausage;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
