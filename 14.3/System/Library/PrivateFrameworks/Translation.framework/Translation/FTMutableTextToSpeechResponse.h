@class FTAudioDescription, NSString, NSArray, NSData, FTTextToSpeechFeature, FTTextToSpeechMeta;

@interface FTMutableTextToSpeechResponse : FTTextToSpeechResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (nonatomic) long long audio_type;
@property (nonatomic) int sample_rate;
@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) FTAudioDescription *decoder_description;
@property (copy, nonatomic) FTAudioDescription *playback_description;
@property (copy, nonatomic) NSArray *word_timing_info;
@property (copy, nonatomic) FTTextToSpeechMeta *meta_info;
@property (copy, nonatomic) FTTextToSpeechFeature *feature;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)audio:(id /* block */)a0;

@end
