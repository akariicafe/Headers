@class FCMapTable;

@interface FCFeedItemHeadlinesOperationProperties : NSObject

@property (retain, nonatomic) FCMapTable *resultHeadlinesByFeedItem;
@property (copy, nonatomic) FCMapTable *feedItemScoreProfiles;

- (void)dealloc;

@end
