@class NSArray, NSMutableSet, HRERecommendationEngine, HMHome;

@interface HURecommendationItemProvider : HFItemProvider

@property (retain, nonatomic) HRERecommendationEngine *recommendationEngine;
@property (retain, nonatomic) NSMutableSet *recommendationItems;
@property (nonatomic) BOOL firstUpdateComplete;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *serviceLikeItems;
@property (nonatomic) unsigned long long engineOptions;
@property (copy, nonatomic) id /* block */ filter;
@property (nonatomic) BOOL updatesDisabled;

+ (id)filterRecommendations:(id)a0;
+ (id)_highestRankRecommendations:(id)a0 forKeyGenerator:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)initWithHome:(id)a0 andServiceLikeItems:(id)a1;
- (id)reloadItemsWithRecommendations:(id)a0 filter:(id /* block */)a1 itemMap:(id /* block */)a2;

@end
