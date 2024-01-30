@class NSMutableDictionary, HURecommendationItemProvider, NSMutableSet, NSArray, NSSet, HMHome;

@interface HURecommendationItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) NSMutableDictionary *buildersForItems;
@property (retain, nonatomic) HURecommendationItemProvider *recommendationItemProvider;
@property (retain, nonatomic) NSMutableSet *updatesDisabledReasons;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *serviceLikeItems;
@property (nonatomic) unsigned long long engineOptions;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)itemProviders;
- (void)disableUpdatesWithReason:(id)a0;
- (id)builderForItem:(id)a0 context:(id)a1;
- (void)endDisableUpdatesWithReason:(id)a0;
- (id)_createItemProviders;
- (id)initWithServiceLikeItems:(id)a0 itemUpdater:(id)a1 home:(id)a2;
- (BOOL)fmfNotAvailable;
- (id)_headerTitleForSectionWithItems:(id)a0;

@end
