@interface BWFastStereoDisparityConfiguration : BWInferenceConfiguration

@property (nonatomic) unsigned long long disparityOrientation;
@property (readonly, nonatomic) unsigned int disparityType;
@property (readonly, nonatomic) long long disparityPrioritization;

- (id)initWithInferenceType:(int)a0 disparityOrientation:(unsigned long long)a1 disparityType:(unsigned int)a2;

@end
