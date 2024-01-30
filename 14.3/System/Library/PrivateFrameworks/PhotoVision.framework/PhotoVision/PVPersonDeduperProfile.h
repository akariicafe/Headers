@interface PVPersonDeduperProfile : NSObject <NSCopying>

@property (nonatomic) double strictMaximumDistance;
@property (nonatomic) double normalMaximumDistance;
@property (nonatomic) double fuzzyMaximumDistance;
@property (nonatomic) BOOL shouldRelaxThreshold;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
