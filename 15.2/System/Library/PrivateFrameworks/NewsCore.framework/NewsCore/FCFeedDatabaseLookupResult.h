@class NSArray, FCFeedRange, NSData;

@interface FCFeedDatabaseLookupResult : NSObject {
    BOOL _exhaustedRange;
    NSArray *_feedItems;
    FCFeedRange *_feedRange;
    NSData *_ckFromCursor;
    unsigned long long _ckFromOrder;
    unsigned long long _ckToOrder;
    id _insertionToken;
}

- (id)description;
- (void).cxx_destruct;

@end
