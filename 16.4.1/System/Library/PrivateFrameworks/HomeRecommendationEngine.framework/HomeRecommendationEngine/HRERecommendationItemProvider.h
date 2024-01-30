@class NSArray, NSMutableSet, HRERecommendationEngine, HFAccessoryTypeGroup, HMHome;

@interface HRERecommendationItemProvider : HFItemProvider

@property (retain, nonatomic) HRERecommendationEngine *recommendationEngine;
@property (retain, nonatomic) NSMutableSet *recommendationItems;
@property (nonatomic) BOOL firstUpdateComplete;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *serviceLikeItems;
@property (readonly, nonatomic) HFAccessoryTypeGroup *accessoryTypeGroup;
@property (nonatomic) unsigned long long engineOptions;
@property (copy, nonatomic) id /* block */ filter;
@property (copy, nonatomic) id /* block */ configureBlock;
@property (nonatomic) BOOL updatesDisabled;

+ (id)_highestRankRecommendations:(id)a0 forKeyGenerator:(id /* block */)a1;
+ (id)filterRecommendations:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)a0 andServiceLikeItems:(id)a1;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 andAccessoryTypeGroup:(id)a1;
- (id)reloadItemsWithRecommendations:(id)a0 filter:(id /* block */)a1 itemMap:(id /* block */)a2;

@end
