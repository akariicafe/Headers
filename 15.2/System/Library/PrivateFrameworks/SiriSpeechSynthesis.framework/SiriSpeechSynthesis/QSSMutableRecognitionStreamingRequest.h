@class QSSUpdateAudioInfo, QSSSetRequestOrigin, QSSSetEndpointerState, QSSFinishAudio, QSSResetServerEndpointer, QSSAudioPacket, QSSCheckForSpeechRequest, QSSStartSpeechRequest, QSSSetSpeechContext, QSSSetSpeechProfile, QSSSetAlternateRecognitionSausage;

@interface QSSMutableRecognitionStreamingRequest : QSSRecognitionStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSStartSpeechRequest *contentAsQSSStartSpeechRequest;
@property (copy, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (copy, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (copy, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (copy, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (copy, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (copy, nonatomic) QSSCheckForSpeechRequest *contentAsQSSCheckForSpeechRequest;
@property (copy, nonatomic) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
