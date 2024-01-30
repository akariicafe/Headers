@class FCPersonalizationWhitelist, NSString, FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore, FCTodayPrivateData;

@interface NTFeedPersonalizer : NSObject <FCFeedPersonalizing>

@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (retain, nonatomic) id<FCReadonlyPersonalizationAggregateStore> readonlyPersonalizationAggregateStore;
@property (nonatomic) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property (copy, nonatomic) id<FCTodayPrivateData> todayData;
@property (readonly) FCPersonalizationWhitelist *whitelist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sortItems:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)sortItems:(id)a0 options:(long long)a1;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;
- (unsigned long long)whitelistLevelForTagID:(id)a0;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1 preselectedItems:(id)a2;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)sortItems:(id)a0 configurationSet:(long long)a1;
- (double)decayedPublisherDiversificationPenalty;
- (id)rankTagIDsDescending:(id)a0;
- (id)scoresForTagIDs:(id)a0;
- (id)initWithPersonalizationTreatment:(id)a0 readonlyPersonalizationAggregateStore:(id)a1 articleDiversificationSimilarityExpectationStart:(double)a2 articleDiversificationSimilarityExpectationEnd:(double)a3 articleDiversificationUniquePublisherExpectationSlope:(double)a4 articleDiversificationUniquePublisherExpectationYIntercept:(double)a5 todayData:(id)a6;
- (id)_userProfile;
- (void)prepareFavoritesWithCompletionHandler:(id /* block */)a0;

@end
