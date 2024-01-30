@class NSString, FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore, FCTodayPrivateData;

@interface FCFeedPersonalizer : NSObject <FCFeedPersonalizing, FCPersonalizationFunctionProviding>

@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (retain, nonatomic) id<FCReadonlyPersonalizationAggregateStore> readonlyPersonalizationAggregateStore;
@property (nonatomic) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property (copy, nonatomic) id<FCTodayPrivateData> todayData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;
- (id)sortItems:(id)a0 options:(long long)a1;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1 preselectedItems:(id)a2;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (double)decayedPublisherDiversificationPenalty;
- (id)scoresForTagIDs:(id)a0;
- (id)initWithPersonalizationTreatment:(id)a0 readonlyPersonalizationAggregateStore:(id)a1 articleDiversificationSimilarityExpectationStart:(double)a2 articleDiversificationSimilarityExpectationEnd:(double)a3 articleDiversificationUniquePublisherExpectationSlope:(double)a4 articleDiversificationUniquePublisherExpectationYIntercept:(double)a5 todayData:(id)a6;
- (void)prepareFavoritesWithCompletionHandler:(id /* block */)a0;
- (id)sortItems:(id)a0 configurationSet:(long long)a1;
- (unsigned long long)whitelistLevelForTagID:(id)a0;
- (id)_userProfile;
- (id)sortItems:(id)a0;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1;
- (id)rankTagIDsDescending:(id)a0;
- (void).cxx_destruct;

@end
