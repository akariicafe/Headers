@class HUSetupBannerItem, HUCameraUpgradeOfferBannerItem, HUMultiUserTokenFixBannerItem, HMHome;

@interface HUBannerItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HUCameraUpgradeOfferBannerItem *cameraUpgradeOfferBannerItem;
@property (readonly, nonatomic) HUMultiUserTokenFixBannerItem *multiUserTokenFixBannerItem;
@property (readonly, nonatomic) HUSetupBannerItem *setupBannerItem;

+ (id)sortOrderForBannerItemCategory:(unsigned long long)a0;
+ (id)_bannerItemClasses;
+ (id /* block */)bannerItemComparator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;

@end
