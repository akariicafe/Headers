@class NSData;

@interface QSSMutableTextToSpeechSpeechFeatureInputWave : QSSTextToSpeechSpeechFeatureInputWave

@property (nonatomic) int sample_rate;
@property (copy, nonatomic) NSData *pcm_data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)pcm_data:(id /* block */)a0;

@end
