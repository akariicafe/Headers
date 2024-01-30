@class FCPaidSubscriptionCursor;

@interface FCPaidSubscriptionGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (retain, nonatomic) FCPaidSubscriptionCursor *fromCursor;
@property (retain, nonatomic) FCPaidSubscriptionCursor *toCursor;
@property (retain, nonatomic) FCPaidSubscriptionCursor *resultCursor;

- (BOOL)alwaysShowExpiredGroups;
- (void)_continueWithEnumerator:(id)a0 groupedFeedItems:(id)a1 validPurchasedTagIDs:(id)a2;
- (void)_constructGroupForChannelWithIdentifier:(id)a0 usingFeedItems:(id)a1 feedFilterOptions:(long long)a2 completionBlock:(id /* block */)a3;
- (id)_feedItemsTransformationWithOptions:(long long)a0;
- (void)_constructClassicGroupForChannelWithIdentifier:(id)a0 usingFeedItems:(id)a1 feedFilterOptions:(long long)a2 completionBlock:(id /* block */)a3;
- (void)_fetchHeadlinesForFeedItems:(id)a0 feedContextByFeedID:(id)a1 block:(id /* block */)a2;
- (void)performOperation;
- (void)_constructSupergroupForChannelWithGroupConfig:(id)a0 forYouConfig:(id)a1 usingFeedItems:(id)a2 feedFilterOptions:(long long)a3 completionBlock:(id /* block */)a4;
- (id)_createGroupForChannel:(id)a0 headlines:(id)a1;
- (id)_additionalFeedItemsTransformationLimitedToNumberOfFeedItems:(unsigned long long)a0 withOptions:(long long)a1;
- (void)_fetchAdditionalFeedItemsForChannel:(id)a0 feedRange:(id)a1 block:(id /* block */)a2;
- (BOOL)unlimitedBackfill;
- (void)_fetchTagForSourceChannelIdentifier:(id)a0 block:(id /* block */)a1;
- (void)_performOperation;

@end
