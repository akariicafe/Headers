@class NSArray;

@interface FTMutableFinishAudio : FTFinishAudio

@property (nonatomic) int packet_count;
@property (nonatomic) float total_audio_recorded_seconds;
@property (copy, nonatomic) NSArray *features_at_endpoint;
@property (copy, nonatomic) NSArray *server_feature_latency_distribution;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
