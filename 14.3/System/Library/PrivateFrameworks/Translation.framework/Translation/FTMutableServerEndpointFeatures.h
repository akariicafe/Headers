@class NSArray, NSString;

@interface FTMutableServerEndpointFeatures : FTServerEndpointFeatures

@property (nonatomic) int processed_audio_duration_ms;
@property (nonatomic) int num_of_words;
@property (nonatomic) int trailing_silence_duration;
@property (nonatomic) double eos_likelihood;
@property (copy, nonatomic) NSArray *pause_counts;
@property (nonatomic) double silence_posterior;
@property (copy, nonatomic) NSString *task_name;
@property (copy, nonatomic) NSString *speech_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
