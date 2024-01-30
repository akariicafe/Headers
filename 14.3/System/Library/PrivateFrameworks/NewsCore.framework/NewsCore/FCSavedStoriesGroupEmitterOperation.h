@interface FCSavedStoriesGroupEmitterOperation : FCFeedGroupEmittingOperation

@property (nonatomic) long long desiredArticlesCount;

- (void)performOperation;

@end
