@class FTStartMultilingualSpeechRequest, FTAudioPacket, FTFinishAudio, FTSetRequestOrigin, FTSetSpeechProfile, FTUpdateAudioInfo, FTSetSpeechContext, FTLanguageDetected;

@interface FTMutableMultilingualStreamingRequest : FTMultilingualStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartMultilingualSpeechRequest *contentAsFTStartMultilingualSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
