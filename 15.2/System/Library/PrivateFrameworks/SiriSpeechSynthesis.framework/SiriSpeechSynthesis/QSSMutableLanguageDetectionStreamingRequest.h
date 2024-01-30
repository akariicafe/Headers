@class QSSAudioPacket, QSSStartLanguageDetectionRequest, QSSFinishAudio;

@interface QSSMutableLanguageDetectionStreamingRequest : QSSLanguageDetectionStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSStartLanguageDetectionRequest *contentAsQSSStartLanguageDetectionRequest;
@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
