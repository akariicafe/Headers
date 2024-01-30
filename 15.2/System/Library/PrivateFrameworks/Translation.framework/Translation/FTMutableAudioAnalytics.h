@class NSArray;

@interface FTMutableAudioAnalytics : FTAudioAnalytics

@property (copy, nonatomic) NSArray *speech_recognition_features;
@property (copy, nonatomic) NSArray *acoustic_features;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
