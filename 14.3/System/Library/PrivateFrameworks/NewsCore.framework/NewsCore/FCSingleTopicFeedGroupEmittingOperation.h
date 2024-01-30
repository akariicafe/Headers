@interface FCSingleTopicFeedGroupEmittingOperation : FCSingleTagFeedGroupEmittingOperation

- (void)supplementFeedItems:(id)a0 fromCursor:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)a0;

@end
