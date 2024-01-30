@class NSString, QSSAcousticFeature;

@interface QSSMutableAudioAnalytics_AcousticFeaturesEntry : QSSAudioAnalytics_AcousticFeaturesEntry

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) QSSAcousticFeature *value;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
