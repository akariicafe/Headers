@interface BWFastStereoDisparityConfiguration : BWInferenceConfiguration

@property (readonly, nonatomic) int fsdNetStereoImagesAlignment;
@property (readonly, nonatomic) unsigned int disparityType;
@property (readonly, nonatomic) long long disparityPrioritization;

- (id)initWithInferenceType:(int)a0 fsdNetStereoImagesAlignment:(int)a1 disparityType:(unsigned int)a2;

@end
