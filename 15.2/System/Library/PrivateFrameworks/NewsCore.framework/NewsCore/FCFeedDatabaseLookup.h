@class NSString, FCFeedRange, FCFeedItemFeature;

@interface FCFeedDatabaseLookup : NSObject {
    BOOL _cachedOnly;
    NSString *_feedID;
    FCFeedRange *_feedRange;
    unsigned long long _maxCount;
    FCFeedItemFeature *_requiredFeature;
}

- (id)description;
- (void).cxx_destruct;

@end
