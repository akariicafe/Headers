@class NSArray;

@interface FTMutableAcousticFeature : FTAcousticFeature

@property (copy, nonatomic) NSArray *acoustic_feature_per_frame;
@property (nonatomic) float frame_duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
