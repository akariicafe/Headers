@interface FCNewFavoriteFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)performOperation;
- (id)_ignoredTagIDs;
- (void)_buildGroupWithCandidateTags:(id)a0 exhaustedTagIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)_constructLocalNewsSupergroupForChannelWithGroupConfig:(id)a0 forYouConfig:(id)a1 completionBlock:(id /* block */)a2;
- (void)_constructClassicGroupWithTag:(id)a0 completionHandler:(id /* block */)a1;

@end
