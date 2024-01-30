@class NSString, QSSTextToSpeechMeta, QSSAudioDescription;

@interface QSSMutableTextToSpeechCacheMetaInfo : QSSTextToSpeechCacheMetaInfo

@property (copy, nonatomic) QSSTextToSpeechMeta *meta_info;
@property (nonatomic) long long audio_type;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) QSSAudioDescription *decoder_description;
@property (copy, nonatomic) QSSAudioDescription *playback_description;
@property (nonatomic) int audio_length;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *original_session_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
