@interface HMBCloudZoneConfiguration : HMFObject

@property BOOL shouldRebuildOnManateeKeyLoss;
@property BOOL shouldSuppressDelegateCallbacksOnInitialFetch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
