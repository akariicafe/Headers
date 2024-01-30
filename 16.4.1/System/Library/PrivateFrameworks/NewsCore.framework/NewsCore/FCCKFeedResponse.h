@class NSString, NSArray, NSData;

@interface FCCKFeedResponse : NSObject {
    BOOL _reachedEnd;
    BOOL _reachedOrderLimit;
    BOOL _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    unsigned long long _extent;
    NSData *_cursor;
}

- (id)description;
- (void).cxx_destruct;

@end
