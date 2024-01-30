@class NSString, QSSAcousticFeature;

@interface QSSMutableAudioAnalytics_AcousticFeaturesEntry : QSSAudioAnalytics_AcousticFeaturesEntry

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) QSSAcousticFeature *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
