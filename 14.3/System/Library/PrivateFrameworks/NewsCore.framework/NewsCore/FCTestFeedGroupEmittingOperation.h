@interface FCTestFeedGroupEmittingOperation : FCSingleTagFeedGroupEmittingOperation

@property (nonatomic) BOOL disableFiltering;

- (id)feedTransformations;
- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)a0;

@end
