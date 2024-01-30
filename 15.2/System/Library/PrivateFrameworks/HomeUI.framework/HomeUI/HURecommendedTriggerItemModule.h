@class HRERecommendationItemProvider, NSString, HFStaticItem, HMHome;

@interface HURecommendedTriggerItemModule : HFItemModule <HFItemHiding>

@property (retain, nonatomic) HRERecommendationItemProvider *recommendationItemProvider;
@property (retain, nonatomic) HFStaticItem *moreButtonItem;
@property (readonly, nonatomic) HMHome *home;
@property (nonatomic) long long maximumNumberOfShownRecommendations;
@property (nonatomic) BOOL hideSectionHeaderTitle;
@property (copy, nonatomic) id /* block */ filter;
@property (copy, nonatomic) id /* block */ configureBlock;
@property (nonatomic) unsigned long long engineOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowRecommendation:(id)a0;
+ (id /* block */)rankComparator;

- (void).cxx_destruct;
- (id)initWithItemUpdater:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (id)_itemsToHideInSet:(id)a0;
- (id)buildItemProviders;
- (unsigned long long)_effectiveRecommendationEngineOptionsWithOptions:(unsigned long long)a0;
- (id)_buildStaticItems;

@end
