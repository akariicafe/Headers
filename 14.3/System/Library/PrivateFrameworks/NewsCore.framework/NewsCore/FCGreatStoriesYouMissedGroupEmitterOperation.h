@interface FCGreatStoriesYouMissedGroupEmitterOperation : FCFeedGroupEmittingOperation

@property (nonatomic) unsigned long long restrictToBestSourceFeeds;

- (id)_feedTransformation;
- (void)performOperation;
- (id)initWithContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2 groupEmitterIdentifier:(id)a3;

@end
