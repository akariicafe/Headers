@interface PVPersonDeduperProfile : NSObject <NSCopying>

@property (nonatomic) unsigned long long faceProcessingVersion;
@property (nonatomic) double strictMaximumDistance;
@property (nonatomic) double normalMaximumDistance;
@property (nonatomic) double fuzzyMaximumDistance;
@property (nonatomic) BOOL shouldRelaxThreshold;
@property (readonly, nonatomic) BOOL shouldAdjustThresholdOnAgeType;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
