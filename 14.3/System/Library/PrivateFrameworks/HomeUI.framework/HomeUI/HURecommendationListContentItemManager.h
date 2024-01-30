@class NSArray, HURecommendationItemModule;

@interface HURecommendationListContentItemManager : HFItemManager

@property (readonly, nonatomic) NSArray *serviceLikeItems;
@property (readonly, nonatomic) HURecommendationItemModule *recommendationItemModule;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)initWithServiceLikeItems:(id)a0;

@end
