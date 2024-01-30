@interface FCTrendingStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (nonatomic) long long desiredArticlesCount;

- (id)_filterTrendingHeadlines:(id)a0;
- (void)performOperation;
- (void)_performOperation;

@end
