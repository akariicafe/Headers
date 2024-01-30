@class HMHome, NSSet, NSArray, NSMutableSet, HUTriggerItemProvider, HRERecommendationItemProvider;
@protocol HUAvailableRelatedTriggerItemModuleContextProviding;

@interface HUAvailableRelatedTriggerItemProvider : HFItemProvider

@property (retain, nonatomic) HRERecommendationItemProvider *recommendationItemProvider;
@property (retain, nonatomic) HUTriggerItemProvider *relatedActiveTriggerItemProvider;
@property (retain, nonatomic) NSMutableSet *triggerItems;
@property (retain, nonatomic) NSMutableSet *updatesDisabledReasons;
@property (readonly, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *relatedItems;
@property (copy, nonatomic) id /* block */ recommendationsFilter;
@property (copy, nonatomic) id /* block */ triggerFilter;
@property (readonly, nonatomic) id<HUAvailableRelatedTriggerItemModuleContextProviding> context;

- (void).cxx_destruct;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (void)disableUpdatesWithReason:(id)a0;
- (void)endDisableUpdatesWithReason:(id)a0;
- (id)itemsToHideInSet:(id)a0;
- (id)initWithHome:(id)a0 relatedItems:(id)a1 context:(id)a2;
- (void)_buildProviders;
- (id)reloadAvailableTriggerItemsWithObjects:(id)a0;
- (BOOL)relatedItemsAffectedByTrigger:(id)a0;

@end
