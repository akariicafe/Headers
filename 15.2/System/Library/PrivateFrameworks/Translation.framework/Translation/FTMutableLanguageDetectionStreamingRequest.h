@class FTAudioPacket, FTStartLanguageDetectionRequest, FTFinishAudio;

@interface FTMutableLanguageDetectionStreamingRequest : FTLanguageDetectionStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
