@class FCFDBFeed;

@interface FCFeedInsertionToken : NSObject

@property (retain, nonatomic) FCFDBFeed *fromFeed;
@property (nonatomic) unsigned long long fromOrder;
@property (nonatomic) unsigned long long toOrder;

- (void).cxx_destruct;

@end
