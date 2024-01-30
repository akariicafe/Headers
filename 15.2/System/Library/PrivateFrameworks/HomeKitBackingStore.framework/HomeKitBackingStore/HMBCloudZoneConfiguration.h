@interface HMBCloudZoneConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property BOOL shouldRebuildOnManateeKeyLoss;

- (id)attributeDescriptions;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
