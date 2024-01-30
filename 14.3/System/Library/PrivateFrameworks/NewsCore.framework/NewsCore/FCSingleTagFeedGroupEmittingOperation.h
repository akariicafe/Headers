@interface FCSingleTagFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (BOOL)_runningPPT;
- (id)feedTransformations;
- (void)supplementFeedItems:(id)a0 fromCursor:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)a0;
- (void)performOperation;
- (void)_fetchOrdinaryHeadlinesWithCompletionHandler:(id /* block */)a0;
- (void)_fetchPinnedHeadlinesWithCompletionHandler:(id /* block */)a0;

@end
