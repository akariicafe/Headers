@interface HMBMutableCloudZoneConfiguration : HMBCloudZoneConfiguration <NSCopying, NSMutableCopying>

@property BOOL shouldRebuildOnManateeKeyLoss;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
