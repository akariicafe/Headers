@class FCMyArticlesOperation, NSMapTable, FCTopStoriesOperation, NSDictionary, FCTopStoriesOperationResult, FCSpotlightOperationResult, FCForYouConfig, NSHashTable, NFUnfairLock, NSOperationQueue, NSArray, FCForYouConfigHeadlinesOperation, NSError, FCEditorialOperation;
@protocol FCChannelProviding;

@interface FCForYouCatchUpOperation : FCOperation

@property (nonatomic) long long contentTypes;
@property (retain, nonatomic) FCMyArticlesOperation *myArticlesOperation;
@property (retain, nonatomic) FCTopStoriesOperation *topStoriesOperation;
@property (retain, nonatomic) FCEditorialOperation *editorialOperation;
@property (retain, nonatomic) FCForYouConfigHeadlinesOperation *forYouConfigOperation;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSHashTable *conditionWaiters;
@property (retain, nonatomic) NFUnfairLock *conditionWaitersLock;
@property (readonly, copy) NSDictionary *feedContextByFeedID;
@property (readonly, copy, nonatomic) NSError *catchUpError;
@property (readonly, copy, nonatomic) FCForYouConfig *forYouConfig;
@property (readonly, copy, nonatomic) id<FCChannelProviding> topStoriesChannel;
@property (readonly, copy, nonatomic) FCTopStoriesOperationResult *topStoriesResult;
@property (readonly, copy, nonatomic) NSArray *trendingHeadlines;
@property (readonly, copy, nonatomic) NSArray *nonEditorialFeedItems;
@property (readonly, copy, nonatomic) NSMapTable *nonEditorialScoreProfiles;
@property (readonly, copy, nonatomic) FCSpotlightOperationResult *spotlightResult;

+ (id)sharedCatchUpOperationForEdition:(id)a0 contentTypes:(long long)a1 configuration:(id)a2 context:(id)a3;

- (id)waiterForContentTypes:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 configuration:(id)a1 dateRange:(id)a2 contentTypes:(long long)a3 background:(BOOL)a4;
- (void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)a0 minFamilySize:(unsigned long long)a1 block:(id /* block */)a2;
- (void)_addConditionWaiter:(id)a0;
- (id)waiterForCondition:(id)a0;
- (void)_serviceConditionWaiters;
- (void)performOperation;
- (BOOL)isWaitingForContentTypes:(long long)a0;
- (void)operationDidFinishWithError:(id)a0;
- (id)orphanedEditorialHeadlinesAfterTransformation:(id)a0 minFamilySize:(unsigned long long)a1;
- (id)nonEditorialFeedItemsAfterTransformation:(id)a0;
- (id)catchUpErrorForContentTypes:(long long)a0;

@end
