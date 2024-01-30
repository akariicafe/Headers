@class NSString, FTAcousticFeature;

@interface FTMutableAudioAnalytics_AcousticFeaturesEntry : FTAudioAnalytics_AcousticFeaturesEntry

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) FTAcousticFeature *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
