@interface HMBMutableCloudZoneConfiguration : HMBCloudZoneConfiguration

@property BOOL shouldRebuildOnManateeKeyLoss;
@property BOOL shouldSuppressDelegateCallbacksOnInitialFetch;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
