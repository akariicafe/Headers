@class FCFDBFeed;

@interface FCFeedInsertionToken : NSObject {
    FCFDBFeed *_fromFeed;
    unsigned long long _fromOrder;
    unsigned long long _toOrder;
}

- (void).cxx_destruct;

@end
