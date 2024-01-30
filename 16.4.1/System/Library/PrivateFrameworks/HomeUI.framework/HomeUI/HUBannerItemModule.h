@class HUDashboardContext, HUDropInBannerItemProvider, NSSet, NSString, HFTransformItemProvider, HUBannerItemProvider;

@interface HUBannerItemModule : HFItemModule <HUDropInBannerItemProviderDelegate, HFItemHiding>

@property (retain, nonatomic) HUBannerItemProvider *bannerItemProvider;
@property (retain, nonatomic) HUDropInBannerItemProvider *dropInBannerItemProvider;
@property (retain, nonatomic) HFTransformItemProvider *statusBannerItemProvider;
@property (retain, nonatomic) NSSet *hiddenBanners;
@property (readonly, nonatomic) HUDashboardContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_statusBannerItemClassForStatusItemClass:(Class)a0;

- (void).cxx_destruct;
- (id)_itemsToHideInSet:(id)a0;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)didUpdateDropInAvailability:(id)a0;
- (id)initWithContext:(id)a0 itemUpdater:(id)a1;

@end
